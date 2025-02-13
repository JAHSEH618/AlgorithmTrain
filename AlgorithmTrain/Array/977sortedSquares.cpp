//
//  977sortedSquares.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2025/2/13.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = (int) nums.size();
        vector<int> res(n);
        int left = 0;
        int right = n - 1;
        int pos = n - 1;
        while(left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                res[pos--] = nums[left] * nums[left];
                left ++;
            } else {
                res[pos--] = nums[right] * nums[right];
                right --;
            }
        }
        return res;
    }
};

//int main() {
//    vector<int> nums = {-7,-3,2,3,11};
//    Solution s;
//    vector<int> res = s.sortedSquares(nums);
//    for (int i = 0; i < res.size(); i++) {
//        cout << res[i] << "\t";
//    }
//    cout << endl;
//    return 0;
//}
