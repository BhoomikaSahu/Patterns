/*Enter a number : 3
1 * 2 * 3 * 10 * 11 * 12
    4 * 5 * 8 * 9
        6 * 7
*/
#include<iostream>
using namespace std;
int main()
{
	int n, c=0, b=1;
    cin >> n;
    int d=n*(n+1)-n;
    n = n+1;
    while(n--)
    {
        
        for(int j=1; j<=n*4-1; j++)
        {
            if(j % 2 != 0)
                if(j < n*2)
                    cout << ++c;
                else 
                    cout << ++d;
            else 
                cout << " * ";  
        }
    cout.width(1+4*b++);
    d = d-(n*2-1);
    cout << endl;
    }
	return 0;
}