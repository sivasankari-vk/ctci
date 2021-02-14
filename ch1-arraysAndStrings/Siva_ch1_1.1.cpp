#include <iostream>
using namespace std, string

bool IsStrUnique( string *str )
{
 if ( NULL == str )
 {	return false; }
 for (int i = 0; i < strlen(str)-1; i++)
{
 	for ( int j=1; s[j]!='\0'; j++)
	{
        	if ( s[i] == s[j] )
		{   return false; }
	}
}
 return true;
}


int main()
{
 string str = "Im not a unique string"
 if ( IsStrUnique(str) )
 { cout << "The string %s is unique."<<str; }
else
 { cout << "The string %s is not unique."" << str; }
}