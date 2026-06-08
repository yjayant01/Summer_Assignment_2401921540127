#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector <int> count(26,0);
        transform(magazine.begin(),magazine.end(),magazine.begin(),::tolower);
        transform(ransomNote.begin(),ransomNote.end(),ransomNote.begin(),::tolower);

        for (int i: magazine)
        {
            count[i-'a']++;
        }
        for (int i: ransomNote)
        {
            if(count[i-'a']==0)
            {
            return false;
            }
            count [i-'a']--;
        }
        
        return true;
    }
};