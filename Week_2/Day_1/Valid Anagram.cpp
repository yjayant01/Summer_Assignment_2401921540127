#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(t.begin(),t.end(),t.begin(),::tolower);
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        t.erase(remove(t.begin(),t.end(),' '),t.end());
        vector <int> count(26,0);

        for (int i:s)
        {
            count [i-'a']++;
        }
        for(int i:t)
        {
            count [i-'a']--;
        }
        for(int x:count)
        {
            if(x!=0)
            {
                return false;
            }
        }
        return true;
    }
};