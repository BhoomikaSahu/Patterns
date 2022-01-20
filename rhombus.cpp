/*
     # # # # # #
    #         #
   #         #
  #         #
 #         #
# # # # # #
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout << "Enetr a number : ";
	cin >> n ;
	 
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n*2-1; j++)
		{
		    if(i==1&&j>n-i||i==n&&j<=n||j==n+1-i||j==n+n-i)
			cout<< "*";
			else
			cout<<" ";
			
		}
		cout << endl;
	}
	return 0;
}
