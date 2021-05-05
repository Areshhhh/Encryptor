#include "Encrypter.h" //incuding class definiton



Encrypter::Encrypter() : Code {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '}
{} //constructor function body

Encrypter::~Encrypter()
{} //destructor function body



void Encrypter::ReverseLetters(const char letter1, const char letter2)
{
	int let1place;
	for (int i = 0; i < 27; i++) //iterating through all 27 letters
	{
		if (Code[i] == letter1)  //temperaraly switching letter1 to '~'
		  { Code[i] = '~'; let1place = i; }

		if (Code[i] == letter2)  //replacing letter 2 with letter1
			Code[i] =  letter1;
	}
	Code[let1place] = letter2;   //replacing letter 1 with letter2
}



std::string Encrypter::EncryptMessage(std::string message)
{
	std::stringstream encrypted_message;  //making a new string to store the encrypted message

	for (int i = 0; i < message.size(); i++)
	{
		switch(message[i])				  //switch statement finding what letter links to the Code alphabet
		{								  //and adding the letter to the new encrypted message
		case 'a':
			encrypted_message << Code[0];
			break;
		case 'b':
			encrypted_message << Code[1];
			break;
		case 'c':
			encrypted_message << Code[2];
			break;
		case 'd':
			encrypted_message << Code[3];
			break;
		case 'e':
			encrypted_message << Code[4];
			break;
		case 'f':
			encrypted_message << Code[5];
			break;
		case 'g':
			encrypted_message << Code[6];
			break;
		case 'h':
			encrypted_message << Code[7];
			break;
		case 'i':
			encrypted_message << Code[8];
			break;
		case 'j':
			encrypted_message << Code[9];
			break;
		case 'k':
			encrypted_message << Code[10];
			break;
		case 'l':
			encrypted_message << Code[11];
			break;
		case 'm':
			encrypted_message << Code[12];
			break;
		case 'n':
			encrypted_message << Code[13];
			break;
		case 'o':
			encrypted_message << Code[14];
			break;
		case 'p':
			encrypted_message << Code[15];
			break;
		case 'q':
			encrypted_message << Code[16];
			break;
		case 'r':
			encrypted_message << Code[17];
			break;
		case 's':
			encrypted_message << Code[18];
			break;
		case 't':
			encrypted_message << Code[19];
			break;
		case 'u':
			encrypted_message << Code[20];
			break;
		case 'v':
			encrypted_message << Code[21];
			break;
		case 'w':
			encrypted_message << Code[22];
			break;
		case 'x':
			encrypted_message << Code[23];
			break;
		case 'y':
			encrypted_message << Code[24];
			break;
		case 'z':
			encrypted_message << Code[25];
			break;
		case ' ':
			encrypted_message << Code[26];
			break;
		default:
			encrypted_message << '?';
			break;
		}
	}

	return encrypted_message.str();		   //returning new encrypted message
}