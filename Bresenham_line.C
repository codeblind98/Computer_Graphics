#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main(){
  int x,y,xa,ya,xb,yb,dx,dy,p;
  int gd=DETECT, gmode;
  initgraph(&gd,&gmode,"C:\\tc\\bgi");
  printf("\nEnter the first coordinate : ");
  scanf("%d %d",&xa,&ya);
   printf("\nEnter the last coordinate : ");
  scanf("%d %d",&xb,&yb);
  clrscr();
  dx=(xb-xa);
  dy=(yb-ya);
  if(dx<dy){
    printf("\nBresenham line algo is not suitable here");
    exit(0);
  }
  x = xa;
  y = ya;
  putpixel(x,y,3);
  p = 2*dy-dx;
  while(x != xb){
    if(p>=0){
      x = x+1;
      y = y+1;
      putpixel(x,y,3);
      p = p + 2*dy - 2*dx;
     }
     else{
     x = x+1;
     putpixel(x,y,3);
     p = p + 2*dy;
     }
  }
  getch();
  }