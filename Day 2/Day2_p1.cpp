// Problem Statement-1
// Write a C++ Program to enter the details of a student in a sequence i.e. "Name", "Roll No.", "Age", "Gender", "Class", "Semester" and "Percentage" in first 7 lines of input. After this, the output will display the same data in same sequence in next 7 line. Use the following data types with above said variables
// Name: Character Array
// Roll No.: int
// Age: int
// Gender: char
// Class: int
// Semester: int
// Percentage: float

#include <iostream>
using namespace std;
int main(){
    string Name;
    int Rollno;
    char gender;
    int Class;
    int semester;
    float percentage;
    
    // Taking input for Name
    cout<<"Enter Name: ";
    getline(cin, Name);
    // Taking input for Rollno
    cout<<"Enter Rollno: ";
    cin>>Rollno;
    // Taking input for gender
    cout<<"Gender (F/M): ";
    cin>>gender;
    //Taking input for Class
    cout<<"Enter Class: ";
    cin>>Class;
    //Taking input for semester
    cout<<"Enter Semester: ";
    cin>>semester;
    //Taking input for percentage
    cout<<"Enter Percentage: ";
    cin>>percentage;

    //Printing the details
    cout<<Name<<endl;
    cout<<Rollno<<endl;
    cout<<gender<<endl;
    cout<<Class<<endl; 
    cout<<semester<<endl;
    cout<<percentage<<endl;
    
    return 0;
}