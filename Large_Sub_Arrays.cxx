#include <iostream>

using namespace std;

int main()
{
	int T;
	long long int N,M,K;

	cin >> T;

	for(int i=0; i<T; i++)
	{
		cin >> N;
		cin >> M;
		cin >> K;

		long long int L = N*M;
		long long int A[N], B[L];

		for(int j=0; j<N; j++)
		{
			cin >> A[j];
		}

		long long int n=0;

		for(int k=0; k<M; k++)
		{
			for(int l=0; l<N; l++)
			{
				if(n<L)
				{
					B[n++] = A[l];
				}
			}
		}

		long long int count=0;
		
		for(int p=0; p<L; p++)
		{
			for(int q=p; q<L; q++)
			{
				int sum=0;
				for(int r=p; r<=q; r++)
				{
					sum += B[r];
				}
				if(sum <= K)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
