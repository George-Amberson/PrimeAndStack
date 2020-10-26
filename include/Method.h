#pragma once
#include <string>
#include "Stack.h"

using namespace std;

bool Method(string& lhs)
{
	Stack<char>A(lhs.size());
	string sym = "12";
	for (int i = 0; i < lhs.size(); i++)
	{

		if ((lhs[i] == '(') || (lhs[i] == '{') || (lhs[i] == '['))
		{
			A.push(lhs[i]);
		}
		else
		{
			if (A.IsEmpty()) return 0;
			sym[0] = A.pop();
			sym[1] = lhs[i];
			if ((sym != "()") && (sym != "{}") && (sym != "[]"))
			{
				return 0;
			}
			
		}

	}
	return 1;
}