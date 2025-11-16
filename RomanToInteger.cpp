//13. Roman to Integer
//https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        vector<int> val(128);
        
        int ans =0;

        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        for(int i=0; i+1<s.length(); i++){
            if(val[s[i]]< val[s[i+1]]) ans-=val[s[i]];
            else ans+= val[s[i]];
        }

        return ans+ val[s.back()];
    }
};