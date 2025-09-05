#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float average;

    cout << "Enter marks for 5 subjects (0 - 100):\n";

    // Input marks
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate average
    average = total / 5.0;

    // Display total and average
    cout << "\nTotal Marks = " << total;
    cout << "\nAverage Marks = " << average;

    // Grade system
    if (average >= 80)
        cout << "\nGrade = A";
    else if (average >= 60)
        cout << "\nGrade = B";
    else if (average >= 40)
        cout << "\nGrade = C";
    else
        cout << "\nGrade = Fail";

    return 0;
}

