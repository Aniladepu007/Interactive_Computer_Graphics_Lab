#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;
typedef long double ld;

void ddaCircle(int xc, int yc, int r, int COLOR) {
ll n = ceil(log2(r)); if(pow(2,n)==r)n++;
long double e = (long double)1/pow(2,n), x1 = 0, y1 = r;

while(x1 <= r) {
      putpixel(xc + x1,yc - y1,COLOR);
      putpixel(xc - x1,yc - y1,COLOR);
      putpixel(xc - x1,yc + y1,COLOR);
      putpixel(xc + x1,yc + y1,COLOR);
      x1 += e * y1;
      y1 -= e * x1;
      delay(25);
 }
}

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);
      ll x,y,r; //cin>>x>>y>>r;

      putpixel(320,240,YELLOW);
      ddaCircle(320,240,100,BLUE);
      delay(2000);
      getchar();
      closegraph();
      return 0;
}
