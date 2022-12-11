// This example is intended to provide a quick
// review of inheritance and polymorphism. It works
// with ciphers.

// NOTE: this is another bonus opportunity!!! Complete the code by creating two
//       derived classes. One for Caesar Cipher and 
//       one for another Substitution Cipher of your choice. You need to also run tests to illustrate
//       that the encode and decode algorithms work. you must start with the code that is presented here.

// History: Discussed Cipher and Caesar Cipher setup.
//                  Casesar Cipher is a specific kind of cipher,
//                  but has common properties to other ciphers.
//                  Inheritance and abstract classes, plus polymorphism
//                  could be useful here!!!
//           11/18 - declared the encode and decode functions in Caesar.
//           11/14 - declared the encode and decode functions for Cipher. these functions
//                   are pure virtual, which makes Cipher an abstract class. abstract classes
//                   can't be instantiated!!!


/*
 Programmer - Caden Guffin

 Date 12/7/2022

 Edit - i deleted the refrence to the msg in each of the encode and decode. Doing this allowed me to complete the program as before i kept running into issues.





*/
#include "Caesar.h"
#include "Substitution.h"

int main(void)
{
	//Cipher c; // can't instantiate an abstract class!
	Caesar* caesarCipher = new Caesar(3);

	//Caesar Test Cases
	string msg = "ab";


	
	string encoded = caesarCipher->encode(msg);
	cout << "Encoded: " << encoded << endl;
	//If encode works, should print out as de

	if (encoded == "de")
	{
		cout << "Caesar encode works" << endl;

	}
	else
	{
		cout << "Caesar encode does not work" << endl;
	}

	string decoded = caesarCipher->decode(encoded);
	cout << "Decoded: " << decoded << endl;
	//if decode works should print ab to screen
	if (decoded == "ab")
	{
		cout << "Caesar decode works" << endl;

	}
	else
	{
		cout << "Caesar decode does not work" << endl;
	}




	//The New Cipher is the Alphabet backwards.
	Substitution* substitution = new Substitution("zyxwvutsrqponmlkjihgfedcba");

	//Test cases for substituion cipher
	string encoded2 = substitution->encode(msg);
	cout << "Substitution encoded: " << encoded2 << endl;

	//If encode works should print zy
	if (encoded2 == "zy")
	{
		cout << "Substitution encode works" << endl;

	}
	else
	{
		cout << "Substitution encode failed" << endl;
	}


	string decoded2 = substitution->decode(encoded2);
	cout << "Substitution decoded: " << decoded2 << endl;
	if (decoded2 == "ab")
	{
		cout << "Substitution decode works" << endl;

	}
	else
	{
		cout << "Substitution decode failed" << endl;
	}
	return 0;
	
	
}