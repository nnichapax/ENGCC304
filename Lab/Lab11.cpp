/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <math.h>//Mathematics Library

int Armstrong( int number ) ;

int main() {

    int number ;

    printf( "Enter Number: " ) ;
    scanf( "%d", &number ) ;

    if ( Armstrong( number ) ) {
        printf( "Pass. \n" ) ;
    } else {
        printf( "Not Pass. \n" ) ;
    }    

    return 0 ;
}//end main function

int Armstrong( int number ) {//function
    int orinumber, remain, result = 0, n = 0 ;//ค่าตัวเลขเดิม, เก็บหลักสุดท้ายของตัวเลข, ผลรวมเลขยกกำลัง, จำนวนหลักของตัวเลข

    orinumber = number ;//เก็บค่าตัวเลข

    while ( orinumber != 0 ) {
        orinumber /= 10 ;//แบ่งตัวเลขเป็น 10 เพื่อเอาเลขหลักน้อยกว่า
        ++n ;//บวกหลักตัวเลข
    }

    orinumber = number ;//คืนค่าตัวเลข

    while ( orinumber != 0 ) {
        remain = orinumber % 10 ;//คำนวณหาเลขหลักสุดท้าย
        result += pow( remain, n ) ;//ยกกำลังและเพิ่มresult
        orinumber /= 10 ;//แบ่งตัวเลขเพื่อลบเลขหลักสุดท้ายออก
    }
    
    if ( result == number ) {//ตรวจสอบว่าเลขที่คิดได้เท่ากับเลขที่inputไปมั้ย
        return 1 ;//Pass.
    } else {
        return 0 ;//Not Pass.
    }
    return 0 ;       
}//end function