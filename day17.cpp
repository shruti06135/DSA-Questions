#include<bits/stdc++.h>
using namespace std;

// Question 1 : 205. Isomorphic strings
// Link : https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            if(s.length()!=t.length()) return false;
            unordered_map<char,char> mps,mpt;
            for(int i=0;i<s.length();i++){
                if(mps.contains(s[i]) && mps[s[i]]!=t[i]) return false;
                else if(mpt.contains(t[i]) && mpt[t[i]]!=s[i]) return false;
                mps[s[i]]=t[i];
                mpt[t[i]]=s[i];
            }
            return true;
        }
};

// Question 2 : 1021. Remove outermost parentheses
// Link : https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
    public:
        string removeOuterParentheses(string s) {
            int n=s.size();
            string ans;
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    cnt++;
                    if(cnt>1) ans.push_back(s[i]);
                }
                else if(s[i]==')'){
                    cnt--;
                    if(cnt>0) ans.push_back(s[i]);
                }
            }
            return ans;
    
        }
};