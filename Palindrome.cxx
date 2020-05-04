#include <iostream>
#include <string.h>

using namespace std;

void CheckPalindrome(string sInput, const char* result[])
{
    bool isPlaindrome = false;
    int len  = sInput.length();
    
    for(int i=0; i<=len/2; i++)
    {
        if(sInput[i] == sInput[len-i-1])
        {
            isPlaindrome=true;
            continue;
        }
        else
        {
            isPlaindrome=false;
            break;
        }
    }
    if(isPlaindrome)
    {
        result[0] = "YES";
        if(len%2 == 0)
        {
            result[1] = "EVEN";
        }
        else
        {
            result[1] = "ODD";
        }
    }
    else
    {
        result[0] = "NO";
        if(len%2 == 0)
        {
            result[1] = "EVEN";
        }
        else
        {
            result[1] = "ODD";
        }
    }
}


int main()
{
	int T;

	cin >> T;

	for(int i=0; i<T; i++)
	{
		string sInput;

		cin >> sInput;

		const char* result[2] = {"",""};

		CheckPalindrome(sInput,result);

		if(result[0] == "YES")
		{
			cout << result[0] << " " << result[1] << endl;
		}
		else
		{
			cout << result[0] << endl;
		}
	}
	return 0;
}
