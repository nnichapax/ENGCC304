#include <stdio.h>

int main() {

    int score = -1 ;

    printf( "Enter score: " ) ;
    scanf( "%d", &score ) ;

    if( score < 50 && score >= 0 ) { 
        printf( "F !" ) ;
    } else if( score < 55 && score >= 50 ) {
        printf( "D !" ) ;
    } else if( score < 60 && score >=55 ) {
        printf( "D+ !" ) ;
    } else if( score < 65 && score >=60 ) {
        printf( "C !" ) ;
    } else if( score < 70 && score >=65 ) {
        printf( "C+ !" ) ;
    } else if( score < 75 && score >= 70 ) {
        printf( "B !" ) ;
    } else if( score < 80 && score >= 75 ) {
        printf( "B+ !" ) ;
    } else if( score >= 80 && score <= 100 ) {
        printf( "A !" ) ;
    } else {
        printf( "please enter number only .\n" ) ;
    }//end if-else

    return 0 ;
}//end main function
