// C++ program to find maximum and minimum of two numbers without using loop and any condition.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a = 15, b = 20;
    printf("max = %d\n", ((a + b) + abs(a - b)) / 2);
    printf("min = %d", ((a + b) - abs(a - b)) / 2);
    return 0;
}
