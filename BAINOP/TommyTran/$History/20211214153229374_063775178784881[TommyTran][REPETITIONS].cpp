#include<bits/stdc++.h>
using namespace std;
long long int solan,ketqua;
string h;
int main()
{
	freopen("repetitions.inp","r",stdin);
	freopen("repetitions.out","w",stdout);
	cin>>h;
	solan=1;
	for(int i=0;i<h.size();i++)
	{
		if(h[i]==h[i+1]) solan=solan+1;
		else
		{
			ketqua=max(solan,ketqua);
			solan=1;
		}
	}
	cout<<ketqua;
}
