#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int find_digits(uint number) {
	int times = 0;
	uint temp = number;

	while(temp > 0) {
		int digit = temp % 10;
		if(digit != 0 && number % digit == 0) {
			times++;
		}
		temp = temp / 10;
	}

	return times;
}

int main() {
  int nr_cases;
  cin>>nr_cases;
  for(int i=0; i < nr_cases; i++) {
  	uint number;
  	cin>>number;
  	cout << find_digits(number) << endl;
  }
  
  return 0;
}

