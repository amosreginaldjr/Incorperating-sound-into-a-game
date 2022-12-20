#include<iostream>
#include <stdlib.h>/* srand, rand */
#include <time.h> 
#include"Game.h"
using namespace std;


void Game::set_user_guess(int guess)
{
	user_guess = guess;
}

int Game::get_user_guess()
{
	return user_guess;
}

int Game::set_randomNumber()
{
	srand(time(NULL));
	randomNumber = rand() % 10 + 1;
	return randomNumber;
}

int Game::get_randomNumber()
{
	return randomNumber;
}

bool Game::guessIsRight()
{
	if (get_user_guess() == get_randomNumber())
	{
		return 1;
	}
	return 0;
}
