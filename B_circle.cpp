#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

void put_circle(ll xc, ll yc, ll x, ll y, ll COLOR) {
	putpixel(xc+x, yc+y, COLOR);
	putpixel(xc-x, yc+y, COLOR);
	putpixel(xc+x, yc-y, COLOR);
	putpixel(xc-x, yc-y, COLOR);
	putpixel(xc+y, yc+x, COLOR);
	putpixel(xc-y, yc+x, COLOR);
	putpixel(xc+y, yc-x, COLOR);
	putpixel(xc-y, yc-x, COLOR);
}

void B_circle(ll xc, ll yc, ll r, ll COLOR) {
	ll x = 0, y = r;
	ll d = 3 - 2 * r;
	put_circle(xc, yc, x, y, COLOR);
	while (y >= x) {
		x++;
		if (d > 0) {
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		put_circle(xc, yc, x, y, COLOR);
		delay(50);
	}
}

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);
      ll x,y,r;
      B_circle(320, 250, 100, CYAN);

      delay(2000);
      getchar();
      closegraph();
}
