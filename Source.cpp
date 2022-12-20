#include<iostream>
#include <stdlib.h>/* srand, rand */
#include <time.h> 
#include <Windows.h> 
#include"Game.h"
#include"Audio.h"
using namespace std;

int main()
{
	int passUserGuess = 0;
	cout << "Enter a number from 1 - 10 and see if you get it right: ";
	cin >> passUserGuess;

	Game play;
	play.set_randomNumber();
	cout << "RandomNumberIs: " << play.set_randomNumber() << endl;
	while (passUserGuess != 11)
	{
		cout << "Input (Enter 11 to stop): ";
		cin >> passUserGuess;

		play.set_user_guess(passUserGuess);
		//Audio sound; //UNCOMMENT WHEN START TO WORK ON Audio.cpp & Audio.h

		if (play.guessIsRight() == 1)
		{
			cout << "Correct!" << endl;
			PlaySound(TEXT("correct_answer_TuRooToo.wav"), NULL, SND_SYNC);
			break;
		}
	}


	return 0;
}