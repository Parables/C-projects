#include <iostream>

// function prototypes
void showMenu();

void handleSelectedOption(char option);

void perimeterOfTriangle();

void productOfFourNumber();

void areaOfRectangle();

void playAgain();

using namespace std;


int main() {
    showMenu();
    return 0;
}

void showMenu() {
    char option = 'Z';
    do {
        cout << "Welcome to Math Game ... \n"
                "Please select an option below to proceed \n\t "
                "U. Product of four numbers \n\t "
                "V. Area of Rectangle \n\t "
                "W. Perimeter of triangle \n "
                "Enter your choice: ";
        cin >> option;
    } while (tolower(option) != 'u' && tolower(option) != 'v' && tolower(option) != 'w');
    handleSelectedOption(option);
    playAgain();
}


void handleSelectedOption(char option) {
    switch (option) {
        case 'u':
        case 'U':
            productOfFourNumber();
            break;
        case 'v':
        case 'V':
            areaOfRectangle();
            break;
        case 'w':
        case 'W':
            perimeterOfTriangle();
            break;
    }
}

void areaOfRectangle() {
    double length = 0, breadth = 0, area;
    cout << "\nArea of Rectangle \n\t"
            "Enter the length of the rectangle: ";
    cin >> length;
    cout << "\tEnter the breadth of the rectangle: ";
    cin >> breadth;
    area = length * breadth;
    cout << "\nArea of the rectangle is " << area << endl;
}

void productOfFourNumber() {
    double product = 1, input = 0;
    cout << "\nProduct of four numbers\n";
    for (int i = 0; i < 4; ++i) {
        cout << "\tEnter number " << i + 1 << ": ";
        cin >> input;
        product *= input;
    }
    cout << "\nThe product is: " << product << endl;
}


void perimeterOfTriangle() {
    double perimeter = 0, input = 0;
    cout << "\nPerimeter of a Triangle";
    for (int i = 0; i < 3; ++i) {
        cout << "\n\tEnter length of side " << i + 1 << ": ";
        cin >> input;
        perimeter += input;
    }
    cout << "\nThe perimeter is: " << perimeter << endl;
}

void playAgain() {
    char option;
    cout << "Do you want to play again? [Yes/No] \n\t Enter your choice: ";
    cin >> option;
    if (tolower(option) == 'y' || tolower(option) == 'yes') showMenu();
    else cout << "Thanks for playing... Goodbye" << endl;
}