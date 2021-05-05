#include "Encrypter\Encrypter.h"//including encrypter class

Encrypter encrypter;            // creating encrypter class





int main()
{
															 //////////////////////////////
	std::string message = "hello world";					 //printing original  message//
	std::cout << " original message: " << message << "\n\n"; //////////////////////////////

	encrypter.ReverseLetters('e', 'd');						 //////////////////////////////
	encrypter.ReverseLetters('o', ' ');						 //setting encryption letters//
	encrypter.ReverseLetters('h', 'l');						 //////////////////////////////

	message = encrypter.EncryptMessage(message);			 //////////////////////////////
	std::cout << "encrypted message: " << message << "\n\n"; //printing encrypted message//
															 //////////////////////////////

	message = encrypter.EncryptMessage(message);			 //////////////////////////////
	std::cout << "decrypted message: " << message << "\n\n"; //printing decrypted message//
															 //////////////////////////////
}





//to do
/*
	the 'encrypter.ReverseLetters()' function breaks when reversing one letter more than once
	for example:

	encrypter.ReverseLetters('a', 'd');
	encrypter.ReverseLetters('d', 'h');

	try to rework this function to fix this problem, or make it so each letter can only be switched once
	




	try adding a function to the encrypter class, to give the encrypter a seed that encrypts a string message depending on the seed.
	and decryptes the message if you pass it back through again 





	try to give the encrypter class a function that can encrypt multiple times over, to have a super-encrypted message
	and then a decrypt function that does the reverse





	try adding a logging class that you can pass a string into, and it will log to the console with 'cout' or 'printf' from the standard liabry
	and have a way to log errors





	attempt to make the 'encrypter.EncryptMessage()' function smaller





	try to make an algorithm that would break the encryption, by testing for keywords

*/