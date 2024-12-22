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
        vector<int> res = {-1, -1};
        int left = leftBorder(nums, target);
        int right = rightBorder(nums, target);
        if (left == -2 || right == -2) {
            res = {-1, -1};
        }
        if (right - left > 1) {
            res = {left + 1, right - 1};
        }
        return res;
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
        int mid;
        int left = 0;
        int right =(int) nums.size() - 1;
        while (left <= right) {
            mid = left + ((right - left) / 2);
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
                leftBorder = right;
            }
        }
        return leftBorder;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 2, 3, 5};
    int target = 2;
    Solution s;
    cout << s.searchRange(nums, target)[0] << "\t" << s.searchRange(nums, target)[1] << endl;
    return 0;
}
