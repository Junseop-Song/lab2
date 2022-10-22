#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

typedef struct{
	char* name;
	int mid;
	int last;
}node;

char* nametable;
node* nodetable;
node* root = NULL;

int compare(const void *com1, const void *com2){
	return strcmp(((node *)com1)->name, ((node *)com2)->name);
}

void show_node(const void *, VISIT, int);

int main(){
	int count;
	printf("student number : ");
	scanf("%d", &count);
	nametable = (char *) malloc(sizeof(char) * count);
	nodetable = (node *) malloc(sizeof(node) * count);
	
	char *stuptr = nametable;
	node *nodeptr = nodetable;
	node **ret;
	int i = 0;
	
	for(int i=0; i<count; i++){
		printf("student score : \n");
		scanf("%s %d %d", stuptr, &nodeptr->mid, &nodeptr->last);
		nodeptr->name = stuptr;
		
		ret = (node**) tsearch ((void *) nodeptr, (void **) &root, compare);
		printf("\"%s\"", (*ret)->name);
		
		if(*ret == nodeptr)
			printf("add to tree \n");
		else
			printf("exist in the tree \n");
		
		stuptr += strlen(stuptr) + 1;
		nodeptr++;
	}
	
	twalk((void *) root, show_node);
	free(nametable);
	free(nodetable);
	
	return 0;
}
void show_node(const void *nodeptr, VISIT order, int level){
	if(order == preorder || order == leaf){
		printf("name = %-10s, mid = %d, last = %d\n",
			(*(node **)nodeptr)->name,
			(*(node **)nodeptr)->mid,
			(*(node **)nodeptr)->last);
	}
}

