#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

void dda_line(ll x0, ll y0, ll x1, ll y1, ll COLOR) {
      ll dx = x1-x0, dy = y1-y0;
      double x_m = dx/(double)max(abs(dx), abs(dy));
      double y_m = dy/(double)max(abs(dx), abs(dy)), x=x0, y=y0;

      for(ll i=0; i<=max(abs(dx), abs(dy)); i++) {
            putpixel(x,y,COLOR);
            x += x_m;
            y += y_m;
//            delay(25);
      }
}

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
//      delay(25);
 }
}
