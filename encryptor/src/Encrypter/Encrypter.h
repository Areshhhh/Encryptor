#pragma once
#include <string>												 //
#include <sstream>												 //includes
#include <iostream>												 //





class Encrypter													 //encrypter class
{

public:

	 Encrypter();												 //constructer
	~Encrypter();												 //destructer

	void ReverseLetters(const char letter1, const char letter2); //function declerations
	std::string EncryptMessage(std::string message);			 //

private:

	char Code[27];												 //alphabet order code

};