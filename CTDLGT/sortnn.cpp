#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

template <class T>
int cmp(T a, T b)
{
	if (a > b) return 1;
	else return 0;
	
}

template<class T>
void Swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <class T>
void BubbleSort(T *a, int n)
{
	for(int i = 0; i < n - 1; ++i)
	{
		for (int j = n - 1; j > i; --j)
		{
			if (a[j] < a[j - 1])
			{
				Swap(a[j], a[j - 1]);
			}
		}
	}
}
template<class T>
void SelectionSort(T *a, int n)
{
	for(int i = 0; i < n- 1; ++i)
	{
		int tmp = i;
		for(int j = i + 1; j < n; ++j)
		{
			if (a[tmp] > a[j])
			{
				tmp = j;
			}
		}
		Swap(a[tmp], a[i]);
	}
}
template<class T>
void insertionSort(T *a, int n)
{
	for (int i = 1; i < n; ++i)
	{
		int pos = i - 1;
		T tmp = a[i];
		while(pos >= 0 && a[pos] > tmp)
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = tmp;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a)
    {
    	cin >> x;
	}
//	BubbleSort(a, n);
//	SelectionSort(a, n);
	insertionSort(a, n);
	for(int x : a) 
	{
		cout << x <<" ";
	}
	return 0;
}

