#include<iostream>
using namespace std;

void grade(int);
void gradedscore(void);

int score;
int scoreavg;

int main()
{

    grade(score);
    gradedscore();
    grade(score);
    gradedscore();
    grade(score);
    gradedscore();

    scoreavg = scoreavg / 3;
    cout << "\nYour average test score is " << scoreavg << "%." << endl;

    grade(scoreavg);

    return 0;
}

void grade(int) {

    if ((score < 0 || score > 100)) {
        cout << "Invalid input. try again." << endl;
        scoreavg = scoreavg - score;
        gradedscore();
        grade(score);
    }

    else {
        if (score <= 100 && score > 89) {
            cout << "You got an A!" << endl;
        }
        else if (score < 90 && score > 79) {
            cout << "You got a B!" << endl;
        }
        else if (score < 80 && score > 69) {
            cout << "You got a C!" << endl;
        }
        else if (score < 70 && score > 59) {
            cout << "You got a D!" << endl; 
        }
        else if (score < 60 && score > 0) {
            cout << "You got an F!" << endl;
        }
    }
}

void gradedscore(void) {
    cout << "Enter your 3 Test scores 1 - 100" << endl;
    cin >> score;
    scoreavg = scoreavg + score;
}