#include<bits/stdc++.h>
using namespace std;
class nhanvien
{
	private : 
	    string ma , hoten , quequan ;
	    int hesoluong;
	public :
		friend istream& operator >> (istream& in , nhanvien &x)
		{
			in >> x.ma;
			in.ignore();
			getline(in , x.hoten);
			getline(in , x.quequan);
			in >> x.hesoluong;
			return in;
		}
		friend ostream& operator << (ostream& out , nhanvien x)
		{
			out << x.ma << " " << x.hoten << " " << x.quequan << " " << x.hesoluong;
			return out;
		}
		string getHoTen()
		{
			return this->hoten;
		}
		string getMa()
		{
			return this->ma;
		}
		string setHoTen(string s)
		{
			this->hoten = s;
		}
		string setQueQuan(string s)
		{
			this->quequan = s;
		}
};
void themnhanvien(vector<nhanvien>&v)
{
	cout << "Nhap nhan vien can them : " << endl;
	nhanvien x ; cin >> x;
	v.push_back(x);
}
void xoanhanvien(vector<nhanvien>&v)
{
	cout << "Nhap ten nhan vien can xoa : ";
	cin.ignore();
	string s ; getline(cin , s);
	int cnt = 0;
	for(nhanvien x : v)
	{
		if(s == x.getHoTen())
		{
			cout << "Da xoa!" <<endl;
			v.erase(v.begin() + cnt);
			return;
		}
		++cnt;
	}
}
void update(vector<nhanvien>&v)
{
	cout << "Nhap ma nhan vien can sua : " << endl;
	string s ; cin >> s;
	for(nhanvien x : v)
	{
		if(x.getMa() == )
	}
}
int main()
{
	vector<nhanvien>v;
	themnhanvien(v);
	themnhanvien(v);
	xoanhanvien(v);
}
//cntt3
//Hoang Phuong
//Thanh hoa
//33
//cntt5
//Chu Dung
//Thanh Hoa
//44
