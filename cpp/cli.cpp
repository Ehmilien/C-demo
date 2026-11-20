#include <iostream>
#include <string>
using namespace std;

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

    cout << "=======================================\n\nWelcome !\n\nUse 'closecli' to close the CLI (Obviously !)\n\n=======================================" << endl;

    do {

        cout << "> ";
        getline(cin, line);

        if(line == "closecli") {
            cout << "> Closing CLI... Goodbye !" << endl;
            return;
        }

        if(line.rfind("+", 0) == 0)
            cout << "Result : " << calculate(a, b, 0) << endl;

        if(line.rfind("-", 0) == 0)
            cout << "Result : " << calculate(a, b, 1) << endl;

        if(line.rfind("*", 0) == 0)
            cout << "Result : " << calculate(a, b, 2) << endl;

        if(line.rfind("/", 0) == 0)
            cout << "Result : " << calculate(a, b, 3) << endl;

        if(line.rfind("%", 0) == 0)
            cout << "Result : " << calculate(a, b, 4) << endl;

        cout << "> " << line << endl;
    } while(line != "closecli");

}

int main() {

    cli();

    return 0;
}
