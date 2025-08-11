

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    float goal = 5.0f;
    
    float a = 2.7553566f;
    float b = 2.2445616f;
    float c = a+b;
    float d = a-b;  

    float g2 = c+d-goal;

    char str1[20];
    char str2[20];
    char err[50];
    char goal_str[20];


    snprintf(goal_str, sizeof(goal_str), "%.5f", goal);
    snprintf(str2, sizeof(str2), "%.5f", a);
    snprintf(str1, sizeof(str1), "%.6f", c);
    snprintf(err, sizeof(err), "%.5f", g2);
    printf("Sum of %.5f and %.5f is: %s\n", a, b, str1);
    printf("Difference of %.5f and %.5f is: %.3f\n", a, b, d);
    printf("Error %s | Goal %s\n\n", err,goal_str);


      
    return 0;

}