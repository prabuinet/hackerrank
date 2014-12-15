#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int nr_people;
	int nr_topics;

	cin>>nr_people;
	cin>>nr_topics;
	
	std::vector<string> people_topics;

	for(int i = 0; i < nr_people; i++) {
		string str;
		cin>>str;
		people_topics.push_back(str);
	}

	int max = 0;
	int nr_people_on_max = 0;

	for(int i = 0; i < nr_people; i++) {
		for(int j = i + 1; j < nr_people; j++) {
			string str1 = people_topics[i];
			string str2 = people_topics[j];
			int count = 0;
			for(int k = 0; k < str1.size(); k++) {
				if(str1[k] == '1' || str2[k] == '1')
					count++;
			}
			
			if(count > 0) {
				if(max == count) {
					nr_people_on_max++;	
				} else if(count > max) {
					nr_people_on_max = 1;
					max = count;
				}
			}

		}
	}

	cout<<max<<endl<<nr_people_on_max;

	return 0;
}
