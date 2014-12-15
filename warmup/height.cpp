#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long int ulint;

int height(ulint cycles) {
	int height = 1;
	for(int i = 1; i <= cycles; i++) {
		if(i % 2 == 0)
			height += 1;
		else
			height *= 2;
	}

	return height;
}

int main() {
	int nr_cases;
	cin >> nr_cases;
	
	for(int i = 0; i < nr_cases; i++) {
		ulint number;
		cin >> number;
		cout << height(number) << endl;
	}
  
	return 0;
}