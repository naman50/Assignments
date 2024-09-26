#include <stdio.h>

int main() {
    const float pi = 3.14;
    int x;
    float a;
    printf("Select 1 for radius or 2 for Circumfrence: ");
    scanf("%d", &x);
    printf("Enter Rdius: ");
    scanf("%f", &a);
    float area = pi * a *a;
    float circum = 2*pi*a;
    if (x == 1){
       printf("Area = %f " , area);
    } else if (x == 2){
       printf("Circumfrence = %f", circum);
    } else {
        printf("Wrong imput!!");
    }
       

    return 0;
}