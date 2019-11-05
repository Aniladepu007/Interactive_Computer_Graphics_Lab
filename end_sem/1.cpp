#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

void printMessage(int x, int y) {
      for (int i=3; i<7; i++) {
            setcolor(i);
            setlinestyle(3,1,5);
            char str[]="Anil Kumar Adepu";
            outtextxy(x,y,str);
            delay(50);
      }
//      delay(2000);
}

void loopAgain() {
      for(ll i=1;;i+=5) {
            int flag=0;
            ll x = rand()%200, y = rand()%100;
            ll pos = rand()%500;
            for(ll ii=1; ii<10;ii+=5) {
                  if(pos+ii*i+x>500){flag=1; break;}
                  printMessage(pos+ii*i+x,pos+ii*i+y);
                  cleardevice();
            }
            if(flag)break;
      }
}


int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);
ll n=100;
      while(n--) {
            loopAgain();
      }

      delay(2000);
      getchar();
      closegraph();
      return 0;

}
