//Problem: Grading Students
// HackerLand University has the following grading policy:

// Every student receives a grade in the inclusive range from 1 to 100.
// Any grade less than 40 is a failing grade.
// Sam is a professor at the university and likes to round each student's  according to these rules:

// If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
// If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.

#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    for (int &grade : grades) {
        if (grade >= 38) {  // Only round if grade is 38 or above
            int nextMultiple = ((grade / 5) + 1) * 5;  // Find next multiple of 5
            if (nextMultiple - grade < 3) {
                grade = nextMultiple;  // Round up if difference is less than 3
            }
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }
    
    vector<int> roundedGrades = gradingStudents(grades);
    
    for (int grade : roundedGrades) {
        cout << grade << endl;
    }

    return 0;
}
