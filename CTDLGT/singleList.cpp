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
int size(node<T> *head)
{
	int cnt = 0;
	while(head != NULL)
	{
		++cnt;
		head = head->next;
	}
	return cnt;
}
template<class T>
void duyet(node<T> *head)
{
	while(head != NULL)
	{
		cout << head->data <<' ';
		head = head->next;
	}
}
template<class T>
void pushFront(node<T> *&head, T x)
{
	node<T> *newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}
template<class T>
void pushBack(node<T> *&head, T x)
{
	node<T> *newNode = makeNode(x);
	node<T> *tmp = head;
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode; 
}
template<class T>
void insert(node<T> *&head, int k, int x)
{
	int n = size(head);
	if (k < 1 || k > n + 1) return;
	if (k == 1)
	{
		pushFront(head, x);
		return;
	} 
	node<T> *tmp = head;
	for(int i = 1; i <= k -2; ++i)
	{
		tmp = tmp->next;
	}
	node<T> *newNode = makeNode(x);
	newNode->next = tmp->next;
	tmp->next = newNode;
}

template<class T>
void popFront(node<T> *&head)
{
	if (head == NULL) return;
	node<T> *tmp = head;
	head = head->next;
	delete tmp;
}
template<class T>
void popBack(node<T> *&head)
{
	if (head == NULL) return;
	node<T> *tmp = head;
	if (tmp->next == NULL)
	{
		head = NULL;
		delete tmp;
		return;
	}
	while(tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	node<T> *last = tmp->next;
	tmp->next = NULL;
	delete last;
}

template<class T>
void erase(node<T> *&head, int k)
{
	int n = size(head);
	if (k < 1 || k > n) return;
	if (k == 1)
	{
	 	popFront(head);
		return;
	} 
	node<T> *tmp = head;
	for(int i = 1; i <= k - 2; ++i)
	{
		tmp = tmp->next;
	}
	node<T> *kth = tmp->next; // Node thu k;
	tmp->next = kth->next;
	delete kth;
}

class sv{
	private:
		string ten;
		int tuoi;
	public:
		friend istream& operator >> (istream& in, sv &a)
		{
			getline(in, a.ten);
			in >> a.tuoi;
			return in;
		}
		friend ostream& operator << (ostream& out, sv a)
		{
			out << a.ten <<" " <<a.tuoi;
		}
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	node<sv> *head = NULL;
	sv x; cin >> x;
	pushFront(head, x);
	duyet(head);
}

