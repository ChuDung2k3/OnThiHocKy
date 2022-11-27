#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
class Dathuc{
	private:
		int n;
		int *hs;
	public:
		Dathuc(int x)
		{
			this->n = x;
			hs = new int[n + 1];
		}
		~Dathuc()
		{
			delete []hs;
		}
		void nhap()
		{
			for(int i = 0; i <= n; ++i)
			{
				cin >> hs[i];
			}
		}
		void xuat()
		{
			cout << "He so da thuc la: ";
			for(int i = 0; i <= n; ++i)
			{
				cout << hs[i] << " ";
			}
		}
		friend int tinh(Dathuc a, int d)
		{
			int sum = 0;
			for(int i = 0; i <= a.n; ++i)
			{
				sum += a.hs[i] * pow(d, i);
			}
			return sum;
		}
};
int main()
{
    int n; cin >> n;
    Dathuc P(n);
    P.nhap();
    P.xuat();
    cout << "\nNhap d1, d2: \n";
    int d1, d2;
    cin >> d1 >> d2;
//    int t1 = tinh(P, d1);
//    cout << t1 <<'\n';
//	int t2 = P.tinh(d2);
	float s = tinh(P, d1) + tinh(P, d2);
	cout << s;
	return 0;
}

