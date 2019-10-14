#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;
typedef long double ld;
void Bham_line(ll x0, ll y0, ll x1, ll y1, ll COLOR) {
if(x1 < x0 && y1 < y0 ) {swap(x0,x1); swap(y0,y1);}
if(x1 < x0 && y1 > y0 ) {swap(x0,x1); swap(y0,y1);}

ll dx = x1 - x0, dy = y1 - y0;
ld slope = dy/(ld)dx;
//cout<<slope;
//if(slope > 0) {
      ll dv_old = dx - 2*dy, dir = dx < 0 ? -1 : 1;
      ll x = min(x0,x1), y = min(y0,y1);
      while(x < max(x0,x1)) {
            putpixel(x, y, COLOR);
            delay(10);
            if( dv_old >=0 ) {
                  x += 1*dir;
                  dv_old -= 2*dy;
            }
            else {
                  x += 1*dir;
                  y += 1*dir;
                  dv_old -= 2*(dy - dx);
            }
      }
//}
//else {


//}


}

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);

      //putpixel(350,300,YELLOW);
      Bham_line (320, 250, 440, 320, YELLOW);
      Bham_line (320, 250, 240, 200, BLUE);
      // Bham_line (320, 250, 350, 300, CYAN);
      // Bham_line (320, 250, 300, 110, RED);
      // Bham_line (320, 250, 350, 200, YELLOW);    //5
//      Bham_line (320, 250, 290, 300, RED);       //6
      Bham_line (320, 250, 200, 290, BLUE);      //7
//      Bham_line (320, 250, 440, 210, MAGENTA);   //8
      delay(2000);
      getchar();
      closegraph();
      return 0;
}
