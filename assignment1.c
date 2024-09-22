// To find largest of the 3 numbers and smallest of them!

#include <stdio.h>

int main(void){
    int a, b, c;
    printf("enter num1:");
    scanf("%i",&a);
    printf("enter num2:");
    scanf("%i",&b);
    printf("enter num3:");
    scanf("%i",&c);

    if (a > b && a > c)
    {
        printf("\n%d is largest", a);
    }
    else if (b > c)
    {
        printf("\n%d is largest", b);
    }
    else
    {
        printf("\n%d is largest", c);
    }
    if (a < b && a < c)
    {
        printf("\n%d is smallest", a);
    }
    else if (b < c)
    {
        printf("\n%d is smallest", b);
    }
    else
    {
        printf("\n%d is smallest", c);
    }
}
