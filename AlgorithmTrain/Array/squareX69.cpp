//
//  squareX69.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2024/12/24.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 || x == 0) {
            return x;
        } else {
            int res = -1;
            int left = 0;
            int right = x / 2;
            int mid = 0;
            while (left <= right) {
                mid = left + ((right - left) / 2);
                if (mid * mid > x) {
                    right = mid - 1;
                } else if (mid * mid < x) {
                    left = mid + 1;
                    res = mid;
                } else {
                    return mid;
                }
            }
            return res;
        }
    }
};

//int main() {
//    Solution s;
//    cout << s.mySqrt(1) << endl;
//}
