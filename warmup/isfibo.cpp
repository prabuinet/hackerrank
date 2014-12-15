#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long int ulint;

bool isfibo(ulint number) {
	ulint n1 = 0;
	ulint n2 = 1;
	if(number == 0 || number == 1) 
		return true;
	while(true) {
		ulint t = n2;
		n2 = n1 + n2;
		n1 = t;
		if(number == n2) {
			return true;
		} 
		if (n2 > number)
			return false;
	}
}

int main() {
	int nr_cases;
	cin >> nr_cases;
	
	for(int i = 0; i < nr_cases; i++) {
		ulint number;
		cin >> number;
		cout << (isfibo(number) ? "IsFibo" : "IsNotFibo") << endl;
	}
  
	return 0;
}