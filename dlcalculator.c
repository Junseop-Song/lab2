#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main()
{
	int (*add)(int, int);
	int (*minus)(int, int);
	int (*multi)(int, int);
	int (*divide)(int, int);
	int n1, n2;
	void *handle;
	char *error;

	handle = dlopen("./lib/libcalculator.so", RTLD_LAZY);
	if (!handle)
	{
		fputs(dlerror(), stderr);
		exit(1);
	}
	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	minus = dlsym(handle, "minus");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	multi = dlsym(handle, "multi");
	if ((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	divide = dlsym(handle, "divide");
	if ((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("첫 번째수 입력 : ");
	scanf("%d", &n1);
	printf("두 번째수 입력 : ");
	scanf("%d", &n2);

	printf("%d + %d = %d\n", n1, n2, (*add)(n1, n2));
	divide = dlsym(handle, "divide");
	if ((error = dlerror()) !=NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("첫 번째수 입력 : ");
	scanf("%d", &n1);
	printf("두 번째수 입력 : ");
	scanf("%d", &n2);

	printf("%d + %d = %d\n", n1, n2, (*add)(n1, n2));
	printf("%d - %d = %d\n", n1, n2, (*minus)(n1, n2));
	printf("%d * %d = %d\n", n1, n2, (*multi)(n1, n2));
	printf("%d / %d = %d\n", n1, n2, (*divide)(n1, n2));
	
	dlclose(handle);
	return 0;
}



