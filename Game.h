#pragma once
#include<iostream>
using namespace std;

class Game
{
private:
	int user_guess;
	int randomNumber;

public:
	void set_user_guess(int guess);
	int get_user_guess();

	int set_randomNumber();
	int get_randomNumber();

	bool guessIsRight();
};