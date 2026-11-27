#include <cstddef>
#include <iostream>
#include <string>
using namespace std;
#include "time.cpp"

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
    cout << get_time_prefix(true) << "Enter your score : ";
    cin >> score;

    if(score < 0 || score > 100) {
        cout << get_time_prefix(true) << "Your score has to be between 0 and 100 !";
        return;
    }

    string grade = get_us_grade(score);

    cout << get_time_prefix(true) << "Your score is : " << score << " and your grade is " << grade << "." << endl;

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

        cout << get_time_prefix(true) << "[" << course << "] Enter your score : ";
        cin >> score;

        done = true;
        if(!(score < 0 || score > 20)) {
            cout << get_time_prefix(true) << "[" << course << "] You entered : " << score << endl;
            return score;
        }

        cout << get_time_prefix(true) << "[" << course << "] The score need to be between 0 and 20. Please enter a valid score." << endl;
        return grade_cli(course);
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

    cout << get_time_prefix(true) << "Results : " << endl;
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
    cout << get_time_prefix(true) << "Average : " << average << endl;

}

int main() {

    //us_grading();
    eu_grading();

    return 0;
}
