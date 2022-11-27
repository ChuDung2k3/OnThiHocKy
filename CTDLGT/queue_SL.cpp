#include<bits/stdc++.h>

using namespace std;

template<class T>
struct node{
	T data;
	node *next;
};

template<class T>
node<T> *makeNode(T x)
{
	node<T>*newNode = new node<T>();
	newNode ->data = x;
	newNode->next = NULL;
	return newNode;
}
template<class T>
void push(node<T> *&queue, T x)
{
	node<T>*newNode = makeNode(x);
	if (queue == NULL)
	{
		queue = newNode; return;
	}
	node<T> *tmp = queue;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

template<class T>
void pop(node<T> *&queue)
{
	if (queue == NULL) return;
	node<T> *tmp = queue;
	queue = queue->next;
	delete tmp;
}
template<class T>
int size(node<T> *queue)
{
	int cnt = 0;
	while(queue != NULL)
	{
		queue = queue->next;
		++cnt;
	}
	return cnt;
}

template<class T>
bool empty(node<T> *queue)
{
	return queue == NULL;
}
template<class T>
T front(node<T> *queue)
{
	return queue->data;
}
template<class T>
void duyet(node<T> *queue)
{
	while(queue != NULL)
	{
		cout << queue->data <<' ';
		queue = queue->next;
	}
}

int main()
{
	node<string> *queue = NULL;
	string s; cin >> s;
	push(queue,s);
	cout << front(queue);
	duyet(queue);
}
