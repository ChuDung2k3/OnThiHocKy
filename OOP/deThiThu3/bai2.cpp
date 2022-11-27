#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class Xe{
	private:
		string bien;
		int weight;
	public:
		void nhap()
		{
			cin >> bien >> weight;
		}
		void xuat()
		{
			cout << bien <<" " << weight<<" "; 
		}
		int getWeight()
		{
			return weight;	
		}
		string getBien()
		{
			return bien;
		}
};
class xeBus : public Xe{
	private:
		int seat;
	public:
		void nhap()
		{
			Xe::nhap();
			cin >> seat;
		}
		void xuat()
		{
			cout << "Thong tin xe Bus: ";
			Xe::xuat();
			cout << seat;
		}
};
class xeTai : public Xe{
	private:
		int trongtai;
	public:
		void nhap()
		{
			Xe::nhap();
			cin >> trongtai;
		}
		void xuat()
		{
			cout << "Thong tin xe tai: ";
			Xe::xuat();
			cout << trongtai;
		}
		int getTaiTrong(){return trongtai;}
};

void inXeTai(xeTai a[], int m)
{
	int mx = 0;
	for(int i = 0; i < m; ++i)
	{
		if (a[i].getTaiTrong()<= 5)
		{
			mx = max(a[i].getWeight(), mx);
		}
	}
	for(int i = 0; i < m; ++i)
	{
		if (a[i].getTaiTrong()<= 5)
		{
			if(a[i].getWeight() == mx)
			{
				a[i].xuat();
				cout <<'\n';
			}
		}
	}	
}

void search(xeTai b[], xeBus a[], int n, int m)
{
	bool ok =false;
	string tmp; cin >> tmp;
	for(int i = 0; i < n; ++i)
	{
		if (tmp == a[i].getBien())
		{
			ok = true;
			a[i].xuat();
			cout <<'\n';
		}
	}
	for(int i = 0; i < m; ++i)
	{
		if (tmp == b[i].getBien())
		{
			ok = true;
			b[i].xuat();
			cout <<'\n';
		}
	}
	if (ok == false)
	{
		cout <<"Khong tim thay!!\n";
	}
}
int main()
{
	int n, m; cin >> n >> m;
	xeBus a[n];
	xeTai b[m];
	for(xeBus &x : a) x.nhap();
	for(xeTai &x : b) x.nhap();
	inXeTai(b, m);
	search(b, a, n, m);
}
//2 3
//29D-2321 23 45
//29D-9999 30 29
//30-6690 45 5
//30E-3269 49 6
//30E-6390 45 3
