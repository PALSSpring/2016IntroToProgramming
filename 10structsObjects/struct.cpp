#include <stdio.h>

struct Point {
    int xx;  
    int yy;
};
typedef struct Point Point_t;

class Rectangle {
    int width, height;
  public:
    void set_values (int ww,int hh)
    {
        width = ww;
        height = hh;
    }
    int area (void)
    {
        return width*height;
        
    }
} rect;

int main () {
    
    rect rt;
    rt.set_values(10,20);
    printf("rect.width: %d", rt.wdith);
    
    Point_t pt;
    pt.xx = 10;
    pt.yy = 20;
    
    Point_t points[10];
    
    for (int nn = 0; nn <10; nn++)
    {
        points[nn].xx = nn;
        points[nn].yy = nn - 10;
    }
    
    for(int nn = 0; nn < 10; nn++)
{
  printf("pints[%d].xx: %d\n", nn, points[nn].xx); 
    printf("pints[%d].yy: %d\n", nn, points[nn].yy); 

}

   // Point_t *point;
    //point.xx = 10;
    //point.yy = 20;
    printf("pt.xx: %d\n", pt.xx);
    printf("pt.yy: %d\n", pt.yy);

    return 0;   
}