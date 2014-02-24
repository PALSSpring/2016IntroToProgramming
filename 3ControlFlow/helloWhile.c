/* Many ways to work with while. */
#include <stdio.h>
#include <unistd.h>


int foo;

main() {
    foo = 0;
    printf("Hello World %d\n",foo);
    
    
    while (foo < 100) {
        printf("Loop: %d\n", foo++ );
        sleep(1);
        if (foo > 100)
        {
         break;   
        }
    }
}
