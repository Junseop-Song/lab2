#include <stdio.h>
#include <stdlib.h>

int main(){
	int r, c;
	
	printf("row = ");
	scanf("%d", &r);
	printf("col = ");
	scanf("%d", &c);
	
	int **parade1 = malloc(sizeof(int *) * r);
	int **parade2 = malloc(sizeof(int *) * r);
	
	for(int i = 0; i<r; i++){
		parade1[i] = malloc(sizeof(int) * c);
		parade2[i] = malloc(sizeof(int) * c);
	}
	
	printf("num1 : \n");
	for(int i = 0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &parade1[i][j]);
		}
	}
	
	printf("num2 : \n");
	for(int i = 0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &parade2[i][j]);
		}
	}
	
	printf("parade addition : \n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d ",parade1[i][j]+parade2[i][j]);
		}
		printf("\n");
	}
	free(parade1);
	free(parade2);
	
	return 0;
}

	
