#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        do {
            vector<int> tmp;
            for(int i = 0; i < nums.size(); ++i) {
                tmp.push_back(nums[i]);
            }
            ans.push_back(tmp);
        } while(next_permutation(nums.begin(), nums.end()));
        return ans;
    }
};