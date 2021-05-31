/*n=5
1
01
101
0101
10101
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
			cout<<j%2<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
