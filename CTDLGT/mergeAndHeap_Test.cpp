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
void merge(T a[], int l, int m, int r)
{
	vector<T> x(a + l, a + m + 1);
	vector<T> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while(i < x.size()  && j < y.size())
	{
		if(x[i] > y[j]) a[l++] = y[j++];
		else a[l++] = x[i++]; 
	}
	while(i < x.size()) a[l++] = x[i++];
	while(j < y.size()) a[l++] = y[j++];
}
template<class T>
void mergeSort(T a[], int l, int r)
{
	if (l >= r) return;
	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	merge(a, l, m, r);
}
template<class T>
void heapify(T *a, int n, int i)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int larg = i;
	
	if (l < n && a[l] > a[larg]) larg = l;
	if (r < n && a[r] > a[larg]) larg = r;
	if (larg != i)
	{
		swap(a[i], a[larg]);
		heapify(a, n, larg);
	}
}
template<class T>
void heapSort(T *a, int n)
{
	for (int i = n / 2 - 1; i >= 0; --i)
	{
		heapify(a, n, i);
	}
	
	for(int i = n - 1; i >= 0; --i)
	{
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    mergeSort(a, 0, n - 1);
    for(int x : a) cout << x <<" ";
}

