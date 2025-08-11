#include <stdio.h>
#include <time.h>

int main() {
    int age = 30;
    float pi = 3.14159;
    char letter = 'A';
    char name[] = "Tony";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Pi: %.3f\n", pi);
    printf("Initial: %c\n", letter);

    time_t now = time(NULL);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localtime(&now));
    printf("Current Time: %s\n", buffer);

    return 0;
}
