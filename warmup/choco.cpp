#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef unsigned long int ulint;


int main() {
	int n = 0;
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		int cash;
		int cost;
		int m;

		cin>>cash>>cost>>m;

		int chocs = cash / cost;
		int wrappers = chocs;

		while(wrappers >= m) {
			int newchocs = (wrappers / m);
			wrappers = newchocs + (wrappers % m);
			chocs += newchocs;
		}

		cout<<chocs<<endl;
	}

	return 0;
}
