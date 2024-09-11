#include <stdio.h>

int main(){

    int number, R, r = 1, space, i, j ;

    printf( "enter your number: " ) ;
    scanf( "%d", &R ) ;
    if( number % 2 == 0 ){
        for( i = 0 ; i < R ; i++ ){
            for( space = 1 ; space <= R - i ; space++ )
                printf( "  " ) ;
            for( j = 0 ; j <= i ; j++ ){
                if( j == 0 || i == 0 )
                    r = 1 ;
                else
                    r = r * ( i - j + 1 ) / j ;
                    printf( "%4d", r ) ;
            }    
            printf( "\n" ) ;
        }
    }else{
        for( i = R - 1 ; i >= 0 ; i-- ){
            r = 1 ;
            for( space = 0 ; space < R - i -1 ; space++ )
                printf( "  " ) ;
            for( j = 0 ; j <= i ; j++ ){
                if( j == 0 || i == 0 )
                    r = 1 ;
                else
                    r = r * ( i - j ) / ( j + 1 ) ;
                    printf( "%4d", r ) ;
            }    
            printf( "\n" ) ;
        }
    }
    return 0 ;
}    