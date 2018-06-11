#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
    GradeBook(string);//Constructor to initialize course name
    void setCourseName(string);//function to set the course name
    string getCourseName();//function to initialize the course name
    void displayMessage();//display a welcome message
    //void determineClassAverage();//function to determine the class average per grade inputted
    void inputGrade();//function to receive arbitrary number of grades
    void displayGradeReport();//display a report based on the grade inputted

    private:
    string courseName;
    int aCount;//set the count for grade A
    int bCount;//set the count for grade B
    int cCount;//set the count for grade C
    int dCount;//set the count for grade D
    int eCount;//set the count for grade E
    int fCount;//set the count for grade F
};
