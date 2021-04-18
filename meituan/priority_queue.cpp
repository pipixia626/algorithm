#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

typedef struct Node {
	int id;
	int income;
	Node() {}
	Node(int id, int v, int w) {
		this->id = id;
		income = v + (w * 2);
	}
}node;

bool cmp(node x,node y) {
	if (x.income == y.income) return x.id < y.id;  //收入相等，编号从小到大
	return x.income > y.income;	//收入不相等，收入从大到小 
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<node> goods(n);

	int v = 0, w = 0;
	for (int i = 0; i < n; i++) {
		cin >> v >> w;
		goods[i] = Node(i + 1, v, w);
	}

	sort(goods.begin(), goods.end(), cmp);
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < m; i++) {
		pq.push(goods[i].id);
	}

	for (int i = 0; ; i++) {
		if (i == m) break;
		cout << pq.top() << " ";
		pq.pop();
	}

	return 0;
}