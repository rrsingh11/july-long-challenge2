#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// b+p = n                  -(i)
	//bx + py = r               -(ii)
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y,n,r,p=0,b=0;
	    scanf("%d %d %d %d",&x,&y,&n,&r);
	    if(r/y >= n)
	        cout << 0 << " " << n <<endl;
	   else if(r/x < n)
	        cout << -1 << endl;
	   else{
	       int fx = r-(y*n);
	       int gx = x-y;
	       b= fx/gx; //           - Solving i & ii
	       if(fx%gx!=0)
	        b++;
	       p=n-b;
	        cout << b << " " << p << endl;
	   }
	}
	return 0;
}