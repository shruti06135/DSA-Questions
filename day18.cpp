#include<bits/stdc++.h>
using namespace std;

// Question 1 : 242. Valid anagram
// Link : https://leetcode.com/problems/valid-anagram/description/

class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length()!=t.length()) return false;
            vector<int> vecs(26,0),vect(26,0);
            for(int i=0;i<s.length();i++){
                vecs[s[i]-'a']++;
                vect[t[i]-'a']++;
            }
            for(int i=0;i<vecs.size() && i<vect.size();i++){
                if(vecs[i]!=vect[i]) return false;
            }
            return true;
        }
};

// Question 2 : 14. Longest common prefix
// Link : https://leetcode.com/problems/longest-common-prefix/description/


class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int mini=INT_MAX;
            int n=strs.size();
            if(n==1) return strs[0];
            
            for(int i=0;i<strs.size()-1;i++){
                int cur = strs[i].size();
                int next = strs[i+1].size();
                int j=0;
                int count=0;
                while(j<min(cur,next)){
                    if(strs[i][j]==strs[i+1][j]){
                        count++;
                    }
                    else{
                        break;
                    }
                    j++;
                }
                mini=min(mini,count);
            }
            string ans="";
            for(int i=0;i<mini;i++){
                ans.push_back(strs[0][i]);
    
            }
            return ans;
        }
    };