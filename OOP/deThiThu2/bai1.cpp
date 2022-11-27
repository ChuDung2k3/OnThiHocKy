#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class DaThuc{
	private:
		int n;
		int *a;
	public:
		DaThuc(){
			
		}
		void nhap()
		{
			cin >> n;
			a = new int[n + 1];
			for(int i = 0; i <= n; ++i)
			{
				cin >> a[i];
			}
		}
		void xuat()
		{
			cout <<n <<'\n';
			for(int i = 0; i <= n; ++i)
			{
				cout << a[i] << ' ';
			}
			cout << '\n';
		}
		void tinh(int x)
		{
			int sum  = 0;
			for(int i = 0; i <= n; ++i)
			{
				sum += a[i]* pow(x, n - i);
			}
			cout << "Gia tri dt: " << sum <<'\n';
		}
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    DaThuc b;
    b.nhap();
    b.xuat();
	int x; cin >> x;
	b.tinh(x);
	return 0;
}

