#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef unsigned long int ulint;
typedef long int lint;


void find_subarray() {
	int n;
	cin>>n;

	lint current_sum = 0;
	lint best_sum = 0;
	lint p_sum = 0;

	for(lint i = 0; i < n; i++) {
		lint val;
		cin>>val;

		if(i == 0)
		{
			current_sum = val;
			best_sum = val;
			p_sum = val;
		}
		else {
			lint t = current_sum + val;

			if(val > current_sum && current_sum < 0)
				current_sum = val;
			else
				current_sum = t;

			if(current_sum > best_sum)
				best_sum = current_sum;

			//cout<<current_sum<<endl;
			if(p_sum < 0 && val > p_sum)
				p_sum = val;
			else if(val > 0)
				p_sum += val;
		}
	}

	cout<<best_sum<< " " << p_sum <<endl;
}

int main() {
	int n = 0;
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		find_subarray();
	}

	return 0;
}
