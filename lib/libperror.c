#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void libperror(const char *str)
{
	if(str == NULL)
		printf("%s",strerror(errno));
	else
		printf("%s : %s",str,strerror(errno));
}

int main(int argc, char *argv[])
{
	FILE *f;

	if (argc < 2)
	{
		printf("Usage : perror_use nofilename\n");
		exit(1);
	}
	if ((f=fopen(argv[1], "r")) == NULL )
	{
		libperror(NULL);
		libperror("20183125");
		printf("\n");
		perror(NULL);
		perror("20183125");
		exit(1);
	}
	printf("Open a file \"%s\".\n", argv[1]);
	fclose(f);
}

