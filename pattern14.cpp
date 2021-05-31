/*Enter a number : 5
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
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
		for(j=1;j<i+i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
