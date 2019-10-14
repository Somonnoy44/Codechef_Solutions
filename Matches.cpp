//Language: C++
//AUTHOR: Somonnoy Banerjee
//GITHUB: https://github.com/Somonnoy44

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	int A,B;
    cin>>T;
    cin>>A>>B;
    int arr[10];
    arr[0]=6;
    arr[1]=2;
    arr[2]=5;
    arr[3]=5;
    arr[4]=4;
    arr[5]=5;
    arr[6]=6;
    arr[7]=3;
    arr[8]=7;
    arr[9]=6;
	int sum=A+B;
	int s;
	for(int i=sum;i>=0;i=i/10)
	{
		int digit=i%10;
		s=arr[digit];
	}
    return 0;
    cout<<s<<endl;
}
