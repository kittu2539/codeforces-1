#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
int main ()
{
	int n,max;
	int s=0;
	cin>>n;
	int a[n],b[n];
	max=s;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		s=s+b[i]-a[i];
		if (s>max)
		{
			max=s;
		}
	}
	cout<<max;

}
