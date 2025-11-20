#include <iostream>
using namespace std;

int main()
{

    const int SECRET_NUMBER = 42;
    bool guessed = false;
    int attempts = 0;
    int dificulty_guess_number;

    double points = 1000.0;

    cout << "*********************************" << endl;
    cout << "* Welcome to the Guessing Game! *" << endl;
    cout << "*********************************" << endl;

    cout << "Choose the level of dificulty";
    cout << "Easy (E), Medium (M), Hard (H): ";

    char dificulty;
    cin >> dificulty;

    

    if (dificulty == 'E')
    {
        dificulty_guess_number = 15;
    }
    else if (dificulty == 'M')
    {
        dificulty_guess_number = 10;
    }
    else
    {
        dificulty_guess_number = 5;
    }

    for (attempts = 1; attempts <= dificulty_guess_number; attempts++)
    {
        cout << "What's your guess? ";
        int guess_number;
        cin >> guess_number;

        guessed = guess_number == SECRET_NUMBER;

        double missing_points = abs(guess_number - SECRET_NUMBER) / 2.0;
        points = points - missing_points;

        if (guessed)
        {
            cout << "Congratulations! You guessed the secret number!" << endl;
        }
        else if (guess_number > SECRET_NUMBER)
        {
            cout << "Your guess was highest than the secret number" << endl;
        }
        else
        {
            cout << "You guess was lowest than the secret number" << endl;
        }
    }

    if (guessed == false)
    {
        cout << "You lose. Try again!" << endl;
    }
    else
    {
        cout << "Game over. Your finished the game with: " << attempts << "attempts" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Your score was: " << points << " points" << endl;
    }
}