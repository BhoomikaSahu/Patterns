/*Enter a number : 5
A               A
A B           B A
A B C       C B A
A B C D   D C B A
A B C D E D C B A
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
			cout<<char(64+j)<<" ";
		}
		for(j=1;j<=2*n-2*i-1;j++)
		{
			cout<<"  ";
		}
		for(j=(i==n?i-1:i);j>=1;j--)
		{   
			cout<<char(64+j)<<" ";
		}	
		cout<<endl;
	}	
	return 0;
}
