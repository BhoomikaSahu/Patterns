/*
Enter a number : 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout << "Enetr a number : ";
	cin >> n ;
	for(i=1; i<=n; i++){
		j=1;
		while(j<=i){
			cout << char(2) << " ";
			j++;
		}
		j=1;
		while(j<=2*n-i*2){
			cout << "  ";
			j++;
		}
		j=1;
		while(j<=i){
			cout << char (2) <<" ";
			j++;
		}
		cout << endl;
	}
		for(i=1; i<=n; i++){
		j=n+1-i;
		while(j>=1){
			cout << char (2) << " ";
			j--;
		}
		j=1;
		while(j<=2*n-2*(n+1-i)){
			cout << "  ";
			j++;
		}
		j=n+1-i;
		while(j>=1){
			cout << char (2) << " ";
			j--;
		}
		cout << endl;
	}
	return 0;
}
