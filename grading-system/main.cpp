#include <iostream>

using namespace std;

int main() {
    // declare variables
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    if (mark >= 85 && mark <= 100) cout << "Grade A+" << endl;
    else if (mark >= 80 && mark <= 84) cout << "Grade A" << endl;
    else if (mark >= 75 && mark <= 79) cout << "Grade B+" << endl;
    else if (mark >= 70 && mark <= 74) cout << "Grade B" << endl;
    else if (mark >= 65 && mark <= 69) cout << "Grade C+" << endl;
    else if (mark >= 60 && mark <= 64) cout << "Grade C" << endl;
    else if (mark >= 55 && mark <= 59) cout << "Grade D+" << endl;
    else if (mark >= 50 && mark <= 54) cout << "Grade D" << endl;
    else if (mark >= 0 && mark <= 49) cout << "Grade F" << endl;
    else cout << "Invalid Grade" << endl;
    return 0;
}
