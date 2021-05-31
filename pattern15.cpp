/*Enter a number : 5
5 4 3 2 1 2 3 4 5
4 3 2 1   1 2 3 4
3 2 1       1 2 3
2 1           1 2
1               1
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter a number : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n+1-i;j>=1;j--)
		{
			cout<<j<<" ";
		}
		for(j=1;j<=2*i-3;j++)
		{
			cout<<"  ";
		}
		for(j=(i==1?2:1);j<=n-i+1;j++)
		{   
			cout<<j<<" ";
		}	
		cout<<endl;
	}	
	return 0;
}
