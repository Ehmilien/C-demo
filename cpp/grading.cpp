#include <iostream>
#include <string>
using namespace std;

string get_us_grade(int score) {

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

void us_grading() {

    int score;
    cout << "Enter your score : ";
    cin >> score;

    if(score < 0 || score > 100) {
        cout << "Your score has to be between 0 and 100 !";
        return;
    }

    string grade = get_us_grade(score);

    cout << "Your score is : " << score << " and your grade is " << grade << "." << endl;

    return;
}

int main() {

    us_grading();

    return 0;
}
