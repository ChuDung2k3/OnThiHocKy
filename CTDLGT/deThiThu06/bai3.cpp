#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class DaySo{
	private:
		int n;
		int *a;
	public:
		DaySo(int n)
		{
			this->n = n;
			a = new int[n];
		}
		void nhap();
		void merge(int l, int m, int r);
		void Sx(int l, int r);
		void in();
};
void DaySo::nhap(){
	for(int i = 0; i < n ; ++i) cin >> a[i];
}
void DaySo::in()
{
	for(int i = 0; i < n; ++i)
	{
		cout << a[i] <<" ";
	}
}
void DaySo::merge(int l, int m, int r)
{
	vector<int> x(a + l, a + m + 1);
	vector<int>y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while(i < x.size() && j < y.size())
	{
		if (x[i] < y[j]) a[l++] = x[i++];
		else a[l++] = y[j++];
	}
	while(i < x.size()) a[l++] = x[i++];
	while(j < y.size()) a[l++] = y[j++];
}
void DaySo::Sx(int l, int r){
	if (l >= r) return;
	int m = (l + r) / 2;
	Sx(l , m);
	Sx(m + 1, r);
	merge(l, m, r); 
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    DaySo b(n);
    b.nhap();
    b.Sx(0, n - 1);
	b.in();
    
}

