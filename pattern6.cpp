/*n=5
1
21
321
4321
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
		for(j=i;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
