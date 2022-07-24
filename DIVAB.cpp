#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,n;
	    cin >> a >> b >> n;
	    int x=n; 
	    if(a%b==0)
	        cout << -1 << endl;
	   else{     
        if(n%a!=0)
            x = n+a-(x%a); 
        for(x;!(x%a==0 && x%b!=0); x+=a);
        cout << x<< endl;
	   }
	}
	return 0;
}
