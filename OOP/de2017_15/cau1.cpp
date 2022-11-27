#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class PS{
	private:
		int tu, mau;
	public:
		PS(){};
		PS(int t, int m){ tu = t; mau = m;}
		void nhap()
		{
			cin >> tu >>mau;
		}
		friend ostream& operator << (ostream&out, PS a)
		{
			int gcd = __gcd(a.tu, a.mau);
			a.tu /= gcd;
			a.mau /= gcd;
			out << a.tu << "/" << a.mau;
		}
		friend PS operator * (PS p1, PS p2)
		{
			PS p;
			p.tu = p1.tu * p2.tu;
			p.mau = p1.mau * p2.mau;
			return p;
		}
		
};
int main()
{
	PS p1(4, 2);
	PS p2;
	p2.nhap();
//	cout << p1;
	cout << p1 <<'\n' << p2<<'\n';
	PS p = p1 * p2;
	cout << p <<'\n';
	return 0;
}

