/*Enter a number : 5
 5 4 3 2 1 2 3 4 5
   5 4 3 2 3 4 5
     5 4 3 4 5
       5 4 5
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
		cout.width(i+i);
		for(j=n;j>=i;j--)
		{
			cout<<j<<" ";
		}
		for(j=i+1;j<=n;j++)
		{   
			cout<<j<<" ";
		}	
		cout<<endl;
	}
	return 0;
}
