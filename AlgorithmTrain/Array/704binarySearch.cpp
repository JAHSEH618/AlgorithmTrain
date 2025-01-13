//
//  binarySearch704.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/12.
//

#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int pos = 0;
        int left = 0;
        int right = (int) nums.size() - 1;
        while (left <= right) {
            pos = left + ((right - left) / 2);
            if (nums[pos] > target) {
                right = pos - 1;
            } else if (nums[pos] < target) {
                left = pos + 1;
            } else {
                return pos;
            }
        }
        return -1;
    };
};

//int main() {
//    vector<int> v1 = {1, 2, 5, 6, 9, 12, 24};
//    int target = 9;
//    Solution sol;
//    cout << sol.binarySearch(v1, target) << endl;
//    return 0;
//};
