#include <stdio.h>
#include <conio.h>

void main(){
    int a,b;
    char op;

    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter your operator:");
    scanf("\n %c",&op);

    printf("enter the second number:");
    scanf("%d",&b);

    if(op=='+'){
        printf("your calculate value is: %d",a+b);
    }

    else if(op=='-'){
        printf("your calculate value is: %d",a-b);
    }

     else if(op=='*'){
        printf("your calculate value is: %d",a*b);
    }

     else if(op=='/'){
        printf("your calculate value is: %d",a/b);
    }

     else if(op=='%'){
        printf("your calculate value is: %d",a%b);
    }

    else{
        printf("sorry you are wrong operator enter");
    }
    getch();
}
