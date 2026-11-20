#include <cstddef>
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

class EuGrade {

    public:
        int physical_education;
        int math;
        int english;
        int french;
        int science;
        int geography;
        int history;
};

int grade_cli(string course) {

    bool done = false;
    int score;
    do {

        cout << "[" << course << "] Enter your score : ";
        cin >> score;

        if(score < 0 || score > 20) {
            cout << "[" << course << "] The score need to be between 0 and 20" << endl;
            return 0;
        }

        cout << "[" << course << "] You entered : " << score << endl;
        done = true;

        return score;
    } while (!done);

    return 0;
}


void eu_grading() {

    EuGrade grade;
    grade.physical_education = grade_cli("Physical Education");
    grade.math = grade_cli("Math");
    grade.english = grade_cli("English");
    grade.french = grade_cli("French");
    grade.science = grade_cli("Science");
    grade.geography = grade_cli("Geography");
    grade.history = grade_cli("History");

    cout << "Results : " << endl;
    cout << "- Physical Education : " << grade.physical_education << endl;
    cout << "- Math : " << grade.math << endl;
    cout << "- English : " << grade.english << endl;
    cout << "- French : " << grade.french << endl;
    cout << "- Science : " << grade.science << endl;
    cout << "- Geography : " << grade.geography << endl;
    cout << "- History : " << grade.history << endl;

    int average = (grade.physical_education
        + grade.math
        + grade.english
        + grade.french
        + grade.science
        + grade.geography
        + grade.history) / 7;
    cout << "Average : " << average << endl;

}

int main() {

    //us_grading();
    eu_grading();

    return 0;
}
