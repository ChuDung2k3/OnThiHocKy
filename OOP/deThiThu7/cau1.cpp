#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Sach{
	private:
		string ma, ten, tg;
		int nam;
	public:
		Sach(){};
		void nhap()
		{
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			getline(cin, tg);
			cin >> nam;
		}
		void xuat()
		{
			cout << ma <<" " << ten << " " << tg << " " << nam;
		}
		string getTen()
		{
			return ten;
		}
		int getNam()
		{
			return nam;
		}
		
};
void search(Sach a[], int n)
{
	cout <<"Nhap ten sach can tim: ";
	string t;
	cin.ignore();
	getline(cin, t);
	for(int i = 0; i < n; ++i)
	{
		if (t == a[i].getTen())
		{
			a[i].xuat();
			cout <<'\n';
		}
	}
}
void in(Sach a[], int n)
{
	cout <<"Cac quyen sach in nam 2004:\n";
	for(int i = 0; i < n ;++i)
	{
		if (a[i].getNam() == 2004)
		{
			a[i].xuat();
			cout <<'\n';
		}
	}
}
int main()
{
	cout << "Nhap n: ";
	int n;
	cin >> n;
	Sach a[n];
	for(int i = 0; i < n; ++i)
	{
		a[i].nhap();
	}
	search(a, n);
	in(a, n);
	
}
//5
//2112BC
//Tuoi tho du doi
//Chu Van Dung
//2010
//2112BC
//Vi ban xung dang
//Chu Van Dung
//2004
//2112BC
//Bo Gia
//Chu Van Dung
//2003
//2112BC
//wjsdfsd sdf
//Chu Van Dung
//2004
//2112BC
//Tuoi tho du doi2
//Chu Van Dung
//2001
