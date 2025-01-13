//
//  moveZeros.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2025/1/13.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        for (fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != 0) {
                nums[slow] = nums[fast];
                slow ++;
            }
        }
        for (; slow < nums.size(); slow++) {
            nums[slow] = 0;
        }
    }
};

//int main() {
//    vector<int> nums = {0};
//    Solution s;
//    s.moveZeroes(nums);
//    cout << endl;
//    for (int i = 0; i < nums.size(); i++) {
//        cout << nums[i] << "\t";
//    }
//    cout << endl;
//    return 0;
//}
