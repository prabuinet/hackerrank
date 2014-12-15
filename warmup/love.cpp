#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef unsigned long int ulint;

int changes(string str) {
	int ops = 0;

	int i = 0;
	int j = str.size() - 1;

	while(i < j) {
		ops += abs(str[i] - str[j]);
		i++;
		j--;
	}

	return ops;
}

int main() {
	int nr_cases;
	cin >> nr_cases;
	
	for(int i = 0; i < nr_cases; i++) {
		string str;
		cin>>str;
		cout << changes(str) << endl;
	}
  
	return 0;
}
