//
// Created by yichenliu on 2025/6/13.
//

#include "PlusOne.h"
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto needNew = false;
        for (int i = digits.size() - 1; i >= 0 ; i--) {
            if (digits[i] + 1 == 10){
                digits[i] = 0;

                if (i == 0){
                    needNew = true;
                }
            } else {
                digits[i] += 1;
                break;
            }
        }

        if (!needNew) {
            return digits;
        } else {
            vector<int> result(digits.size() + 1);
            std::copy(digits.begin(), digits.end(), result.begin() + 1);
            result[0] = 1;
            return result;
        }
    }
};