//Leetcode 20. valid parentheses 

#include<stack>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(const char& c : s){
            if( c=='(') st.push(')');
            else if(c=='{') st.push('}');
            else if(c=='[') st.push(']');
            else if(st.empty() || pop(st)!=c) return false;  
        }
        return st.empty();

    }

    char pop(stack<char>& st){
        const char c = st.top();
        st.pop();
        return c;
    }
};