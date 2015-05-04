#include <stdio.h>

struct Point {
    int xx;  
    int yy;
};
typedef struct Point Point_t;

int main () {
    Point_t pt;
    pt.xx = 10;
    pt.yy = 20;
    
   // Point_t *point;
    //point.xx = 10;
    //point.yy = 20;
    printf("pt.xx: %d", pt.xx);
    printf("pt.yy: %d", pt.yy);

    return 0;   
}