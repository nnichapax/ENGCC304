/*
    จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
    - ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
    - โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
    - ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
        - หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
        - หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
        - หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
        - หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
        - เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม

    หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
        rand() % 100 + 1
    หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย

    Test case & Output:
        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) :
            20
        Sorry, the winning number is HIGHER than 20. (Score=90)
        Guess the winning number (21-100) :
            50
        Sorry, the winning number is LOWER than 50. (Score=80)
        Guess the winning number (21-49) :
            42
        That is correct! The winning number is 42.
        Score this game: 80

        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) : 
            75
        Sorry, the winning number is LOWER than 75. (Score=90)
        Guess the winning number (1-74) : 
            20
        Sorry, the winning number is LOWER than 20. (Score=80)
        Guess the winning number (1-19) : 
            2
        Sorry, the winning number is HIGHER than 2. (Score=70)
        Guess the winning number (3-19) : 
            15
        That is correct! The winning number is 15.
        Score this game: 70

        Do you want to play game (1=play,-1=exit) :
            -1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //เอาไว้รันเลขไม่ให้ซ้ำกันในแต่ละรอบ

int main() {

    srand( time( NULL ) ) ;
    int number = 0, score = 100 ;
    int LOWER = 1, HIGHER = 100 ;

    printf( "Do you want to play game (1=play,-1=exit) : \n" ) ;
    scanf( "%d", &number ) ;

    
    while( true ) {
        score = 100, LOWER = 1, HIGHER = 100 ; //for reset
        int random = rand() % 100 + 1 ;

        if( number == 1 ) {
            while( true ) {
                
                printf( "Guess the winning number (%d-%d) : \n", LOWER, HIGHER ) ;
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