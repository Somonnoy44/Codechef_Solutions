//Language: C++
//AUTHOR: Somonnoy Banerjee
//GITHUB: https://github.com/Somonnoy44

#include <bits/stdc++.h>

using namespace std;

int a[150];
int b[150];

int main() 
{
	
	int T;
	cin>>T;
	for(int j=0;j<T;j++)
	{
        int highest = 0;
        int N;
        cin>>N;
        
        
        for(int i=0;i<N;i++)
        {
        cin>>a[i];
        }
        
        for(int i=0;i<N;i++)
        {
         cin>>b[i];
         int result =(a[i]*20)-(b[i]*10);
             if(result  > highest)
              highest = result;
          
        }
        
        cout<<highest<<endl;
    }
	return 0;
}

