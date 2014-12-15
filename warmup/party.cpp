#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef unsigned long int ulint;


int main() {
	long n = 0;
	cin>>n;

	for(long i = 0; i < n; i++)
	{
		ulint x;
		cin>>x;
		ulint result = (x / 2) * (x / 2) + ((x % 2) ? (x / 2) : 0);
		cout<<result<<endl;
	}

	return 0;
}
