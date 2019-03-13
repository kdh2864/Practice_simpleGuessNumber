#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // Make random number
    srand(time(0));
    int num1 = rand() % 100;


    // Question
    cout << "Guess a magic number between 0 and 100\n" << endl;
    cout << "Enter your guess: ";
    int answer;
    cin >> answer;

    // Wrong answer
    while(num1 != answer){
        if(num1 > answer){
            cout << "Your guess is too low" << endl;
            cout << "Enter your guess: ";
            cin >> answer;
        continue;
        }
        else if(num1 < answer){
            cout << "Your guess is too high" << endl;
            cout << "Enter your guess: ";
            cin >> answer;
        }
    }

    // Right answer
    cout << "You right!!" << endl;

    return 0;
}