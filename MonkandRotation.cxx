#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N,K;
        cin >> N;
        cin >> K;
        
        int A[N] = {0};
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
        }

        while(K--)
        {
            int B[N] = {0};
            int temp = A[N-1];
            for(int i=0; i<N; i++)
            {
                if(i<N-1)
                {
                    B[i+1] = A[i];
                }
                else
                {
                    B[0]=temp;
                }
            }
            for(int i=0; i<N; i++)
            {
                A[i] = B[i];
            }
        }
        for(int i=0; i<N; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
