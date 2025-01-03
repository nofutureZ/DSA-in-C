#include<stdio.h>

int main() {
    int a, b, c;
    printf("\n Enter Two Number :\t");
    scanf("%d%d", &a, &b);
    c = a & b;
    printf("\n %d is the Result of Bitwise AND (&)",c);
    c = a | b;
    printf("\n %d is the Result of Bitwise OR (|)",c);
    c = a ^ b;
    printf("\n %d is the Result of Bitwise XOR (^)",c);
    return 0;
}