#include <string>
using namespace std;


#ifndef _STRINGFUNCTIONS_
#define _STRINGFUNCTIONS_

string stringToUpper(string val)
{

	for (int x = 0; x < val.length(); x++)
	{
		if (val[x] >= 97 && val[x] <= 122)
			val[x] = val[x] - 32;
	}

	return val;
}

string stringToLower(string val)
{

	for (int x = 0; x < val.length(); x++)
	{
		if (val[x] >= 65 && val[x] <= 90)
			val[x] = val[x] + 32;
	}

	return val;
}

#endif