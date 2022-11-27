#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

template<class T, class Y>
class CPair {
	private:
		T a;
		Y b;
	public:
		CPair(){
			
		}
		CPair(T a1, Y b1)
		{
			a = a1; b = b1;
		}
		T getMax();
};

template <class T, class Y>
T CPair<T, Y> ::getMax()
{
	return (a > b) ? a : b;
}

int main()
{
	CPair<int, float> p1(23,90.5);
	cout << p1.getMax();
	return 0;
}
