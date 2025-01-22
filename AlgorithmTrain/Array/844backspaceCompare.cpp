//
//  backspaceCompare844.cpp
//  AlgorithmTrain
//
//  Created by Kaiyuan Liu on 2025/1/13.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    string editString(string s) {
        int sf = 0, ss = 0;
        while(sf < s.length()) {
            while(sf < s.length() && s[sf] != '#') {
                s[ss] = s[sf];
                ss ++;
                sf ++;
            }
            if (sf < s.length() && s[sf] == '#') {
                if (ss > 0)
                    ss --;
            }
            sf ++;
        }
        return s.substr(0, ss);
    }
    
    bool backspaceCompare(string s, string t) {
        bool res = false;
        if (s == t) {
            return true;
        } else {
            s = editString(s);
            t = editString(t);
            res = s == t;
            }
        return res;
    }
    
    
};

//int main() {
//    string s1 = "ab##";
//    Solution s;
//    cout << s.editString(s1) << endl;
//    return 0;
//}
