#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
         if(haystack.length()<needle.length()) return -1;
         for(int i=0;i<haystack.length();i++)
         {
            int j=0;
            while(j<needle.length())
            {
                if(needle[j] != haystack[i+j])
                {
                     break;
                }
                j =j+1;
               
            }
            if(j == needle.length())
             {
                    return i;
             }
         }
         return -1;
    }
};