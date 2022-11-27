#include<bits/stdc++.h>

using namespace std;


bool cmp(int x, int y)
{
	if (x < y) return 1;
	return 0;
}
int main()
{
	int a[] ={9 , 7,10, 15, 2,1};
	sort(a, a + 6, cmp);
	for(int x : a)
	{
		cout << x <<" ";
	}
	return 0;
}
