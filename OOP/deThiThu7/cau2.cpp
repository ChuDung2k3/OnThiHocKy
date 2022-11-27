#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Nguoi{
	private:
		string ten;
		int tuoi;
	public:
		void nhap()
		{
			cin.ignore();
			getline(cin, ten);
			cin >> tuoi;
		}
		void xuat()
		{
			cout << ten <<" " << tuoi;
		}
};
class Nhanvien : public Nguoi{
	private:
		int hs, loai;
	public:
		void nhap()
		{
			Nguoi::nhap();
			cin >> hs >> loai;
		}
		void xuat()
		{
			Nguoi::xuat();
			cout <<" " << hs <<" " << loai;
		}
		int getHs()
		{
			return hs;	
		}
		int getLoai()
		{
			return loai;
		}
};
const int lcb = 150000;
int luong2[] = {0, 100000, 200000, 300000};
void tinh(Nhanvien a[], int n)
{
	Nhanvien x;
	int luong[n] = {0};
	int mx = 0;
	for(int i = 0; i < n; ++i)
	{
		luong[i] = a[i].getHs() * lcb + luong2[a[i].getLoai()];
		mx = max(luong[i], mx);
	}
	cout << "Nhan vien linh luong cao nhat "<<"( " << mx <<") " << "la:\n"; 
	for(int i = 0; i < n ; ++i)
	{
		if (luong[i] == mx)
		{
			a[i].xuat();
			cout << '\n';
		}
	}
}
int main()
{
	int n; cin >> n;
	Nhanvien a[n];
	for(int i = 0; i< n; ++i)
	{
		a[i].nhap();
	}
	tinh(a,  n);
	return 0;
}

//5
//Chu Van Dung
//18
//12
//1
//Chu Van Dung1
//18
//15
//2
//Chu Van Dung2
//18
//9
//3
//Chu Van Dung3
//19
//10
//1
//Chu Van Dung4
//15
//15
//2
