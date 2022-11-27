#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
class Hang{
	private:
		string ma, ten;
		int sl, gia;
	public:
		void nhap()
		{
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >> sl >> gia;
		}
		void xuat()
		{
			cout << ma << " " << ten << " " << sl <<" " << gia<< " ";
		}
		string getMa()
		{
		 	return ma;
		 } 
		string getTen() 
		{
		return ten;
		}
		int getGia() 
		{
			return gia;
		}
};


class MayGiat : public Hang{
	private:
		int can;
	public:
		void nhap()
		{
			Hang::nhap();
			cin >> can;
		}
		void xuat()
		{
			Hang::xuat();
			cout << can;
		}
		int getWeight()
		{
		  return can;
		}
};

bool cmp(MayGiat x, MayGiat y)
{
	return x.getGia() < y.getGia();
}
void search(MayGiat a[], int n)
{
	cout << "Nhap ma hoac ten hang: ";
	string s;
	getline(cin, s);
	for(int i = 0; i < n; ++i)
	{
		if (a[i].getMa() == s || s.compare(a[i].getTen()) == 0)
		{
			a[i].xuat();
			cout <<'\n';
		}
	}
}
void in_6kg(MayGiat a[], int n)
{
	sort(a, a + n, cmp);
	int tmp = INT_MAX;
	for(int i = 0; i < n; ++i)
	{
		if(a[i].getWeight() >= 6 && a[i].getWeight() <= tmp)
		{
			
			a[i].xuat();
			cout <<'\n';
			tmp = a[i].getWeight();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    MayGiat a[n];
    for(int i = 0; i < n; ++i)
    {
    	a[i].nhap();
	}
	search(a, n);
	in_6kg(a, n);
	return 0;
}

