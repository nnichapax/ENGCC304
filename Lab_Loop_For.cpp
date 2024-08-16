#include <stdio.h>

int main() {

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0 ;
	int input = -1 ;

	printf( "enter your number : " ) ;
	scanf( "%d", &input ) ;

	if( input == -1 ) {
		printf( "error" ) ;
	}
	if( input % 2 == 0 ) {
		for( int i = 1 ; i < 7 ; i++ ){
			switch( i ) {

				case 1 :
					a += 1 ;
					break ;
				case 2 :
					a -= 1 ;
					b += 1 ;
					break ;
				case 3 :
					b -= 1 ;
					c += 1 ;
					break ;
				case 4 :
					c -= 1 ;
					d += 1 ;
					break ;
				case 5 :
					d -= 1 ;
					e += 1 ;
					break ;
				case 6 :
					e -= 1 ;
					f += 1 ;
					break ;
			}//end switch-case evennumber
			printf( "%d %d %d %d %d %d\n", f, e, d, c, b, a ) ;
		}//end loop for evennumber
	}else{
		for( int i = 1 ; i < 6 ; i++){
			switch ( i ){

				case 1 :
					a += 1 ;
					break ;
				case 2 :
					a -= 1 ;
					b += 1 ;
					break ;
				case 3 :
					b -= 1 ;
					c += 1 ;
					break ;
				case 4 :
					c -= 1 ;
					d += 1 ;
					break ;
				case 5 :
					d -= 1 ;
					e += 1 ;
					break ;
			}//end switch-case oddnumber
			printf( "%d %d %d %d %d \n", a, b, c, d, e ) ;
		}//end loop for oddnumber
	}//end if-else
	return 0 ;
}//end fuction