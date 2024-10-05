/*
จงเรียนโปรแกรมรับค่าจากผู้ใช้ และทำการแสดงผลบนหน้าจอคอมพิวเตอร์ ให้ได้ผลลัพธ์ดังต่อไปนี้

Testcase #1

Input :
Enter a character: 
O
Enter two integers: 
14 13
Enter a floating-point number: 
89.99082
Enter a string: 
Hello

Output :
You entered character: O
You entered integers: 14 and 13
You entered floating-point number: 89.99
You entered string: Hello

Testcase #2

Input :
Enter a character: 
T
Enter two integers: 
89 234
Enter a floating-point number: 
1.23456
Enter a string: 
World

Output :
You entered character: T
You entered integers: 89 and 234
You entered floating-point number: 1.23
You entered string: World
*/

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