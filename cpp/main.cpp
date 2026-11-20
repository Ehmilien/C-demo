#include <iostream>
#include <string>
using namespace std;

// const double pi = 3.14159 (Same usage as #define)
#define PI 3.14159

// const char newline = '\n' (Same usage as #define)
#define NEWLINE '\n'

#include <sstream>

int tutorial_structure() {

    cout << "Hello world !" << endl;

    return 0;
}

int tutorial_variable() {

    int a, b;
    int result;

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result << endl;

    return 0;
}

int tutorial_variable_initialization() {

    int a = 5;
    int b = (3);
    int c = {2};
    int result;

    a = a + b;
    result = a - c;

    cout << result << endl;

    return 0;
}

int tutorial_string() {

    string mystring;

    mystring = "This is the initial string content.";

    cout << mystring << endl;

    mystring = "This is a different string content.";

    cout << mystring << endl;

    return 0;
}

int tutorial_constant_expressions_and_preprocessor_definition() {

    double radius = 5.0;
    double circle;

    circle = 2 * PI * radius;
    cout << circle;
    cout << NEWLINE;

    return 0;
}

int tutorial_standard_output_and_input() {

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "I am " << age << " years old." << endl;

    string mystr;
    cout << "What is your name ? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << "." << NEWLINE; // Can use : << endl
    cout << "What is your favorite team ? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too !" << NEWLINE;

    return 0;
}

int tutorial_stringstream() {

    return 0;
}

int main() {

    tutorial_structure();
    tutorial_variable();
    tutorial_variable_initialization();
    tutorial_string();
    tutorial_constant_expressions_and_preprocessor_definition();
    tutorial_standard_output_and_input();

    tutorial_stringstream();

    return 0;
}
