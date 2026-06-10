#include <string>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n= s.length();
        for(int i=n/2 ;i>=1;i--)
        {
            if(n%i==0)
            {
                string substring = s.substr(0,i);
                string newstr="";
                for(int j=1;j<=n/i;j++)
                {
                    newstr+=substring;
                }
                if(s==newstr) return true;
            }
        }
        return false;
    }
};