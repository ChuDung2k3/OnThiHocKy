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
struct node
{
	T data;
	node *left, *right;
	node(T x)
	{
		data = x;
		left = right = NULL;	
	}	
};
template<class T>
bool find(node<T>*root, T x)
{
	if (root == NULL) return false;
	if (x == root->data) return true;
	else if (x < root->data) return find(root->left, x);
	else if return find(root->right, x);
}

template<class T>
node<T> *insert(node<T> *root, T x)
{
	if (root == NULL) return new node<T>(x);
	if (find(root, x)) return root;
	if (root->data > x)
	{
		root->left = insert(root->left, x);
	}
	else root->right = insert(root->right, x);
	return root;
}
template<class T> node<T> *search(node<T> *root)
{
    node<T> *tmp = root;
    while(tmp && tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    return tmp;
}
template<class T>
node<T> *del(node<T> *root, T x)
{
	if (root == NULL) return root;
	if (x < root->data) root->left = del(root->left, x);
	else if (x > root->data) root->right = del(root->right, x);
	else
	{
		if (root->left == NULL && root->right == NULL) return NULL;
		else if(root->left == NULL)
		{
			node<T>*tmp = root->right;
			delete root;
			return tmp;
		}
		else if (root->right == NULL)
		{
			node<T> *tmp = root->left;
			delete root;
			return tmp;
		}
		node<T> *tmp = search(root->right);
		root->data = tmp->data;
		root->right = del(root->right, root->data);
	}
	return root;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

