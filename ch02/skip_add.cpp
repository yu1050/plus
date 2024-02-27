//
// Created by fuguo on 2024-02-26.
//

#include <iostream>
#include <sstream>

using namespace std;                      // make definitions visible
void readInts(vector<int> *p) {
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    while (is >> num) (*p).push_back(num);
}


int skipAdd(int *nums, int length, int k0, int k1) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        if (i < k0 || i > k1) {
            total += nums[i];
        }
    }
    return total;
}

int main() {
    vector<int> temp;
    vector<int> result;
    int count, round;
    readInts(&temp);
    count = temp.at(0);
    round = temp.at(1);

    temp.clear();
    readInts(&temp);

    int len = temp.size();
    int nums[len];
    std::copy(temp.begin(), temp.end(), nums);

    for (int i = 0; i < round; i++) {
        temp.clear();
        readInts(&temp);
        int k0, k1;
        k0 = temp.at(0);
        k1 = temp.at(1);

        int value = skipAdd(nums, len, k0, k1);

        result.push_back(value);
    }
    for (int i: result)
        std::cout << i << ' ';
    return 0;
}
