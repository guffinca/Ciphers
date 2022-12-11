#include "Cipher.h"

class Substitution : public Cipher
{
public: 
	Substitution(string newkey);
	string encode( string msg);
	string decode( string msg);

private:
	string key;
};