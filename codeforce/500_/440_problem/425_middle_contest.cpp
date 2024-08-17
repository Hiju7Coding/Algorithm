#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;char ch;
	cin>>a>>ch>>b;
	cin>>c>>ch>>d;
	int t = (a+c)*60+b+d; 
	printf("%02d:%02d",t/2/60,(t/2)%60);

    return 0;
}
//1133A