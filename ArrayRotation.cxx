#include <iostream>

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

		int A[N];
		for(int i=0; i<N; i++)
		{
			cin >> A[i];
		}

		while(K--)
		{
			int tmp1,tmp2;
			for(int j=0; j<N; j++)
			{
				if(j == 0)
				{
					tmp1 = A[j];
					A[j] = A[N-1];
				}
				else
				{
					A[j] = tmp1;
					tmp1 = tmp2;
				}
				tmp2 = A[j+1];
			}
		}
		for(int p=0; p<N; p++)
		{
			cout << A[p] << " ";
		}
		cout<<endl;
	}
}
