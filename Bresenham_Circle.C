#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

void plot(float, float);

void main()
{
  float x, y, p, r, x_max, y_max;
    int gd = DETECT, gmode;
  initgraph(&gd, &gmode, "C:\\tc\\bgi");
  printf("\nEnter the radius of the circle : ");
  scanf("%f", &r);
  clrscr();
  x = 0;
  y = r;
  x_max = r / 1.414;
  y_max = r / 1.414;
  p = 3 - (2 * r);
  while (x <= x_max && y >= y_max)
  {
    plot(x, y);
    if (p < 0)
    {
      p = p + (4 * x) + 6;
    }
    else
    {
      p = p + (4 * (x - y)) + 10;
      y = y - 1;
    }
    x = x + 1;
  }
  getch();
  closegraph();
}

void plot(float x, float y)
{
  putpixel(200 + x, 200 - y, BLACK);
  putpixel(200 + y, 200 - x, BLACK);
  putpixel(200 + y, 200 + x, BLACK);
  putpixel(200 + x, 200 + y, BLACK);
  putpixel(200 - x, 200 + y, BLACK);
  putpixel(200 - y, 200 + x, BLACK);
  putpixel(200 - y, 200 - x, BLACK);
  putpixel(200 - x, 200 - y, BLACK);
}
