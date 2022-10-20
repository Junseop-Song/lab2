#include <stdio.h>
#include "calculationlib.h"

int main()
{
	int n1, n2;

	printf("첫번째 수 입력 : ");
	scanf("%d", &n1);
	printf("두번번째 수 입력 : ");
	scanf("%d", &n2);

	printf("%d + %d = %d\n", n1, n2, add(n1, n2));
	printf("%d - %d = %d\n", n1, n2, minus(n1, n2));
	printf("%d * %d = %d\n", n1, n2, multi(n1, n2));
	printf("%d / %d = %d\n", n1, n2, divide(n1, n2));
	
	return 0;
}

