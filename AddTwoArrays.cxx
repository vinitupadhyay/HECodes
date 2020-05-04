#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	int A[N];
	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int B[N];
	for(int j=0; j<N; j++)
	{
		cin >> B[j];
	}

	int C[N];
	for(int k=0; k<N; k++)
	{
		C[k] = A[k] + B[k];
		cout << C[k] << " ";
	}

	return 0;
}
