#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {5, 3, 4, 2, 5, 1, 2};
    map<int, int> frequencyMap;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        frequencyMap[arr[i]]++; // Use arr[i] as the key
    }

    map<int, int>::iterator itr;
    for (itr = frequencyMap.begin(); itr != frequencyMap.end(); itr++) {
        if (itr->second >= 2) {
            cout << itr->first << " ";
        }
    }
    return 0;
}
