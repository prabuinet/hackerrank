#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef unsigned long int ulint;

int deletes(string str) {
	int dels = 0;

	for(int i = 1; i < str.size(); i++) {
		if(str[i] == str[i - 1])
			dels++;
	}

	return dels;
}

int main() {
	int nr_cases;
	cin >> nr_cases;
	
	for(int i = 0; i < nr_cases; i++) {
		string str;
		cin>>str;
		cout << deletes(str) << endl;
	}
  
	return 0;
}