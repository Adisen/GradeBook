#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);

	aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    eCount = 0;
    fCount = 0;
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}

/* void GradeBook::determineClassAverage()
{
	int total = 0;
	int gradecounter = 0;
	int grade;
	double classAverage;

	cout << "Input student grade or -1 to quit: ";
	cin >> grade;

	while(grade != -1)
	{
		total += grade;
		gradecounter++;

		cout << "Input student grade or -1 to quit: ";
		cin >> grade;

	}
	if(gradecounter != 0)
	{
		classAverage = static_cast<double> (total) / gradecounter;

		cout << "Sum total of all " << gradecounter << "  grades is: " << total << endl;
		cout << "The class average is: " << setprecision(2) << fixed <<classAverage <<endl;
	}
	else
	{
		cout << "No grades were entered";
	}
} */

void GradeBook::inputGrade()
{
    int grade;

    cout << "Enter the student grade." << endl <<
    "Enter the EOF character to end." << endl;

    while((grade = cin.get()) != EOF)
    {
        switch(grade)
        {
            case 'A': //grade input was A
            case 'a'://or lowercase a
                aCount++;//increment aCount
                break;

            case 'B'://grade input was B
            case 'b'://or lowercase b
                bCount++;//increment bCount
                break;

            case 'C'://grade input was C
            case 'c'://or lowercase c
                cCount++;//increment cCount
                break;

            case 'D'://grade input was D
            case 'd'://or lowercase d
                dCount++;//increment dCount
                break;

            case 'E'://grade input was E
            case 'e'://or lowercase e
                eCount++;//increment eCount
                break;

            case 'F'://grade input was F
            case 'f'://or lowercase f
                fCount++;//increment fCount
                break;

            case '\n'://ignore newlines,
            case '\t'://ignore tabs
            case ' '://ignore empty spaces
                break;

            default://accepts all character but display an error message
                cout << "Invalid grade input." << "Please enter a valid grade" << endl;
                break;
        }
    }
}

void GradeBook::displayGradeReport()
{
    //display the summary of grades inputted
    cout << "\n\nNumber of students who received each grade."
         << "\nA: " << aCount << " students" //display number of students with A grade
         << "\nB: " << bCount << " students" //display number of students with B grade
         << "\nC: " << cCount << " students" //display number of students with C grade
         << "\nD: " << dCount << " students" //display number of students with D grade
         << "\nE: " << eCount << " students" //display number of students with E grade
         << "\nF: " << fCount << " students" //display number of students with F grade
         << endl;

}

