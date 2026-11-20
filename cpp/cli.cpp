#include <iostream>
#include <string>
using namespace std;

void cli() {

    string line;
    do {

        cout << "> ";
        getline(cin, line);

        if(line == "closecli") {
            cout << "> Closing CLI... Goodbye !" << endl;
            return;
        }

        cout << "> " << line << endl;
    } while(line != "closecli");

}

int main() {

    cli();

    return 0;
}
