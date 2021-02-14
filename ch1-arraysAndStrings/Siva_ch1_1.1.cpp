#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace string;

bool IsStrUnique( string str )
{
 	if ( NULL == str )
 		{  return false; }
	
 	for (int i = 0; i < str.length() - 1; i++) {
	 	for ( int j=1; j < str.length(); j++) {
        		if ( str[i] == str[j] )
			{   return false; }
		}
	}
 	return true;
}


int main()
{
 	string str = "Im not a unique string";
 	if ( IsStrUnique(str) )
 		{ cout << "The string "<< str << " is unique."<<endl; }
	else
 		{ cout << "The string " << str << " is not unique." << endl; }
}
