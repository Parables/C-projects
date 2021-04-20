#include <iostream>

using namespace std;

int main()
{
    int sum = 0, input = 0, avg ;
    for (int i = 0; i < 4; ++i) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> input;
        if (input <= 100) {
            sum = sum + input;
        } else {
            i -= 1;
            cout << "\nInput is more than 100... Please try again" << endl;
        }
    }
    avg = sum / 4;
    cout << "The average is: " << avg << endl;


    if (avg >= 80) cout << "A" << endl;
    else if (avg >= 70 && avg < 80) cout << "B" << endl;
    else if (avg >= 60 && avg < 70) cout << "C" << endl;
    else if (avg >= 50 && avg < 60) cout << "D" << endl;
    else if (avg >= 40 && avg < 50) cout << "E" << endl;
    else if (avg >= 0 && avg < 40) cout << "F" << endl;


    return 0;
}
