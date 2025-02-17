//
//  209minSubArrayLen.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2025/2/18.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT32_MAX;
        int startIndex = 0;
        int i = startIndex;
        int sum = 0;
        for (i = 0; i < nums.size();) {
            while(sum < target && i < nums.size()){
                sum += nums[i];
                i++;
            }
            while (sum >= target) {
                sum -= nums[startIndex];
                startIndex ++;
                minLen = minLen < i - startIndex + 1 ? minLen : i - startIndex + 1;
            }
        }
        return minLen == INT32_MAX ? 0 : minLen;
    }
};

//int main() {
//    Solution s;
//    vector<int> nums = {5,1,3,5,10,7,4,9,2,8};
//    int target = 15;
//    cout << s.minSubArrayLen(target, nums) << endl;
//    return 0;
//}
