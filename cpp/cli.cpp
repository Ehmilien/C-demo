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
    do {

        cout << "> ";
        getline(cin, line);

        if(line == "closecli") {
            cout << "> Closing CLI... Goodbye !" << endl;
            return;
        }

        if(line.rfind("+", 0) == 0)
            cout << "Result : " << calculate(10, 50, 0) << endl;

        cout << "> " << line << endl;
    } while(line != "closecli");

}

int main() {

    cli();

    return 0;
}
