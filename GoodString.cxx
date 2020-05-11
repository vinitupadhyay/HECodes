#include <iostream>
#include <string.h>

using namespace std;

bool isVowel(char & s)
{
	bool result = false;
	if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
	{
		result = true;
	}
	return result;
}

int main()
{
	string S;

	cin >> S;

	int len = S.length();

	//cout << len;

	int MaxSubString = 0;

	for(int i=0; i<len; i++)
	{
		if(isVowel(S[i]))
		{
			int count = 0;
			for(int j=i; j<len; j++)
			{
				
				//substring
				//for(int k=i; k<=j; k++)
				//{
					if(isVowel(S[j]))
					{
						count++;
					}
					else
					{
						break;
					}
				//}
				if(count > MaxSubString)
				{
					MaxSubString = count;
				}
			}
		}
	}

	cout << MaxSubString << endl;

	return 0;
}
