#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;



//Getting started with classes
//Initialize GradeBook class


int main(){

	GradeBook gradeBook("CSC101 Introduction to Algorithm");
//	GradeBook gradeBook2("CSC201 Introduction to Data Structures");

	gradeBook.displayMessage();
//	gradeBook2.displayMessage();

//	gradeBook.determineClassAverage();

    gradeBook.inputGrade();
    gradeBook.displayGradeReport();

	return 0;
}
