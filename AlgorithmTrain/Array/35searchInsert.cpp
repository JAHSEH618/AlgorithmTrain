//
//  searchInsert35.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/22.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = -1;
        int middle;
        int left = 0;
        int right =(int) nums.size() - 1;
        while (left <= right) {
            middle = left + ((right - left) / 2);
            if (nums[middle] > target) {
                right = middle - 1;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                return middle;
            }
            pos = right + 1;
        }
        return pos;
    }
};

//int main() {
//    vector<int> nums = {1,3,5,6};
//    int target = 2;
//    Solution s;
//    cout << s.searchInsert(nums, target) << endl;
//    return 0;
//};
