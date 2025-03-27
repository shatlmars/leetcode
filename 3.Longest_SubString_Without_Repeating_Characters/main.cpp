#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) 
{
    int maxLength = 0;
    unordered_set<char> Char_Set;
    for(int l = 0, r = 0; r < s.length(); r++)
    {
        if(Char_Set.count(s[r]) == 0)
        {
            Char_Set.insert(s[r]);
            maxLength = max(maxLength, r - l + 1);
        }
        else
        {
            while(Char_Set.count(s[r]))
            {
                Char_Set.erase(s[l]);
                l++;

            }
            Char_Set.insert(s[r]);
        }
    }
    return maxLength;
}

int main()
{
    string str = "abcabcbb";
    cout << lengthOfLongestSubstring(str) << endl;
    return 0;
}