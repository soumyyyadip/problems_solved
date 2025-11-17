//Leetcode 14. Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/description/
#include<iostream>
#include<vector>
#include<climits>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int minLength = INT_MAX;
        for(const string& s: strs){
            if(s.length() < minLength) minLength = s.length();
        }

        int i=0;
        while(i<minLength){
            for(const string& s: strs){
                if(s[i]!=strs[0][i]) return strs[0].substr(0,i);
            }
            i++;
        }
        return strs[0].substr(0,i);
    }
};

