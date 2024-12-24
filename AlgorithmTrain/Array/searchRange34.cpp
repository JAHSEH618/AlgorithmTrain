//
//  searchRange34.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/22.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = leftBorder(nums, target);
        int right = rightBorder(nums, target);
        if (left == -2 || right == -2) {
            return {-1, -1};
        }
        if (right - left > 1) {
            return {left + 1, right - 1};
        }
        return {-1, -1};
    }
    
private:
    int rightBorder(vector<int>& nums, int target) {
        int rightBorder = -2;
        int mid;
        int left = 0;
        int right =(int) nums.size() - 1;
        while (left <= right) {
            mid = left + ((right - left) / 2);
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
                rightBorder = left;
            }
        }
        return rightBorder;
    }
    
private:
    int leftBorder(vector<int>& nums, int target) {
        int leftBorder = -2;
        int left = 0;
        int right = (int) nums.size() - 1;
        int mid;
        while(left <= right) {
            mid = left + ((right- left) / 2);
            if (nums[mid] >= target) {
                right = mid - 1;
                leftBorder = right;
            } else {
                left = mid + 1;
            }
        }
        return leftBorder;
    }
};

//int main() {
//    vector<int> nums = {2, 2};
//    int target = 3;
//    Solution s;
//    cout << s.searchRange(nums, target)[0] << "\t" << s.searchRange(nums, target)[1] << endl;
//    return 0;
//}
