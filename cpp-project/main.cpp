#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double g1, g2, g3, avg;
    char grade;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter three grades: ";
    cin >> g1 >> g2 >> g3;

    if (g1 < 0 || g1 > 100 ||
        g2 < 0 || g2 > 100 ||
        g3 < 0 || g3 > 100) {
        cout << "INVALID Score" << endl;
        return 0;
    }

    avg = (g1 + g2 + g3) / 3;

    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Student Name: " << name << endl;
    cout << "Final Average: " << avg << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
