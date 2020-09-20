#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int length = nums.size();
        int max = 1<<length;
        vector<vector<int>> ans;
        vector<int> tmp;
        for(int i = 0; i < max; ++i) {
            tmp.clear();
            for(int j = 0; j < length; ++j) {
                if(i&(1<<j)) {
                    tmp.push_back(nums[j]);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};