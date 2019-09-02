#include <iostream>
using namespace std;

int main()
{
    int num = 42;
    
    for(;;)
    {
        int guess = 0;
        cout << "Enter a guess: ";
        cin >> guess;
        if(guess == num)
            break;
        else if(guess < num)
            cout << "Too low!" << endl;
        else
            cout << "Too high!" << endl;
    }
    cout << "Correct!" << endl;
    return 0;
}