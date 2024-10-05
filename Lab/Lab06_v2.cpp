#include <stdio.h>

int main() {

    int N ;

    printf( "Enter value: " ) ;
    scanf( "%d", &N ) ;

    if( N % 2 == 1 ) {
        printf( "Series: " ) ;
        for( int i = 1 ; i <= N ; i+=2 ){
            printf( "%d ", i ) ;
        }
    } else if( N % 2 == 0 ){
        printf( "Series: " ) ;
        for( int i = N ; i >= 0 ; i-=2 ){
            printf( "%d ", i ) ;
        }
    }
    return 0 ;
}//end main function
