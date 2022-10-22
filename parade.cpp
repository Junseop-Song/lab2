#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	int r;
	int c;
	
	cout << "row : ";
	cin >> r;
	cout << "col : ";
	cin >> c;
	
	vector<vector<int>> parade1(c);
	vector<vector<int>> parade2(c);

	for(int i=0; i<c; i++){
		parade1[i] = vector<int>(r);
		parade2[i] = vector<int>(r);
	}
	
	cout << "number1 : \n";
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			cin >> n;
			parade1[i][j] = n;
		}
	}
	
	cout << "number2 : \n";
	for(int i=0; i<r; i++){
		for(int j=0; j<r; j++){
			cin >> n;
			parade2[i][j] = n;
		}
	}
	
	cout << "parade addition : \n";
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			cout<<parade1[i][j]+parade2[i][j]<<" ";
		}
		cout << endl;
	}
}
	
