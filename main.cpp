#include <iostream>

using namespace std;

bool IsKPeriodic(string str, int k)
{
	if (k == str.length())
	{
		return true;
	}
	if ((k <= 0) || (str.empty()) || (k > str.length()) || (str.length() % k))
	{
		return false;
	}
	else
	{
		string myString;
		
		for (auto i = 0; i < k; i++)
		{
			myString += str[i];
		}

		string myString1;
		for (auto i = 0; i < (str.length() / k); i++)
		{
			myString1 += myString;
		}
		return (myString1 == str);
	}
}

int main()
{
	string str1 = "AZAZAZAZAZAZAZAZ";
	
	cout << IsKPeriodic(str1, 0) << endl;
	cout << IsKPeriodic(str1, 1) << endl;
	cout << IsKPeriodic(str1, 2) << endl;
	cout << IsKPeriodic(str1, 3) << endl;
	cout << IsKPeriodic(str1, 4) << endl;
	cout << IsKPeriodic(str1, 16) << endl;

	return 0;
}