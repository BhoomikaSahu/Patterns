/* no.of rows = 7
#
##
###
####
###
##
#
*/
/* no. of rows = 6
#
##
###
###
##
#
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout << "Enetr number of rows : ";
	cin >> n ;
	 
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=(n/2)+1; j++)
		{
			if(i<=(n/2) && j<=i)
			cout << "# ";
			else  if(i>(n/2) && j<=n+1-i)
			cout << "# ";
		}
		cout << endl;
	}
	return 0;
}
