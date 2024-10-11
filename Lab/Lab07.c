#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int number = 0 ;
    int Score = 100 ;
    int LOWER = 1, HIGHER = 100 ;
    int random ;

    printf( "Do you want to play game (1=play, -1=exit) : \n" ) ;
    scanf( "%d", &number ) ;

    while( true ) {
        Score = 100, LOWER = 1, HIGHER = 100 ; //for reset

        random = 42 ;        
        
        if( number == 1 ) {
            printf( "(Score=100)" ) ;
            printf( "\n" ) ;
            
            while( true ) {
                // Score = 100 ;
                printf( "Guess the winning number (%d-%d) : \n", LOWER, HIGHER ) ;
                scanf( "%d", &number ) ;
                if( number < LOWER || number > HIGHER ) {
                    printf( "Your guess is out of the current bounds (%d-%d)! Try again.\n", LOWER, HIGHER ) ;
                }
                if( number <= 0 || number > 100 ) {
                    printf( "Do not enter number except 1-100\n" ) ;
                    break ;
                }
                // if( number < LOWER || number > HIGHER ) {
                //     // printf( "\nGuess the winning number (%d-%d) : \n", LOWER, HIGHER ) ;
                //     Score -= 10 ;
                //     // if (Score < 0) Score = 0 ;
                //     //     printf( "(Score=%d)\n", Score ) ;
                } else if( number < random ) {
                    LOWER = number + 1 ;
                    Score -= 10 ;
                    printf( "Sorry, the winning number is HIGHER than %d. (Score=%d)\n", number, Score ) ;
                } else if( number > random ) {
                    HIGHER = number - 1 ;
                    Score -= 10 ;
                    printf( "Sorry, the winning number is LOWER than %d. (Score=%d)\n", number, Score ) ;
                } else if( number == random ) {
                    printf( "That is correct! The winning number is %d. \n Score this game: %d\n", random, Score ) ;
                    break ;
                } //end if
                if( Score == 0 ) {
                    printf( "Game over please try again" ) ;
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
