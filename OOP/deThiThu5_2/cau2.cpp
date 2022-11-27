#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Hang
{
	private:
		string ma, ten;
		int sl;
		float gia;
	public:
		Hang(){
			
		}
		void nhap()
		{
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >>sl >> gia;
		}
		void xuat()
		{
			cout << ma << " " << ten << " " <<sl <<" " << gia;
		}
};

class Maytinh : public Hang{
	private:
		string hdh;
		float trongluong, gia;
	public:
		void nhap()
		{
			Hang::nhap();
			cin >> hdh >> trongluong >> gia;
		}
		void xuat()
		{
			Hang::xuat();
			cout <<" " << hdh << " " << trongluong << " " << gia;
		}
		float getGia(){
			return gia;
		}
		float getTrongluong()
		{
			return trongluong;
		}
		string getHdh()
		{
			return hdh;
		}
};
void in(Maytinh a[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		if (a[i].getHdh() == "Win" && a[i].getTrongluong() <= 2.5)
		{
			a[i].xuat();
			cout << '\n';			
		}
	}
}
void search(Maytinh a[], int n)
{
	float min1 = 1.0*INT_MAX;
	for(int i = 0; i < n; ++i)
	{
		if (a[i].getHdh() == "Mac")
		{
			min1 = min(a[i].getGia(), min1);
		}
	}
	for(int i = 0; i < n; ++i)
	{
		if(a[i].getHdh() == "Mac")
		{
			if (min1 == a[i].getGia())
			{
				a[i].xuat();
				cout <<'\n';
			}
		}
	}
}

int main()
{
	int n; cin >> n;
	Maytinh a[n];
	for(int i = 0; i < n; ++i)
	{
		a[i].nhap();
	}
	in(a, n);
	search(a, n);
}
//5
//2123
//May tinh 
//13
//15
//Win
//2.5
//15000000
//2123
//May tinh 
//13
//15
//Mac
//4.5
//17000000
//2123
//May tinh 
//13
//15
//Mac
//2.5
//16000000
//2123
//May tinh 
//13
//15
//Win
//1.5
//15000000
//2123
//May tinh 
//13
//15
//Mac
//3.5
//15000000
