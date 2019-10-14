#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;
ll epoch = 6;

void sierpinski(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll iter) {
    if(iter < epoch) {
            int vertices[] = {(x1+x2)/2, (y2+y1)/2, (x3+x2)/2, y3, (x3+x1)/2, (y3+y1)/2, (x1+x2)/2, (y2+y1)/2};
            drawpoly(4, vertices);
            iter++;
            delay(10);
            sierpinski((x1+x2)/2, (y2+y1)/2, x2, y2, (x3+x2)/2, y3, iter);
            sierpinski((x3+x1)/2, (y3+y1)/2, (x3+x2)/2, y3, x3, y3, iter);
            sierpinski(x1, y1, (x1+x2)/2, (y2+y1)/2, (x3+x1)/2, (y3+y1)/2, iter);
      }
}

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);

      // errorCode = graphresult();
      // if(errorCode != grOk) {
      //       cout<<"Graphics Error-Code :"<<grapherrormsg(errorcode)<<endl;
      //       cout<<"Press any key to exit\n";
      //       getchar();
      //       return 0;
      // }

      // else {
            // do some stuff
      int vertices[] = {320, 30, 50, 462,  550, 462, 320, 30};
	drawpoly(4, vertices);
      sierpinski(320, 30, 50, 462,  550, 462, 1);
      delay(2000);
      getchar();
      closegraph();
      return 0;
}
