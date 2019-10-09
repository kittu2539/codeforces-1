#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int cnt=0;
	int x=0;
	int y=0;
	int z=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]==4)
		{
			cnt=cnt+1;
		}
		if (a[i]==3)
		{
			x=x+1;
		}
		if
		 (a[i]==2)
		{
			y=y+1;
		}
		if (a[i]==1)
		{
			z=z+1;
		}
	}
	while (z>=1)
		{
			if (x>=1)
			{
				cnt=cnt+x;
				z=z-x;
				x=0;
		    }
			else if (y>=1)
			{
				cnt=cnt+1;
				z=z-2;
				
				y=y-1;
			}
			else 
			{
				
				if (z%4==0)
				{
					cnt=cnt+z/4;
					z=0;
				}
				else
				{
					cnt=cnt+z/4+1;
					z=0;
				}
			 }
		 }
		
	 if (y>=1)
	 {
		 if (y%2==0)
		 {
			 cnt=cnt+y/2;
		 }
		 else
		 {
			 cnt=cnt+y/2+1;
		 }
	 }
    cout<<cnt+x;
   
}



