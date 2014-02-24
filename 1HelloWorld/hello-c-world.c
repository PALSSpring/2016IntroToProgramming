#include <stdio.h>
int foo;

main() {
    foo = 6;
    printf("Hello World %d",foo);
    
    
    while (1) {
        printf("Loop: %d", foo++ );
        sleep(1);
        if (foo > 10000)
        {
         break;   
        }
    }
    return 0;
}
