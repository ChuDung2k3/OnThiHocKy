#include<bits/stdc++.h>

using namespace std;

template<class T>
void Nhapday(T *a, int n, char ch)
{
	cout << "Nhap day " <<ch << ": ";
	for(int i = 0; i < n; ++i)
	{
		
		cin >> a[i];
	}
}
template<class D>
void Inday(D *a, int n)
{
	for(int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout <<'\n';
}
int main()
{
	int m, n;
	float a[100];
	long b[100];
	cout << "Nhap m, n: ";
	cin >> m >> n;
	Nhapday(a, m, 'a');
	Nhapday(b, n, 'b');
	Inday(a, m);
	return 0;
}
