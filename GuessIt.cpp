#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber();
int GetPlayerGuess();
void PrintAnswer(int guess, int bot);
int Point();
int main ()
{
    int bot = generateRandomNumber();
    int score = Point();
    int guess;
    do
    {
        guess = GetPlayerGuess();
        PrintAnswer(guess, bot);
        score--;
    } while (guess != bot);
    cout << "Your score is: " << score + 1;
    return 0;
}

int generateRandomNumber()
{
    srand(time(0));
    int x = rand() % 100 + 1;
    return x;
}

int GetPlayerGuess()
{
    int guess;
    cout << "Enter your guess (1-100): ";
    cin >> guess;
    return guess;
}

void PrintAnswer(int guess, int bot)
{
    if (guess > bot)
    {
        cout << "Smaller!" << endl;
    }
    else if (guess < bot)
    {
        cout << "Bigger!" << endl;
    }
    else
    {
        cout << "Good job!" << endl;
    }
}

int Point()
{
    int point = 100;
    return point;
}

