#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Dathuc
{
	private:
		int n;
		int *hs;
	public:
		Dathuc()
		{
			hs = new int[100];	
		}
		~Dathuc()
		{
			delete []hs;
		}
		void nhap()
		{
			cin >> n;
			for(int i = 0; i <= n; ++i)
			{
				cin >> hs[i];
			}
		}
		void in()
		{
			cout << "He so cua da thuc la:\n";
			for(int i = 0; i <= n; ++i)
			{
				cout <<hs[i] <<" ";
			}
			cout <<'\n';
		}
		friend int tinh(Dathuc a, int x)
		{
			int sum = 0;
			for(int i = 0; i <= a.n; ++i)
			{
				sum += a.hs[i] * pow(x, a.n - i);
			}
			return sum;
		}
};
int main()
{
	Dathuc a;
	a.nhap();
	a.in();
	cout <<"Nhap d1, d2: ";
	int d1, d2; cin >> d1 >> d2;
	int p1 =  tinh(a, d1);
	int p2 =  tinh(a, d2);
	float s = sqrt(1.0 * p1 + 1.0 * p2);
	cout << s;
	return 0;
}

