#include<stdio.h>

int main(){
    
    int number ;
    scanf("%d",&number);

    int reverse = number % 10 ; // printing first number
    printf("%d",reverse);

    number = number /10;
    reverse = number % 10 ;

    printf("%d",reverse);//printing second number

    number = number /10;
    reverse = number % 10 ;

    printf("%d",reverse);//printing third number

    
    
    return 0 ;

}