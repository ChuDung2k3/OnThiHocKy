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
		void nhap(){
			cout << "Nhap ma: ";
			cin >> ma;
			cin.ignore();
			cout << "Nhap ten: ";
			getline(cin, ten);
			cout << "Nhap xuat xu: ";
			getline(cin, xx);
			cout << "Nhap loai hang: ";
			cin >> loai;
			cout << "Nhap so luong: ";
			cin >> sl;
		}
		void xuat()
		{
			cout << ma << " " << ten <<" " << xx << " " << loai << " " <<sl;
		}
		int getLoai(){
			return loai;
		}
		int getSl()
		{
			return sl;
		}
};
class DIENTU : public QLH{
	private:
		int tgbh;
	public:
		void nhap()
		{
			QLH::nhap();
			cout << "Nhap thoi gian bao hanh: ";
			cin >> tgbh;
		}
		void xuat()
		{
			QLH::xuat();
			cout << " " << tgbh;
		}
		int getTgbh(){return tgbh;}
		
		
};
void find_Max(DIENTU a[], int n)
{
	int mx = 0;
	for(int i = 0; i < n; ++i)
	{
		mx = max(a[i].getTgbh(), mx);
	}
	cout << "Hang dien tu co thoi gian bao hanh lau nhat la:\n";
	for(int i = 0; i < n; ++i)
	{
		if (a[i].getTgbh() == mx)
		{
			a[i].xuat();
			cout <<'\n';
		}
	}
}
void thongKe(DIENTU a[], int n)
{
	int h1 = 0, h2 = 0, h3 = 0;
	for(int i = 0; i < n; ++i)
	{
		if (a[i].getLoai() == 1 && a[i].getTgbh() >= 12)
		{
			h1 += a[i].getSl();
		}
		if (a[i].getLoai() == 2 && a[i].getTgbh() >= 12)
		{
			h2 += a[i].getSl();
		}
		if (a[i].getLoai() == 3 && a[i].getTgbh() >= 12)
		{
			h3 += a[i].getSl();
		}
	}
	cout << "Tong so luong hang 1 co tgbh >= 12: " << h1 <<'\n';
	cout << "Tong so luong hang 2 co tgbh >= 12: " << h2 <<'\n';
	cout << "Tong so luong hang 3 co tgbh >= 12: " << h3 <<'\n';
}
int main()
{
	int n; cin >> n;
	
	DIENTU a[n];
	for(int i = 0; i < n ;++i)
	{
		a[i].nhap();
	}
	thongKe(a, n);
	find_Max(a, n);
	return 0;
}
//3
//122
//Laptop Dell
//Viet Nam
//1
//10
//12
//124
//Laptop Gaming
//Trung Quoc
//3
//10
//10
//122
//Laptop Dell
//Viet Nam
//1
//10
//15


