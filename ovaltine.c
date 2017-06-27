#include <stdio.h>

int main (void) {
    for (char c = 'A'; c <= 'Z'; c++)
    {
        int z = 155 - (int) c; 
        printf("%c is %i is %c\n", c, z, z);
        
        
    }
    
}

