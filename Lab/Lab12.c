#include <stdio.h>
#include <string.h>

struct Student {
        char Name[20] ;
        int ID ;
        int ScoreSub[5] ;
} typedef S ;

void GetGrade( int Score, char Grade[] ) {//function calculate grade
    strcpy( Grade, "" ) ;
    if( Score < 50 && Score >= 0 ) strcpy( Grade, "F" ) ;
    else if( Score < 55 && Score >= 50 ) strcpy( Grade, "D" ) ;
    else if( Score < 60 && Score >= 55 ) strcpy( Grade, "D+" ) ;
    else if( Score < 65 && Score >= 60 ) strcpy( Grade, "C" ) ;
    else if( Score < 70 && Score >= 65 ) strcpy( Grade, "C+" ) ;
    else if( Score < 75 && Score >= 70 ) strcpy( Grade, "B" ) ;
    else if( Score < 80 && Score >= 75 ) strcpy( Grade, "B+" ) ;
    else strcpy( Grade, "A" ) ;
}
    
float Average( S Person ) {//function calculate avg
    float total = 0 ;
    for ( int j = 0 ; j < 5 ; j++ ) {
        total += Person.ScoreSub[j] ;
    }
return total / 5.0 ;
}

int main() {

    S Student[3] ;
    int i ;
    char Grade[5][3] ;
    
    for(i = 0 ; i < 3 ; i++ ) {//input data student
    printf( "Enter the details of Student %d:\n", i + 1 ) ;    
        printf( "Name: " ) ;
        scanf( " %[^\n]", Student[i].Name ) ;
        printf("ID: ") ;
        scanf( "%d", &Student[i].ID ) ;

        for(int j = 0; j < 5; j++) {//input score of 5 subjects
            printf( "Scores in Subject %d: ", j + 1 ) ;
            scanf( "%d", &Student[i].ScoreSub[j] ) ;
        }
    }

    for(i = 0 ; i < 3 ; i++) {//output data student
        printf( "Student %d:\n", i + 1) ;
        printf( "Name: %s\n", Student[i].Name ) ;
        printf( "ID: %d\n", Student[i].ID ) ;
        printf( "Scores: " ) ;

        for(int j = 0 ; j < 5 ; j++ ) {//output score of 5 subjectc and grade
            printf( "%d ", Student[i].ScoreSub[j] ) ;
            GetGrade( Student[i].ScoreSub[j], Grade[j] ) ;
        }

        printf( "\nGrades: " ) ;//output grades for each subjrct
        for (int j = 0 ; j < 5 ; j++) {
            printf( "%s ", Grade[j] ) ;
        }

        float avg = Average( Student[i] ) ;//calculate and output avg
        printf( "\nAverage Score: %.1f\n\n", avg ) ;
    }

    return 0 ;
}//end main function
