#include <iostream>
#include <string>
using namespace std;

int score = 0;

void check_guess(string guess, string answer) {
    bool still_guessing = true;
    int attempt = 0;
    while (still_guessing && attempt < 3) {
        if (guess == answer) {
            cout << "Correct Answer" << endl;
            score++;
            still_guessing = false;
        } else {
            if (attempt < 2) {
                cout << "Sorry Wrong Answer, try again" << endl;
                cin >> guess;
                attempt++;
            }
            if (attempt == 2) {
                cout << "The Correct answer is " << answer << endl;
                score = 0;
            }
        }
    }
}

int main() {
    cout << "Guess the Animal" << endl;
    string guess1, guess2, guess3;

    cout << "Which bear lives at the North Pole? ";
    cin >> guess1;
    check_guess(guess1, "polar bear");

    cout << "Which is the fastest land animal? ";
    cin >> guess2;
    check_guess(guess2, "Cheetah");

    cout << "Which is the largest animal? ";
    cin >> guess3;
    check_guess(guess3, "Blue Whale");

    cout << "Your Score is " << score << endl;

    return 0;
}
