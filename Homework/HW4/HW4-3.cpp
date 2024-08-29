#include <stdio.h>

int main(){

    int a ;
    int b ;
    int c ;
    int sum ;

    printf( "enter first number: " ) ;
    scanf( "%d", &a ) ;

    printf( "enter second number: " ) ;
    scanf( "%d", &b ) ;

    printf( "enter tried number: " ) ;
    scanf( "%d", &c ) ;

    sum = a + b + c ;

    printf( "Answer: %d ", sum ) ;

    return 0 ;
}