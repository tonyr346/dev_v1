

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    
    float a = 5.23566;
    float b = 3.12616;
    float c = a+b;

    char str1[20];

 
    snprintf(str1, sizeof(str1), "%.5f", c);
    printf("Sum of %.5f and %.5f is: %s\n", a, b, str1);



      
    return 0;

}