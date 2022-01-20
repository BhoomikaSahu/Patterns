// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;

int fact(int num){
    int ans=1;
    for(int i=1; i<=num; i++)
        ans *= i;
    return ans;
}

int ncr(int n, int r){
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main()
{
	int n;
	cout << "Enter number of rowa : ";
	cin >> n;
	
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ncr(i,j) << " ";
        }
        cout << endl;
    }

	return 0;
}
