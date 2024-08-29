#include <stdio.h>
int main() {
    int a = 0, b = 0 ;
    printf( "Please enter value (a b) : " ) ;
    scanf( "%d %d", a, b ) ; 

    printf( "a = %d , b = %d \n", a, b ) ;
    printf( "a + b = %d \n", a + b ) ;
    printf( "a - b = %d \n", a - b ) ;
    printf( "a * b = %d \n", a * b ) ;
    printf( "a / b = %d (b must greater than 0)\n", b > 0 ? a : 0 ) ;
    printf( "a % b = %d \n", a % b ) ;
    printf( "++a = %d \n", a = a + 1 ) ;
    printf( "a-- = %d \n", a = a - 1 ) ;
    printf( "a += 1 %d \n", a = a + 1 ) ;
    printf( "a += b %d \n", a = a + b ) ;
    printf( "a -= 1 %d \n", a = a - 1 ) ;
    printf( "a -= b %d \n", a = a - b ) ;
    printf( "a *= 1 %d \n", a = a * 1 ) ;
    printf( "a *= b %d \n", a = a * b ) ;
    printf( "a %= 1 %d \n", a = a % 1 ) ;
    printf( "a %= b %d \n", a = a % b ) ;
    printf( "a && b %d \n", a and b ) ;
    printf( "a || b %d \n", a or b ) ;
    return 0 ;
}