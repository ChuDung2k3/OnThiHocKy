#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Toado{
	private:
		int x, y;
	public:
		void nhap()
		{
			cin >> x >> y;	
		}
		void xuat()
		{
			cout << x << " " << y;
		}
		float tinh()
		{
			return sqrt(x * x + y * y);
		}
};

class DiemMau : public Toado
{
	private:
		int mau;
	public:
		void nhap()
		{
			Toado::nhap();
			cin >> mau;	
		}
		void xuat()
		{
			Toado::xuat();
			cout << " " << mau; 
		}
		void getMau()
		{
			return this->mau;
		}
};
void tk(DiemMau a[], int n)
{
	int m1 = 0, m2 = 0, m3 = 0;
	for (DiemMau x : a)
	{
		if (x.getMau() == 1) m1 += 1;
		else if (x.getMau() == 2) m2 += 1;
		else m3 += 1;
	}
	cout << "Mau 1: " << m1 <<'\n';
	cout << "Mau 2: " << m2 <<'\n';
	cout << "Mau 3: " << m3 <<'\n';
}
void searchMax(DiemMau a[], int n)
{
	
}
int main()
{
	int n; cin >> n;
	DiemMau a[n];
	for (DiemMau &x : a)
	{
		cin >> x;	
	}  
	tk(a, n);
	return 0;
}

