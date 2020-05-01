#include <iostream>

using namespace std;

int main()
{
	long long int N;
	
	cin >> N;

	long long int A[N];

	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int maxSum=0; 

	for(int j=0; j<N; j++)
	{
		int sum=0;
		int p = j;
		int q=1;
		while(p+q<=N)
		{
			int r=q;
			while(r>0)
			{
				sum += A[p++];
				r--;
			}
			q++;
		}
		if(sum > maxSum)
		{
			maxSum = sum;
		}
	}

	cout << maxSum <<endl;

	return 0;
}
