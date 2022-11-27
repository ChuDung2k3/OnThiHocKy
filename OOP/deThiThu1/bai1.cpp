#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Diem{
	private:
		int x, y;
	public:
		friend istream& operator >> (istream &in, Diem &p)
		{
			in >> p.x >> p.y;
			return in;
		}
		friend ostream& operator << (ostream &out, Diem p)
		{
			out << p.x << " " << p.y;
			return out;
		}
		float tinh()
		{
			return sqrt(abs(x * x + y * y));
		}
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>> n;
    Diem a[n];
    float sum = 0;
    for(Diem &t : a)
    {
    	cin >> t;
    	sum += t.tinh();
	}
	for(Diem t : a)
	{
		cout <<t <<'\n';
	}
	float kc = a[0].tinh();
	for(int i = 0; i < n; ++i)
	{
		if (a[i].tinh() < kc)
		{
			kc = a[i].tinh();
		}
	}
	cout << "Tong kc: " << sum <<'\n';
	cout << "KC min: " << kc <<'\n';
	return 0;
}

