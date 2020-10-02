#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<char, bool> mp;
    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        for(auto i : J) {
            if(!mp.count(i))    mp[i] = true;
        }
        for(auto i : S) {
            if(mp[i])   cnt++;
        }
        return cnt;
    }
};