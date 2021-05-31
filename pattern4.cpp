/*n=5
12345
2345
345
45
5
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
		for(j=i;j<=n;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
