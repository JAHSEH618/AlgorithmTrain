//
//  removeElement.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/25.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val) {
                nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};

//int main() {
//    vector<int> arr = {0, 1, 2, 3, 5, 2, 3};
//    int val = 3;
//    Solution s;
//    cout << s.removeElement(arr, val) << endl;
//    return 0;
//};
