/* Print this pattern
   4 4 4 4 4 4 4 
   4 3 3 3 3 3 4 
   4 3 2 2 2 3 4
   4 3 2 1 2 3 4
   4 3 2 2 2 3 4 
   4 3 3 3 3 3 4
   4 4 4 4 4 4 4
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter a number : ";
	cin>>n;
	for(i=1; i<=2*n-1; i++){
		for(j=1; j<=2*n-1; j++){
			if(j>=i && j<=2*n-i)
			cout << n+1-i << " ";
			else if(i>j && i<2*n-j)
			cout << n+1-j << " ";
			else if(i<j && i>2*n-j)
			cout << j-n+1 << " ";
			else if(j>=2*n-i && j<=i)
			cout << i-n+1 << " ";
			else
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(i=1;i<=n;i++)
	{		
	    for(j=n;j>=n+1-i;j--)
	    {
			cout<<j<<" ";
		}
		for(j=1;j<=2*n-2*i-1;j++)
		{
			cout<<n+1-i<<" ";
		}
		for(j=(i==n?n+2-i:n+1-i);j<=n;j++)
		{   
			cout<<j<<" ";
		}
		cout<<endl;	
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=n;j>=i+1;j--)
		{
			cout<<j<<" ";
		}
		for(j=1;j<=i+i-1;j++)
		{
			cout<<i+1<<" ";
		}
		for(j=i+1;j<=n;j++)
		{   
			cout<<j<<" ";
		}	
		cout<<endl;
	}
	cout<<endl;
	
/*  Short code  */	
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            cout<<n-min<<" ";
        }
        cout<<endl;
    }

}
