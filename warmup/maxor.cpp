#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long int ulint;

int maxor(int L, int R) {
	int max = 0;
	for(int i = L; i <= R; i++) {
		for(int j = L; j <= R; j++) {
			if(max < (i ^ j)) {
				max = i ^ j;
			}
		}
	}
	return max;
}

int main() {
	int L, R;
	cin>>L>>R;
	
	cout<<maxor(L, R) << endl;
  
	return 0;
}