#include <stdio.h>
#include <string.h>
#include <ctype.h>//ใช้นำเข้าหัวข้อไฟล์ (header file) ที่ใช้ในการจัดการกับตัวอักษร

int main() {
    char word [50] ;
    int lenght, i, palindrome = 1 ;

    printf( "Enter word: \n" ) ;
    scanf( "%s", word ) ;

    lenght = strlen( word ) ;//lenght คือ ตัวความยาวของคำหรือวลี

    for( i = 0 ; i < lenght / 2 ; i++ ) {//ที่หาร2เพราะว่าตัวตรงกลางเป็นตัวเดิมอยู่แล้ว
        if( tolower( word[i] ) != tolower( word[lenght - i - 1] ) ) {//tolower คือ แปลงตัวอักษรพิมพ์ใหญ่เป็นพิมพ์เล็ก
        palindrome = 0 ;//palindrome คือ กลุ่มคำหรือประโยคที่สะกดเหมือนดเิมทั้งจากหน้าไปหลัง
        break ;
        }
    }

    if( palindrome ) {//ถ้าเป็นpalindrome เข้าอันนี้
        printf( "Pass.\n" ) ;
    } else {//อันนี้คือไม่เป็น palindrome
        printf( "Not Pass.\n" ) ;
    }

    return 0 ;
}//end main function
