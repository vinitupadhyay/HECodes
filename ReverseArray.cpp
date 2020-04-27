#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
int i,N = 0;

cin >> N;

int inputArr[N];

for(i=0; i<N; i++) inputArr[i]=0;

for(i=0; i<N; i++)
{
	cin >> inputArr[i];
}

for(i=0; i<N; i++)
{
	cout << inputArr[N-i-1] <<endl;
}

return 0;
}

