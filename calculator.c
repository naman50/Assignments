#include <stdio.h>

int main(){
    int a,b,c;
    printf("Welcome to the Calculator \n");
    printf("Select 1 for addition 2 for substraction and 3 for multiplication: ");
    scanf("%d",&c);
    printf("Enter 1st Digit: ");
    scanf("%d", &a);
    printf("Enter 2nd sigit: ");
    scanf("%d", &b);
    int sum = a+b;
    int sub = a-b; 
    int multi = a*b;
    if(c == 1){
        printf("%d + %d = %d",a,b,sum);
    } else if (c ==2){
        printf(" %d - %d = %d",a,b,sub);
    }else if (c == 3){
        printf("%d x %d = %d",a,b,multi);
    }else{
        printf("Wrong input!!!");
    }
    
    return 0;
}