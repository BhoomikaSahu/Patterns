/*n=5
5
54
543
5432
54321
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
		for(j=n;j>=n+1-i;j--)
		{
			cout<<j<<" ";
		}
	    cout<<endl;    
	}
	return 0;
}
