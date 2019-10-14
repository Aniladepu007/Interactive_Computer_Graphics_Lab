#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

//METHOD-1
void dda_line(ll x0, ll y0, ll x1, ll y1, ll COLOR) {
      ll dx = x1-x0, dy = y1-y0;
      double x_m = dx/(double)max(abs(dx), abs(dy));
      double y_m = dy/(double)max(abs(dx), abs(dy)), x=x0, y=y0;

      for(ll i=0; i<=max(abs(dx), abs(dy)); i++) {
            putpixel(x,y,COLOR);
            x += x_m;
            y += y_m;
            delay(25);
      }
}

//METHOD-2
void dda_line1(ll x0, ll y0, ll x1, ll y1, ll COLOR) {
      ll dx = x1-x0, dy = y1-y0;
      double slope = double(dy)/double(dx);
      double x = x0, y = y0;
      if(slope >=0)
      {
            if(slope < 1)
            {
                  if(x0 < x1) {
                        for(ll i=x0; i<=x1; i++) {
                              putpixel(i,(int)round(y),COLOR);
                              y += abs(slope);
                              delay(25);
                        }
                  }
                  else {
                        for(ll i=x0; i>=x1; i--) {
                              putpixel(i,(int)round(y),COLOR);
                              y -= abs(slope);
                              delay(25);
                        }
                  }
            }
            else
            {
                  if(y0 < y1) {
                        for(ll i=y0; i<=y1; i++) {
                              putpixel((int)round(x),i,COLOR);
                              x += 1.0/abs(slope);
                              delay(25);
                        }
                  }
                  else {
                        for(ll i=y0; i>=y1; i--) {
                              putpixel((int)round(x),i,COLOR);
                              x -= 1.0/abs(slope);
                              delay(25);
                        }
                  }
            }
      }
      else
      {
            if(abs(slope) > 1)
            {
                  if(x0 < x1) {
                        for(ll i=x0; i<=x1; i++) {
                              putpixel(i,(int)round(y),COLOR);
                              y -= abs(slope);
                              delay(25);
                        }
                  }
                  else {
                        for(ll i=x0; i>=x1; i--) {
                              putpixel(i,(int)round(y),COLOR);
                              y += abs(slope);
                              delay(25);
                        }
                  }
            }
            else
            {
                  if(y0 < y1) {
                        for(ll i=y0; i<=y1; i++) {
                              putpixel((int)round(x),i,COLOR);
                              x -= 1.0/abs(slope);
                              delay(25);
                        }
                  }
                  else {
                        for(ll i=y0; i>=y1; i--) {
                              putpixel((int)round(x),i,COLOR);
                              x += 1.0/abs(slope);
                              delay(25);
                        }
                  }
            }
      }
}

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode;
      int errorCode;
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
            ll x0, y0, x1, y1, n=5;
            //while(n--) {
                 // cout<<"enter 2 points :\n";
                 // cin>>x0>>y0>>x1>>y1;
            //putpixel (320, 250, YELLOW);
            //putpixel (200, 290, YELLOW);
            dda_line (320, 250, 440, 320, YELLOW);
            dda_line (320, 250, 240, 200, BLUE);
            dda_line (320, 250, 350, 300, CYAN);
            dda_line (320, 250, 300, 110, RED);
            dda_line (320, 250, 350, 200, YELLOW);    //5
            dda_line (320, 250, 290, 300, RED);       //6
            dda_line (320, 250, 200, 290, BLUE);      //7
            dda_line (320, 250, 440, 210, MAGENTA);   //8

            //}
            delay(2000);
            getchar();
            closegraph();
            return 0;
      //}
}
