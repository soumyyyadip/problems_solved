//28. Find the Index of the First Occurrence in a String


#include<iostream>
using namespace std;

class Solution {
 public:
  int strStr(string haystack, string needle) {
    const int m = haystack.length();
    const int n = needle.length();

    for (int i = 0; i < m - n + 1; i++) //+1 becuase the last valid index is m-n so if we want to include that index in loop we have to do m-n +1 
      if (haystack.substr(i, n) == needle)
        return i;

    return -1;
  }
};