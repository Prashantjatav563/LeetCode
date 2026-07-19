// 438. Find All Anagrams in a String
// Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

// Example 1:
// Input: s = "cbaebabacd", p = "abc"
// Output: [0,6]
// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".

// Example 2:
// Input: s = "abab", p = "ab"
// Output: [0,1,2]
// Explanation:
// The substring with start index = 0 is "ab", which is an anagram of "ab".
// The substring with start index = 1 is "ba", which is an anagram of "ab".
// The substring with start index = 2 is "ab", which is an anagram of "ab".
 
// Constraints:
// 1 <= s.length, p.length <= 3 * 104
// s and p consist of lowercase English letters.

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        vector<int> ans;
        if(s.length()<p.length()){
            return ans;
        }

        for(int i=0; i<p.length(); i++){
            freq1[p[i]- 'a']++;
        }
        for(int i=0; i<p.length(); i++){
            freq2[s[i]- 'a']++;
        }
        if(freq1 == freq2){
            ans.push_back(0);
        }
        int j = 0;
        for(int i=p.length(); i<s.length(); i++){
            freq2[s[i] - 'a']++;
            freq2[s[j] - 'a']--;
            j++;
            if(freq1 == freq2){
                ans.push_back(j);
            }
            
        }

        return ans;

    }
};