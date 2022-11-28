#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
template<class T>
void BubbleSort(T *a, int n)
{
	for(int i = 0; i < n - 1; ++i)
	{
		for(int j = n - 1; j >= i; --j)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
			}
		}
	}
}

template<class T>
void selectionSort(T *a, int n)
{
	for(int i = 0 ; i < n - 1; ++i)
	{
		int mi = i;
		for(int j = i + 1; j < n; ++j)
		{
			if (a[mi] > a[j])
			{
				mi = j;
			}
		}
		swap(a[i], a[mi]);
	}
}

template<class T>
void insertionSort(T *a, int n)
{
	for(int i = 0; i < n; ++i)
	{
		int pos = i - 1;
		T x = a[i];
		while(pos >= 0 && a[pos] > x)
		{
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
	cin >> n; 
	int a[n];
	for(int &x : a) cin >> x;
//	BubbleSort(a, n);
//selectionSort(a, n);
insertionSort(a, n);
	for(int x : a) cout << x << " ";
}

