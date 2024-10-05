#include <stdio.h>
#include <string.h>

int main(){

    char character ;
    int integers1, integers2 ;
    float floatingpointnumber ;
    char string [20] ;

    printf( "Enter a character:\n" ) ;
    scanf( "%c", &character ) ;

    printf( "Enter two integers:\n" ) ;
    scanf( "%d %d", &integers1, &integers2 ) ;

    printf( "Enter a floating-point number:\n" ) ;
    scanf( "%f", &floatingpointnumber ) ;

    printf( "Enter a string:\n" ) ;
    scanf( "%s", string ) ;

    printf( "You entered character: %c", character ) ;
    printf( "\nYou entered integers: %d and %d", integers1, integers2 ) ;
    printf( "\nYou entered floating-point number: %.2f", floatingpointnumber ) ;
    printf( "\nYou entered string: %s", string ) ;

    return 0 ;
}//end function
