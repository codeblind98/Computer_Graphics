#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main(){
  int gd=DETECT gm;
  initgraph(&gd,"C:\\tc\\bgi ");
  int xa,ya,xb,yb,dx,dy,k,step;
  float x,y,xinc,yinc;
  printf("/nEnter the first coordinate : ");
  scanf("%d %d",&xa,&ya);
   printf("/nEnter the last coordinate : ");
  scanf("%d %d",&xb,&yb);
  dx=(xb-xa);
  dy=(yb-ya);
  if(abs(dx)>abs(dy))
    step=abs(dx);
  else
    step=abs(dy);

  x=xa; y=ya;
  putpixel(x,y,3)
  xinc=dx/step;
  yinc=dy/step;
  for(k=1;k<=step;k++)
  {
      x=x+xinc;
      y=y+yinc;
      putpixel(floor(x+0.5),floor(y+0.5),3)
  }
}
