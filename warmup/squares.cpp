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
		int from;
		int to;
		cin>>from>>to;
		int count = 0;
		count = (lrint(floor(sqrt(to))) - lrint(ceil(sqrt(from)))) + 1;
		cout<<count<<endl;
	}

	return 0;
}
