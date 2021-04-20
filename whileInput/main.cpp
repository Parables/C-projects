#include <iostream>
#include <limits>
#include <typeinfo>

using namespace std;

int main() {
    double input = 0, sum = 0, average = 0;
    int count = 0;
    try {

        do {
            cout << "Enter meter reading: ";
            cin >> input;
            // Attempt to fix wrong input
            if (!(bool) (cin >> input)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input; please re-enter.\n";
            }
            sum += input;
            count++;
        } while (input != -1);


        average = (sum > 0) ? (sum / count) : 0;
        cout << "\nThe average of the readings is: " << average << endl;
    } catch (const char *e) {
        cerr << e << endl;
    }

    return 0;
}
