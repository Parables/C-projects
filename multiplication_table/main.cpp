#include <iostream>

using namespace std;

int number = 1, limit = 10;
bool option = false;
string input = "";

void printTable();

int main() {
    do {
        printTable();
        option = true;
        if (option) {
            cout << "\nDo you want to continue? \nHint: press any letter/number to continue."
            "To exit, press n or 0\n\tEnter your option: ";
            cin >> input;
            if (input == "n" || input == "N" || input == "no" || input == "NO" || input == "0") {
                option = false;
                cout << "Goodbye";
            }
        }
    } while (option);
    return 0;
}

void printTable() {
    cout << "____MULTIPLICATION TABLE____\n\tWhat table do you want?\n\tEnter a number: ";
    cin >> number;
    cout << "\n\tWhat is the limit for the table?\n\tEnter a number: ";
    cin >> limit;
    cout << "\n\t____" << number << " times table____ " << endl;
    for (int i = 1; i <= limit; i++) {
        cout << "\t\t" << number << " x " << i << " = " << number * i << endl;
    }
}
