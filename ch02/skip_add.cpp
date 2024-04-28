//
// Created by fuguo on 2024-02-26.
//

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;                      // make definitions visible

void readInts(vector<int> *p) {
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    while (is >> num) (*p).push_back(num);
}

int main() {

    vector<int> buffer;
    int N, Q;
    readInts(&buffer);
    N = buffer.at(0);
    Q = buffer.at(1);

    buffer.clear();
    readInts(&buffer);
//    int len = buffer.size();

    int nums[N];
    std::copy(buffer.begin(), buffer.end(), nums);
    for (int i = 1; i < N; i++) {
        nums[i] += nums[i - 1];
    }

    for (int i = 0; i < Q; i++) {

        buffer.clear();
        readInts(&buffer);
        int a = buffer.at(0) - 1;
        int b = buffer.at(1) - 1;
        if (a == 0) {
            cout << nums[N - 1] - nums[b];
        } else {
            cout << nums[N - 1] - nums[b] + nums[a - 1];
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
