#include "Caesar.h"


Caesar::Caesar(int newKey)
{
	mKey = newKey;
}
string Caesar:: encode( string msg)
{
	//shifting the character in message
	
	for (int i = 0; i < msg.length(); i++)
	{
		msg[i] = (msg[i] + mKey);
	}
	return msg;
}

string Caesar::decode( string msg)
{
	
	for (int i = 0; i < msg.length(); i++)
	{
		msg[i] = (msg[i] - mKey);
	}
	return msg;
}
