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
		int *hs;
	public:
		DaThuc(int n)
		{
			this->n = n;
			hs = new int[n + 1];
		}
		void nhap()
		{
			cout <<"Nhap he so da thuc: \n";
			for(int i = 0; i <= n; ++i)
			{
				cin >>hs[i];
			}
		}
		void xuat()
		{
			cout <<"he so da thuc:\n";
			for(int i = 0; i <= n; ++i)
			{
				cout << hs[i] <<" ";
			}
		}
		DaThuc cong(DaThuc a)
		{
			DaThuc x(n);
			for(int i = 0; i <= n; ++i)
			{
				x.hs[i] = this->hs[i] + a.hs[i];
			}
			return x;
		}
};
int main()
{
	cout << "Nhap he so n: ";
	int n; cin >> n;
	DaThuc P(n), Q(n);
	P.nhap();
	Q.nhap();
	DaThuc tong = P.cong(Q);
	cout << "he so da thuc tong la:\n";
	tong.xuat();
	
}

