/*
Sample Input
7
1 -1
2
1 1 1
Sample Output
1
5
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
int a[1000000];

void d(int length,int x)
{
	long long int sum=0;
	int exp=1;
	for(int i=length-1;i>=0;i--)
	{
		sum+=a[i]*exp*(length-i);
		cout<<"sum: "<<sum<<endl;
		exp*=x;	
		cout<<"e: "<<exp<<endl;
	} 
	cout<<sum<<endl;
}


int main()
{
	int x,n;
	while(scanf("%d",&x)!=EOF) 
	{
		for(n=0;;n++)
		{
			cin>>a[n];
			if(getchar()=='\n')
			{
				break;
			}
		}
		d(n,x);
	}
return 0;
}

