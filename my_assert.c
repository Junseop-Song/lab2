#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define TRUE 1
#define FALSE 0
#define STRINGFY
int my_assert(int expression)
{
	if (expression == FALSE)
	{
		printf("%s: %s: ",__func__,__FILE__);
		return FALSE;
	}
	else
		return TRUE;
}

void foo(int num)
{
	if (my_assert(((num>=0) && (num <= 100))) == FALSE)
	{
		printf("%s: Assertion '%d' failed.\n",__func__,STRINGFY(((num >= 0) && (num <= 100))));
		abort();
	}
	printf("foo : num = %d\n", num);
}

int main(int argc, char *argv[])
{
	int num;
	if (argc < 2)
	{
		fprintf(stderr, "Usage : my_assert_test aNumber\n(0 <= aNumber <= 100)\n");
		exit(1);
	}
	
	num = atoi(argv[1]);
	foo(num);
}

