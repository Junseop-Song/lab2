#include <iostream>
#include <numeric>
#include <iterator>
#include <map>
using namespace std;

typedef struct{
	int mid;
	int last;
	char name[30];
}node;

int main()
{
	int count;
	map<int, node> map;
	
	printf("student number : ");
	scanf("%d", &count);
	
	for(int i=0; i<count; i++){
		node node;
		
		printf("student score : ");
		scanf("%s %d %d", node.name, &node.mid, &node.last);
		map.emplace(i,node);
		
	for(auto i = begin(map); i!= end(map); ++i){
		cout<<i->second.name<<" "<<i->second.mid<<" "<<i->second.last<<endl;
	}	
}
}
