#include <stdio.h>

int main() {

    char ID [ 10 ] ;
    int WorkingHrs = 0 ;
    float SalaryAmountHr = 0 ;
    float SUM = 0 ;

    printf( "Input the Employees ID (Max. 10 chars): " ) ;
    scanf( "%s", ID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &WorkingHrs ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%f", &SalaryAmountHr ) ;
    SUM = WorkingHrs * SalaryAmountHr ;
    printf( "Employees ID = %s\n", ID ) ;
    printf( "Salary = U$ %.2f", SUM ) ;

    return 0 ;

}//end function
