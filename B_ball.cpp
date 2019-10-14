#include "my_functions.h"
#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

void setup() {
      dda_line(310,250,0,405,YELLOW);   //left
      dda_line(330,250,640,405,YELLOW); //right
      dda_line(308,252,0,425,YELLOW);   //perspective
      dda_line(332,252,640,425,YELLOW); //perspective
      dda_line(330,250,640,250,YELLOW); // horizontal
      dda_line(310,250,0,250,YELLOW);   // horizontal
      dda_line(319,275,321,275,YELLOW);
      dda_line(321,275,328,480,YELLOW);
      dda_line(319,275,312,480,YELLOW);
}

void makeBall(ll x, ll y, ll r, ll COLOR) {
      setcolor(COLOR);
      ddaCircle(x,y,r,COLOR);
      delay(50);
      floodfill(x,y,COLOR);
      delay(80);
      setcolor(BLACK);
      ddaCircle(x,y,r,BLACK);
      floodfill(x,y,BLACK);
      delay(15);
      setup();
}

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);
      ll itr=5;
      while(itr--) {
            setup();
            ll x=320,y=250,y1=250,r=1;
            ll i=0;
            while(i++ < 100) {
                  if(y1+r >480)break;
                  if(i & 1) {
                        if(y1>300)y--;
                        else y-=4;
                        makeBall(x,max(0,y-=3*i),r,CYAN); y1-=3*i;
                  }
                  if(!(i & 1)) {
                         y--; makeBall(x,min(480,y+=4*i),r+=3,CYAN); y1+=4*i;
                   }
                  delay(20);
            }
      }
      delay(2000);
      getchar();
      closegraph();
      return 0;
}
