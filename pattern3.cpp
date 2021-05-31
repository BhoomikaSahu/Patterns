/*n=5
1
22
333
4444
55555
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
		for(j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
