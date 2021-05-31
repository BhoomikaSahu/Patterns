/*Enter a number : 5
         E
       E D E
     E D C D E
   E D C B C D E
 E D C B A B C D E
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
		cout.width((n+1-i)*2);
		for(j=n;j>=n+1-i;j--)
		{
			cout<<char(64+j)<<" ";
		}
		for(j=n+2-i;j<=n;j++)
		{   
			cout<<char(64+j)<<" ";
		}
		
		cout<<endl;
	}	
	return 0;
}
