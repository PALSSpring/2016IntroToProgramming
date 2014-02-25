/*
* HelloInput.c
* Echo string and number values.
* Compile: 
* gcc -std=gnu99 HelloInput.c -o HelloInput.out
*/
#include <stdio.h>
#include <unistd.h>

int main() {
    //As per StackOverFlow: http://stackoverflow.com/questions/9278226/which-is-the-best-way-to-get-input-from-user-in-c
    char line[256];
    int ii;
    
    printf("Enter string to Echo: ");
    if (fgets(line, sizeof(line), stdin)) {
        printf("Echo: %s\n", line);
    }
    
     printf("Enter integer to Echo: ");
    if (fgets(line, sizeof(line), stdin)) {
        if (1 == sscanf(line, "%d", &ii)) {
        /* ii can be safely used */
            printf("Echo: %d\n", ii);

        }
        else
        {
            /* failed to convert ii to integer. */
            printf("Could not convert to integer.\n");
        }
    }
    
    return 0;
}
