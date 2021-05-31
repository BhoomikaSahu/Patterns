/*n=5
ZYXWV
YXWV
XWV
WV
V
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
			cout<<(char)(85+j)<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
