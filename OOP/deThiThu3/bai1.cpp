#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Dayso{
	private:
		int n;
		int *a;
	public:
		Dayso()
		{
			a = new int[100];
		}
		friend istream& operator >>(istream& in, Dayso &x)
		{
			in >> x.n;
			for(int i = 0; i < x.n; ++i)
			{
				in >> x.a[i];
			}
			return in;
		}
		friend ostream& operator << (ostream &out, Dayso x)
		{
			cout << "Day so nguyen:\n";
			for(int i = 0; i < x.n; ++i)
			{
				out << x.a[i] <<" ";
			}
			return out;
		}
		int *getMang()
		{
			return a;	
		}
		int getN()
		{
			return n;
		}
};
bool checkCp(int n)
{
	int t = sqrt(n);
	return t * t == n;
}
int main()
{
	Dayso x;
	cin >> x;
	int *tmp = x.getMang();
	int cnt = 0, sum = 0;
	int cntCp = 0;
	for(int i = 0; i < x.getN(); ++i)
	{
		if (tmp[i] > 0)
		{
			sum += tmp[i];
			cnt += 1;
		}
		if (checkCp(tmp[i]))
		{
			cntCp += 1;
		}
	}
	cout << "TBC ptu duong: " <<fixed << setprecision(2)<< 1.0 * sum / cnt <<'\n';
	cout << "So phan tu la so CP la: " << cntCp <<'\n';
	return 0;
}

