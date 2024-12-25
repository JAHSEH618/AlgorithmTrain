//
//  isPerfectSquare367.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/25.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        int left = 1;
        int right = num / 2;
        bool isPS = false;
        while (left <= right) {
            int mid = left + ((right - left) / 2);
            if ((long long)mid * mid > num) {
                right = mid - 1;
            } else if ((long long)mid * mid < num) {
                left = mid + 1;
            } else {
                isPS = true;
                return isPS;
            }
        }
        return isPS;
    }
};

//int main() {
//    Solution s;
//    cout << s.isPerfectSquare(4) << endl;
//}
