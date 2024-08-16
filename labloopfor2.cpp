#include <stdio.h>
int main() {
    int number = 0 ;
    printf( "enter your number : " ) ;
    scanf( "%d", &number ) ;
    if( number % 2 == 0 ) {
        for( int i = 0 ; i < number ; i++ ){
            for( int j = 0 ; j < number ; j++ ){
                if( j == i ){
                    printf( "1" ) ;
                } else{
                   printf( "0" ) ;    
                }//end if-else
            }//end for
            printf( "\n" ) ;
        }//end for
    } else if( number % 2 == 1 ){
        for( int i = number ; i != 0 ; i-- ){
            for( int j = 1 ; j <= number ; j++ ){
                if( j == i ){
                    printf( "1" ) ;
                } else{
                   printf( "0" ) ;    
                }//end if-else
            }//end for
            printf( "\n" ) ;
        }//end for
    }//end if-else
    return 0 ;
}//end function