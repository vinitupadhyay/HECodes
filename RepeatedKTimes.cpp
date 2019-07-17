/*
Given a List of N number a1,a2,a3........an, You have to find smallest number from the List that is repeated in the List exactly K number of times.

Input Format

First Line of Input Contain Single Value N, Size of List
Second Line of Input Contain N Space Separated Integers
Third Line of Input Contain Single Value K

Output Format

Smallest Integer Value That is Repeated Exactly K Number of Time

Constraints

0 < N < 100001
0 <= K < 100001
0 <= ai < 100001
NOTE
There Will Be Atleast One Variable Which Is Repeated K Times

*/




#include <iostream>

using namespace std;

int main()
{
/* ******************************************Taking Input Start****************************************** */
    int N;
    cin>>N;
    
    int *inputArray = new int[N];
    
    for(int i=0; i<N; i++)
    {
        cin>>inputArray[i];
    }
    
    int K;
    cin>>K;
 /* ******************************************Taking Input End****************************************** */
    
    int digitArray[100001]  = {0};
    
    for(int i=0; i<N; i++)
    {
        digitArray[inputArray[i]]++;
    }
    
    int min = 100001;
    int j;
    
    for(j=0; j<100001; j++)
    {
        if(digitArray[j] == K)
        {
            if(j<min)
            {
                min=j;
            }
        }
    }
    cout<<min;
    
    delete [] inputArray;
    
    return 0;
}
