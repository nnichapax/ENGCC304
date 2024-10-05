#include <stdio.h>

int main() {

    int N ;//N is numbers for specifying array 

    printf( "Enter N : \n" ) ;
    scanf( "%d", &N ) ;

    int values[N] ;
    int i ;

    for( i = 0 ; i < N ; i++ ) {// input values from user
        printf( "Enter value[%d] :\n", i ) ;
        scanf( "%d", &values[i] ) ;
    }
    
    printf( "Index: " ) ;
    for( i = 0 ; i < N ; i++ ) {
        printf( "%2d ", i ) ;
    }
    printf( "\n" ) ;

    printf( "Array: " ) ;

    int j ;

    for( i = 0 ; i < N ; i++ ) {
        
        int number = values[i] ;
        int prime = 1 ;

        if( number <= 1 ) {
            prime = 0 ;
        } else {
            for( j = 2 ; j * j <= number ; j++ ) {
                if( number % j == 0 ) {
                    prime = 0 ;
                    break ;
                } 
            }
        }
        if( prime ) {
            printf( "%2d ", number ) ;
        } else {
            printf( "%2c ", '#' ) ;
        }
    }
    printf( "\n" ) ;

    return 0 ;
}//end main function
