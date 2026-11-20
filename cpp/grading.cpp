#include <iostream>
#include <string>
using namespace std;

string getScore(int score) {

    if(score >= 0 && score <= 59)
        return "F";

    if(score >= 60 && score <= 69)
        return "D";

    if(score >= 70 && score <= 79)
        return "C";

    if(score >= 80 && score <= 89)
        return "B";

    if(score >= 90 && score <= 100)
        return "A";

    return NULL;
};

int main() {

    int score;
    cout << "Enter your score : ";
    cin >> score;

    if(score < 0 || score > 100) {
        cout << "Your score has to be between 0 and 100 !";
        return 1;
    }

    string grade = getScore(score);

    cout << "Your score is : " << score << " and your grade is " << grade << "." << endl;

    return 0;
}
