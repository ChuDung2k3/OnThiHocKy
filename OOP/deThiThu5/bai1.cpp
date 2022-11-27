#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;


class DayNguyen{
	private:
		int n;
		int *a;
	public:
		DayNguyen(int n)
		{
			this->n = n;
			a = new int[n];
		}
		friend istream& operator >> (istream&in, DayNguyen &x)
		{
			for(int i = 0 ; i < x.n ;i++)
			{
				in >> x.a[i];
			}
			return in;
		}
		friend ostream& operator << (ostream& out , DayNguyen x)
		{
			bool ok = true;
			for(int i = 0 ; i < x.n ; i++)
			{
				ok = true;
				for(int j = 2 ; j <= sqrt(x.a[i]) ; j++)
				{
					if(x.a[i] % j == 0)
					{
						ok = false;
						break;
					}
				}
				if(x.a[i] < 2) ok = false;
				if(ok) out << x.a[i] << " ";
			}
			return out;
		}
};
int main()
{
	int n ; cin >> n;
	DayNguyen a(n);
	cin >> a;
	cout << a;
}

