#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int number = 0, score = 100 ;
    int LOWER = 1, HIGHER = 100 ;
    int random ;

    printf( "Do you want to play game (1=play,-1=exit): \n" ) ;
    scanf( "%d", &number ) ;
    
    while( true ) {
        score = 100, LOWER = 1, HIGHER = 100 ; //for reset

        random = 42 ;

        if( number == 1 ) {
            while( true ) {
                
                printf( "Guess the winning number (%d-%d): \n", LOWER, HIGHER ) ;
                scanf( "%d", &number ) ;
                if( number <= 0 || number > 100 ) {
                    printf( "Do not enter number except 1-100\n" ) ;
                    break ;
                }
                if( number < LOWER || number > HIGHER ) {
                    // printf( "\nGuess the winning number (%d-%d) : \n", LOWER, HIGHER ) ;
                    score -= 10 ;
                    if (score < 0) score = 0 ;
                        printf( "score=%d\n", score ) ;
                } else if( number < random ) {
                    LOWER = number + 1 ;
                    score -= 10 ;
                    printf( "Sorry, the winning number is HIGHER than %d. (score=%d)\n", number, score ) ;
                } else if( number > random ) {
                    HIGHER = number - 1 ;
                    score -= 10 ;
                    printf( "Sorry, the winning number is LOWER than %d. (score=%d)\n", number, score ) ;
                } else if( number == random ) {
                    printf( "That is correct! The winning number is %d. \n Score this game: %d\n", random, score ) ;
                    break ;
                } //end if
                if( score == 0 ) {
                    printf( "Game over please try again\n" ) ;
                    break ;
                }
                
            } //end while
            printf( "Do you want to play game (1=play,-1=exit) : \n" ) ;
            scanf( "%d", &number ) ;
        } else if( number == -1 ) {
            exit(0) ;
        } //end if
    } //end while   
    return 0 ;
}//end main function
