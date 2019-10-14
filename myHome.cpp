#include "my_functions.h"
#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
typedef int ll;

void buildHome();

int32_t main() {
      ll graphicsDriver = DETECT, graphicsMode, errorCode;
      initgraph(&graphicsDriver, &graphicsMode, NULL);

      buildHome();

      for(ll i=0; i<100;i++) putpixel(rand()%640, rand()%120,YELLOW);

      setcolor(WHITE);
      ddaCircle(120,70,30,BLUE);
      ddaCircle(150,85,30,BLUE);

      floodfill(120,70,BLUE);
      ddaCircle(150,85,30,BLACK);
      ddaCircle(120,70,30,BLACK);
      delay(100);
      delay(20000);
      closegraph();
      return 0;
      //}
}

void buildHome() {
      dda_line(150, 200, 300, 220, WHITE);
      dda_line(150, 275, 300, 320, WHITE);
      dda_line(200, 290, 200, 245, WHITE);
      dda_line(175, 283, 175, 238, WHITE);
      dda_line(175, 238, 200, 245, WHITE);
      dda_line(150, 200, 150, 275, WHITE);
      dda_line(300, 220, 300, 320, WHITE);
      dda_line(150, 200, 225, 135, WHITE);
      dda_line(300, 220, 225, 135, WHITE);

      dda_line(425, 135, 225, 135, WHITE);
      dda_line(300, 220, 480, 200, WHITE);
      dda_line(425, 135, 480, 200, WHITE);
      dda_line(300, 320, 480, 275, WHITE);
      dda_line(480, 200, 480, 275, WHITE);

      dda_line(175, 238, 185, 245, WHITE);

      dda_line(175, 283, 185, 275, WHITE);
      dda_line(185, 245, 185, 275, WHITE);
      dda_line(185, 245, 185, 275, WHITE);

      dda_line(370, 245, 420, 235, WHITE);    //window
      dda_line(370, 245, 370, 270, WHITE);
      dda_line(370, 270, 420, 260, WHITE);
      dda_line(420, 235, 420, 260, WHITE);
      dda_line(420, 260, 410, 255, WHITE);
      dda_line(370, 263, 410, 255, WHITE);

      dda_line(410, 255, 410, 238, WHITE);    //bars
      dda_line(411, 255, 411, 238, WHITE);

      dda_line(400, 257, 400, 240, WHITE);
      dda_line(390, 259, 390, 242, WHITE);
      dda_line(380, 261, 380, 244, WHITE);

      dda_line(240, 240, 240, 270, WHITE);    //windowFront
      dda_line(265, 244, 265, 278, WHITE);
      dda_line(240, 240, 265, 244, WHITE);
      dda_line(265, 278, 240, 270, WHITE);

      dda_line(244, 246, 262, 249, WHITE);
      dda_line(244, 246, 244, 267, WHITE);
      dda_line(244, 267, 262, 272, WHITE);
      dda_line(262, 249, 262, 272, WHITE);
      dda_line(244, 256, 262, 260, WHITE);
      dda_line(253, 247, 253, 270, WHITE);
      dda_line(410, 135, 410, 122, WHITE);
      dda_line(400, 135, 400, 121, WHITE);
      dda_line(392, 135, 392, 122, WHITE);
      dda_line(400, 121, 392, 122, WHITE);
      dda_line(410, 122, 400, 121, WHITE);
}
