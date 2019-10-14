#include<bits/stdc++.h>
#include<graphics.h>
#include "my_functions.h"
using namespace std;
int epoch = 5;

void setup() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);

}
int main() {
      if(epoch==5)setup();
      dda_line(100, 120, 640, 120, LIGHTGRAY);
      dda_line(45, 160, 590, 160, WHITE);
      dda_line(100, 120, 45, 160, WHITE);
      dda_line(640, 120, 590, 160, WHITE);

      int start_angle = 0;
      int end_angle = 360;
      int x_rad = 60;
      int y_rad = 15;


      circle(200,265,20);
      circle(200,265,19);
      line(200, 245, 200, 195);
      line(200, 195, 190, 145);
      line(200, 195, 210, 145);

      line(200, 225, 190, 205);
      line(200, 225, 210, 205);
      line(190, 205, 205, 197);
      line(210, 205, 195, 197);
      delay(700);

      cleardevice();
      dda_line(100, 120, 640, 120, LIGHTGRAY);
      dda_line(45, 160, 590, 160, WHITE);
      dda_line(100, 120, 45, 160, WHITE);
      dda_line(640, 120, 590, 160, WHITE);
      circle(200,265,20);
      circle(200,265,19);
      line(200, 245, 200, 195);
      line(200, 195, 190, 145);
      line(200, 195, 210, 145);

      line(200, 225, 190, 205);
      line(200, 225, 210, 205);
      line(190, 205, 205, 197);

      int i = 0,j=0;
      while(i<=35)
      {
            //delay(1000);
        if(i<=25)
        {
        setcolor(15);
        line(200+i, 197+j, 210, 205);
        delay(10);
        setcolor(0);
        line(200+i, 197+j, 210, 205);
        i = i+4;
        }
        j=j+1;
        if(i==25)
            j=0;
        if(i>25)
        {
         setcolor(15);
         line(200+i, 197-j, 210, 205);
         delay(10);
         setcolor(0);
         line(200+i, 197-j, 210, 205);
         i+=2;
            if(i>35)
            {
                int x,y;
                for(int z=0;z<3;z++)
                {
                    x=y=0;
                    while(x<=20)
                    {
                        setcolor(15);
                        line(200+i-x, 197-j-y, 210, 205);
                        delay(10);
                        setcolor(0);
                        line(200+i-x, 197-j-y, 210, 205);
                        x+=1;
                        if(x<=12)
                        y+=2;

                    }
                    setcolor(15);
                    //line(185+i-x, 208-j-y, 210, 220);
                    int a=200+i-x, b=197-j-y;
                    x=0;
                    y=0;
                    while(x<=5)
                    {
                        setcolor(15);
                        line(200+i+x, 197-j+y, 210, 205);
                        delay(10);
                        setcolor(0);
                        line(200+i+x, 197-j+y, 210, 205);
                        x+=1;
                        //if(x>=12)
                        y+=2;

                   }

                    setcolor(15);
                    line(200+i+x, 197-j+y, 210, 205);
                    ellipse(400, 140, start_angle, end_angle, x_rad, y_rad);
                    floodfill(400,140,WHITE);
                    delay(700);
                    setcolor(0);
                    //if(z!=2)
                    line(200+i+x, 197-j+y, 210, 205);
                    floodfill(400,140,0);
                    ellipse(400, 140, start_angle, end_angle, x_rad, y_rad);
                }
                setcolor(15);
                line(200, 197, 210, 205);
            }
         }
      }

      //delay(2000);
      epoch--;
      if(epoch)main();

      delay(2000);
      getchar();
      closegraph();
      return 0;

}
