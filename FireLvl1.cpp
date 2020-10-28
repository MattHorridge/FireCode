#include <map>
using namespace std;

/*
Write a method that 
returns a number that appears only once in an array.
Assume the array will surely have a unique value. 
If the array is empty return 0.
*/

class FireLvl1 {
	
public:
	int mainfunction(int arr[], int sz) {

		if (sz == 0) {
			return 0;
		}
		//value, count
		map<int, int> countmap;
		int result;

		for (int i = 0; i < sz; i++) {
			if (countmap.count(arr[i])) {
				countmap[arr[i]]++;
			}
			else {
				countmap.insert({ arr[i], 1 });
			}
		}

		std::map<int, int>::iterator it = countmap.begin();

		while (it != countmap.end()) {

			
			result = it->second;
			if (result == 1) {
				return it->first;
			}
			it++;
		}


		return 0;
	}


};


