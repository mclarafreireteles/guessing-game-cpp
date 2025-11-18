#include <iostream>
using namespace std;

int main(){
    cout << "*********************************" <<  endl;
    cout << "* Welcome to the Guessing Game! *" <<  endl;
    cout << "*********************************" <<  endl;

    const int SECRET_NUMBER = 42;
    bool guessed = false;
    int attempts = 0;

    double points = 1000.0;


    while (!guessed){
        cout << "What's your guess? ";
        int guess_number;
        cin >> guess_number;
        
        guessed = guess_number == SECRET_NUMBER;

        double missing_points = abs((guess_number - SECRET_NUMBER) / 2);
        points = points - missing_points;
    
        if (guessed) {
            cout << "Congratulations! You guessed the secret number!" << endl;
        } else if (guess_number > SECRET_NUMBER) {
            cout << "Your guess was highest than the secret number" << endl;
        } else {
            cout << "You guess was lowest than the secret number" << endl;
        }
        attempts++;
    }
    cout << "Game over. Your finished the game with: " << attempts << "attempts" << endl;
    cout << "Your score was: " << points << " points" << endl;
}