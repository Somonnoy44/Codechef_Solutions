//Language: C++
//AUTHOR: Somonnoy Banerjee
//GITHUB: https://github.com/Somonnoy44

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int j=0;j<T;j++)
	{
		int A[100000]; // Declaring an array for input from the user
		int B[100000]; // Declaring an array to store the result
		int N; // N will be used to store the size of the array
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>A[i]; // Taking input in the array to be processed
		}
		for(int i=0;i<N;i++)
		{
			B[i]=0; // Initializing the indexes of array B with 0
		}
		
		for(int i=0;i<N-1;i++)
		{
			int temp=A[i]; // Temporary variable for processing
			for(int j=i+1;j<N;j++)
			{
				if(temp<A[j])
					B[i]++;
				else if(temp==A[j])
				{
					continue;
				}
			}
		}
		for(int i=0;i<N;i++)
		{
			cout<<B[i]<<" ";
		}
    }
	return 0;
}
