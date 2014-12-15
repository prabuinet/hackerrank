#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef unsigned long int ulint;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main() {
	int nr_packs, nr_kids;	

	cin>>nr_packs;
	cin>>nr_kids;
	
	int candies[nr_packs];
	for(int i = 0; i < nr_packs; i++)
		cin>>candies[i];

	qsort(candies, nr_packs, sizeof(int), compare);

	int result = 0;

	for(int i = 0; i <= (nr_packs - nr_kids); i++) {
		int val = candies[i + nr_kids - 1] - candies[i];
		if(result == 0 || val < result)
			result = val;
	}

	cout<<result;
	return 0;
}
