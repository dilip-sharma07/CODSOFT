#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));   //Random number generator

    int randNum = rand() % 20 + 1;
    int guess;
    int attempts = 0;

    cout << "Hello,Welcome to number guessing game"<<endl;
    cout << "Try to guess the number between 1 to 20"<<endl<<endl;

    while (true) {
        cout << "Enter your guessed number: ";
        cin >> guess;
        attempts++;

        if (guess == randNum) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        } else if (guess < randNum) {
            cout << "Too low! Try guessing a higher number"<<endl;
        } else {
            cout << "Too high! Try guessing a lower number"<<endl;
        }
        cout<<endl;
    }

    return 0;
}
