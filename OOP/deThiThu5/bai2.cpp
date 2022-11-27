#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class QLH
{
	private:
		string ma, ten, xx;
		int loai, sl;
	public:
		void nhap()
		{
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			getline(cin, xx);
			cin >> loai >> sl;
		}
		void xuat()
		{
			cout << ma << " " << ten << " " << xx << " " << loai <<" " <<sl;
		}
		int getLoai(){
			return loai;
		}
		int getSl()
		{
			return sl;
		}
		string getTen()
		{
			return ten;
		}
		
		
};
class DIENTU : public QLH{
	private:
		int tgbh;
	public:
		void nhap()
		{
			QLH::nhap();
			cin >> tgbh;
		}
		void xuat()
		{
			QLH::xuat();
			cout <<" " << tgbh;
		}
		int getTgbh()
		{
			return tgbh;
		}
};
void thongKe(DIENTU a[], int n)
{
	int l1 = 0 , l2 = 0, l3 = 0;
	for(int i = 0; i < n; ++i)
	{
		if(a[i].getTgbh() >= 12)
		{
			if(a[i].getLoai() == 1)
			{
				l1 += a[i].getSl();
			}
			else if(a[i].getLoai() == 2)
			{
				l2 += a[i].getSl();
			}
			else if(a[i].getLoai() == 3)
			{
				l3 += a[i].getSl();
			}
		}
	}
	cout << "So luong h1 la: " << l1 <<'\n';
	cout << "So luong h2 la: " << l2 <<'\n';
	cout << "So luong h3 la: " << l3 <<'\n';
}
void search(DIENTU a[], int n)
{
	cout << "Ten can tim: ";
	cin.ignore();
	string t;
	getline(cin, t);
	for(int i = 0; i < n; ++i)
	{
		if (a[i].getTen() == t)
		{
			a[i].xuat();
			cout <<'\n';
		}
	}
}
int main()
{
	int n; cin >> n;
	DIENTU a[n];
	for(int i = 0; i < n; ++i)
	{
		a[i].nhap();	
	}
	thongKe(a, n);
	search(a, n);
	return 0;
}
//3
//2121
//LapTop Gaming
//Viet Nam
//1
//15
//1
//2121
//LapTop Dell
//Thai Lan
//1
//15
//12
//2121
//LapTop Gaming
//Trung Quoc
//2
//15
//16

