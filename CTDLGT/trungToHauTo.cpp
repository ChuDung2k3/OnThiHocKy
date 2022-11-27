#include<bits/stdc++.h>

using namespace std;

int uutien(char c)
{
	if (c == '^') return 3;
	else if (c == '*'|| c == '/') return 2;
	else if (c == '+' || c == '-') return 1;
	else return 0; 
}

void solve(string s)
{
	stack<char>st;
	string res = "";
	for(int i = 0; i < s.size(); ++i)
	{
		if(isalpha(s[i])) res += s[i];
		else if (s[i] =='(') st.push(s[i]);
		else if (s[i] == ')')
		{
			while(!st.empty() && st.top() != '(')
			{
				res += st.top();
				st.pop();
			}
			st.pop(); // soa dau'(' tuong uong
		}
		else
		{
			while(!st.empty() && uutien(s[i]) <= uutien(st.top()))
			{
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty())
	{
		res += st.top();
		st.pop();
	}
	cout <<res ;
}
int main()
{
	string s; cin >> s;
	solve(s);
}
