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
	int m = 0;
	cin>>n>>m;

	/*
	double jars[n];
	for(int i = 0; i < n; i++)
		jars[i] = 0;
	
	for(int i = 0; i < m; i++)
	{
		double a, b, k;
		cin>>a>>b>>k;
		for(int j = a - 1; j < b; j++) {
			jars[j] += k;
		}
	}
	
	double sum = 0;
	for(int i = 0; i < n; i++) {
		sum+=jars[i];
	}
	*/

	ulint sum = 0;
	for(int i = 0; i < m; i++)
	{
		ulint a, b, k;
		cin>>a>>b>>k;
		sum += (k * (b - a + 1));
	}

	ulint avg = sum / n;
	cout<<avg;

	return 0;
}
