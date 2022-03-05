#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
//list of global varibles
int NumberOfStudents=2;
//defenition of student structure
struct student {

int StudentId;               //student identifier
int NationalId;              //national identifier
string FirstName;            //student first name
string LastName;            //student last name
float Average;              //studet Average
int *Course;               //number of course with integer name
bool Sex ;             //zero for men and one for women
bool Tuition ;             //price = zero for Daily and  one for Night
};
//list of global variables
student *st = new student[NumberOfStudents];
void CollectingStudentInformation(){
		for(int Index = 0; Index < 2 ; Index++){
		cout<<"Please enter student information :\n ";
		cout<<"Student Id: \n";
		cin>> st[Index].StudentId;
		cout<<"National Id : \n";
		cin>> st[Index].NationalId;
		cout<< "First name: \n";
		cin>> st[Index].FirstName;
		cout<<"Last name:\n";
		cin >> st[Index].LastName;
		cout<< "Sex (zero for men andone for women): \n";
		cin >> st[Index].Sex;
		cout << " Tuition (price ,zero for Daily and  one for Night) :\n";
		cin >> st[Index].Tuition;
		int NumberOfCourse;
		cout<<"enter number of course: \n";
		cin >> NumberOfCourse;
		st[Index].Course = new int[NumberOfCourse];
		float CourseSum = 0.0;
		//Number of course for Student[Index]
		for(int CourseIndex = 0 ; CourseIndex < 2; CourseIndex++ ){
			cout << " Course score for student [Index]:";
		  cin>> st[Index].Course[CourseIndex];
			CourseSum = CourseSum + st[Index].Course[CourseIndex];
		
}
	st[Index].Average = CourseSum/NumberOfCourse;
			
		void ReportByTopAverage(){    //high average
		if(Average > 17){
		cout << "student name: \n";
		}
	}
}
}
int main()
{

	CollectingStudentInformation();
	
	return 1;
}

