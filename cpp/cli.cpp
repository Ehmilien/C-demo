#include <iostream>
#include <string>
using namespace std;
#include "time.cpp"


int calculate(int a, int b, int operation) {

    switch (operation) {

        case 0:
            return a + b;

        case 1:
            return a - b;

        case 2:
            return a * b;

        case 3:
            return a / b;

        case 4:
            return a % b;
    }

    return 0;
}

void cli() {

    string line;
    int a = 50;
    int b = 30;

    cout << "=======================================\n\nWelcome !\n\nUse 'close' to close the CLI (Obviously !)\n\n=======================================" << endl;

    do {

        cout << get_time_prefix(true) << "> ";
        getline(cin, line);

        if(line == "close") {
            cout << get_time_prefix(true) << "> Closing CLI... Goodbye !" << endl;
            return;
        }

        if(line.rfind("+", 0) == 0)
            cout << get_time_prefix(true) << "Result : " << calculate(a, b, 0) << endl;

        if(line.rfind("-", 0) == 0)
            cout << get_time_prefix(true) << "Result : " << calculate(a, b, 1) << endl;

        if(line.rfind("*", 0) == 0)
            cout << get_time_prefix(true) << "Result : " << calculate(a, b, 2) << endl;

        if(line.rfind("/", 0) == 0)
            cout << get_time_prefix(true) << "Result : " << calculate(a, b, 3) << endl;

        if(line.rfind("%", 0) == 0)
            cout << get_time_prefix(true) << "Result : " << calculate(a, b, 4) << endl;

        cout << get_time_prefix(true) << line << endl;
    } while(line != "closecli");

}

int main() {

    cli();

    return 0;
}
