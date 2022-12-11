#pragma once

#include "Cipher.h"

// Concrete class
class Caesar : public Cipher
{
public:
	Caesar(int newkey);
	string encode( string msg);
	string decode( string msg);

private:
	int mKey;

};