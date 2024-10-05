#include <stdio.h>

int main() {

    char ID [ 10 ] ;
    int WorkingHrs ;
    float SalaryAmountHr ;
    float SUM ;

    printf( "Input the Employees ID (Max. 10 chars): " ) ;
    scanf( "%s", ID ) ;

    printf( "Input the working hrs: " ) ;
    scanf( "%d", &WorkingHrs ) ;

    printf( "Salary amount/hr: " ) ;
    scanf( "%f", &SalaryAmountHr ) ;

    SUM = WorkingHrs * SalaryAmountHr ;

    printf( "\n Employees ID = %s", ID ) ;
    printf( "\n Salary = U$ %.2f", SUM ) ;

    return 0 ;

}//end function
