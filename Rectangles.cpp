#include <bits/stdc++.h>
using namespace std;

int rect(int n)
{
	if(n == 1)
		cout<<1<<endl;
	else
	{
		int len,bred;
		int check = 0;
		int tot = 0;
		while(check == 0)
		{
			len = 1;
			while(len <= n)
			{
				bred = n/len;
				if(bred < len)
				{
					check = 1;
					break;
				}
				tot += (bred-len+1);
				len++;
			}
		}
		cout<<tot<<endl;
	}
}


int main()
{
	int n;
	cin>>n;
	rect(n);
	return 0;
}
