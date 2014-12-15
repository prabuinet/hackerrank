#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str;	

	cin>>str;

	int counts[26] = {0};

	for(int i = 0; i < str.size(); i++) {
		counts[str[i] - 97]++;
	}

	int oddCount = 0;
	for(int i = 0; i < 26; i++) {
		if(counts[i] != 0 && counts[i] % 2 > 0)
			oddCount++;
	}

	if(oddCount > 1) {
		cout<<"NO";
	} else {
		cout<<"YES";
	}

	return 0;
}
