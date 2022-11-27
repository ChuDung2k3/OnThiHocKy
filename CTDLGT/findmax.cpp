#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

template <class T>
T find_Max(T a, T b)
{
	return (a > b) ? a : b;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << find_Max(a, b);
    return 0;
}

