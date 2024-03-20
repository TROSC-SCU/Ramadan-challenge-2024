#include <bits/stdc++.h>

using namespace std;

int score = 0;

void check_guess(string guess, string answer)
{
    bool still_guessing = true;
    int attempt = 0;
    while (still_guessing && attempt <= 3)
    {
        if (guess == answer)
        {
            cout << "Correct Answer" << endl;
            score++;
            still_guessing = false;
            return;
        }
        else
        {
            if (attempt <= 2)
            {
                cout << "Sorry Wrong Answer, try again: ";
                getline(cin, guess);
                attempt++;
            }
        }
    }
    if (attempt == 3)
    {
        cout << "The Correct answer is " << answer << endl;
        score = 0;
    }
}

int main()
{
    cout << "Guess the Animal" << endl;

    string guess1;
    cout << "Which bear lives at the North Pole? ";
    getline(cin, guess1);
    check_guess(guess1, "polar bear");

    string guess2;
    cout << "Which is the fastest land animal? ";
    getline(cin, guess2);
    check_guess(guess2, "Cheetah");

    string guess3;
    cout << "Which is the largest animal? ";
    getline(cin, guess3);
    check_guess(guess3, "Blue Whale");

    cout << "Your Score is " << score << endl;

    return 0;
}
