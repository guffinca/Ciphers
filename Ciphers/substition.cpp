#include "Substitution.h"

Substitution::Substitution(string newkey)
{
    this ->key = newkey;
}
string Substitution::encode(string msg)
{
    
   for (int i = 0; i < msg.length(); i++) 
   {
            msg[i] = key[msg[i] - 'a'];
   }

   return msg;
}

string Substitution::decode( string msg) 
{
    string temp = "";
    for (int i = 0; i < msg.length(); i++) 
    {
        msg[i] = key[msg[i] - 'a'];
    }
    return msg;

}


