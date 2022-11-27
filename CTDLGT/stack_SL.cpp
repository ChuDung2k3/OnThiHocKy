#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
template<class T>
struct node{
	T data;
	node *next;
};
template<class T>
node<T> *makeNode(T x)
{
	node<T> *newNode = new node<T>();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

template<class T>
void push(node<T> *&top, T x)
{
	node<T> *newNode = makeNode(x);
	newNode->next = top;
	top = newNode;
}

template<class T>
void pop(node<T> *&top)
{
	if(top != NULL)
	{
		node<T> *tmp = top;
		top = top->next;
		delete tmp;
	}
	
}
template<class T>
T Top(node<T> *top)
{
	if (top != NULL) return top->data;
}

template<class T>
int size(node<T> * top)
{
	int cnt = 0;
	while(top != NULL)
	{
		top = top->next;
		++cnt;
	}
	return cnt;
}
template<class T>
bool isEmpty(node<T> *top)
{
	return top == NULL;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node<string> *st = NULL;
    string s; 
    getline(cin, s);
    push(st, s);
    cout << Top(st);
    pop(st);
	cout << isEmpty(st);
	return 0;    
}

