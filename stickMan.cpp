#include "my_functions.h"
#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);

      int i;
      for(i=0;i<500;i+=5) {
            dda_line(20,380,580,380,YELLOW); //platform

            dda_line(35+i,340,35+i,310,MAGENTA); //body
            ddaCircle(35+i,295,10,MAGENTA); //head
            ddaCircle(35+i,295,9,MAGENTA); //head

            if(i%3==0) {
                  //right hand
                  dda_line(35+i,310,50+i,325,MAGENTA);
                  dda_line(50+i,325,36+i,330+6,MAGENTA);
                  //left hand
                  dda_line(35+i,310,20+i,325,MAGENTA);
                  dda_line(20+i,325,36-3+i,330,MAGENTA);

                  //right leg
            	dda_line(35+i,340,41+i,360,MAGENTA);
            	dda_line(41+i,360,38+i,380,MAGENTA);

                  //left leg
                  dda_line(35+i,340,29+i,370,MAGENTA);
                  dda_line(29+i,370,27+i,375,MAGENTA);

                  delay(10);
            }
            else if(i%3==1) {
                  //right hand
                  dda_line(35+i,310,50+i,325,MAGENTA);
                  dda_line(50+i,325,36+i,330,MAGENTA);
                  //left hand
                  dda_line(35+i,310,20+i,325,MAGENTA);
                  dda_line(20+i,325,36+i,330,MAGENTA);
                   //rightleg
                  dda_line(35+i,340,40+i,360,MAGENTA);
                  dda_line(40+i,360,40+i,380,MAGENTA);
                  //left leg
                  dda_line(35+i,340,30+i,360,MAGENTA);
                  dda_line(30+i,360,30+i,380,MAGENTA);
                  delay(10);
            }
            else if(i%3==2) {
                  //right hand
                  dda_line(35+i,310,50+i,325,MAGENTA);
                  dda_line(50+i,325,36+i+3,330,MAGENTA);
                  //left hand
                  dda_line(35+i,310,20+i,325,MAGENTA);
                  dda_line(20+i,325,36+i,330+6,MAGENTA);
                  //right dda_line
                  dda_line(35+i,340,41+i,370,MAGENTA);
                  dda_line(41+i,370,43+i,375,MAGENTA);
                  //left
                  dda_line(35+i,340,29+i,360,MAGENTA);
                  dda_line(29+i,360,32+i,380,MAGENTA);
                  delay(10);
            }
            delay(150);
            cleardevice();
      }
      delay(2000);
      getchar();
      closegraph();
      return 0;
}
