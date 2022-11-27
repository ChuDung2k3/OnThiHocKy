#include<bits/stdc++.h>

using namespace std;

template<class T>
class Stack
{
	private:
		int n, cap;
		T *buff;
	public:
		Stack(){n = 0; cap = 0; buff = NULL;}
		~Stack() {if(buff) delete[]buff;}
		int size(){return n;}
		bool empty(){
			return n == 0;
		}
		T &top()
		{
			return buff[n - 1];
		}
		void pop()
		{
			n--;
		}
		void push(T x)
		{
			if (n == cap)
			{
				cap = cap * 2 + 1;
				T *tmp = new T[cap];
				for(int i = 0; i < n; ++i) tmp[i] = buff[i];
				if (buff) delete []buff;
				buff = tmp;
			}
			buff[n++] = x;
		}
};

int main()
{
	Stack<int> st;
	st.push(5);
	cout << st.top() <<'\n';
	cout <<st.size();
}
