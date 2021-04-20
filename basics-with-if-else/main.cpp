#include <iostream>

using namespace std;

int main() {
    // Declare variables
    string surname;
    int age;
    double sum = 0, number = 0, average;
    float length = 0, breadth = 0, area;

    // prompt for the surname
    cout << "Hello, Enter your surname: ";
    cin >> surname;
    // prompt for the age
    cout << "Enter your age: ";
    cin >> age;
    // make decision based on the age
    if (age > 20) { // perform the Average of 6 numbers
        // using a for-loop, prompt the user to enter 6 numbers
        for (int i = 0; i < 6; ++i) {
            // prompt the user to enter 6 numbers
            cout << "Enter number " << i + 1 << ": ";
            // store the input in the number variable
            cin >> number;
            // add the number to the sum variable
            sum += number;
        }
        // after prompting for the 6 numbers, divide the sum by 6 to get the average
        average = sum / 6;
        cout << "The average of the numbers you entered is " << average << endl;
    } else { // perform the area of a rectangle
        // prompt for the length of the rectangle
        cout << "Enter the length(m) of the rectangle: ";
        cin >> length;
        // prompt for the breadth of the rectangle
        cout << "Enter the breadth(m) of the rectangle: ";
        cin >> breadth;
        // calculate the area of the rectangle
        // Area = length x breadth
        area = length * breadth;
        cout << "The area of the rectangle is: " << area << "m^2" << endl;
    }
    return 0;
}
