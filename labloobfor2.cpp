#include <stdio.h>
int main() {
    int number = 0 ;
    printf( "enter your number : " ) ;
    scanf( "%d", &number ) ;
    if( number % 2 == 1 ) {
        for( int i = 0 ; i <= number ; i++ ){
            for( int j = 0 ; j <= number ; j++ ){
                if( j == number - i + 1 ){
                    printf( "1" ) ;
                } else{
                   printf( "0" ) ;    
                }
            }
            printf( "\n" ) ;
        }
    } else if( number % 2 == 0 ){
        for( int i = 0 ; i <= number ; i++ ){
            for( int j = 0 ; j <= number ; j++ ){
                if( j == i ){
                    printf( "1" ) ;
                } else{
                   printf( "0" ) ;    
                }
            }
            printf( "\n" ) ;
        }
    }
    return 0 ;
}