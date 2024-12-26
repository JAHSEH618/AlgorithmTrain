//
//  removeDuplicate26.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/26.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) {
            return 0;
        }
        int slow = 1, fast = 1;
        while (fast < len) {
            if (nums[fast] != nums[fast - 1]) {
                nums[slow] = nums[fast];
                ++slow;
            }
            ++fast;
        }
        return slow;
    }
};

int main() {
    vector<int> nums = {0,0};
    Solution s;
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}
