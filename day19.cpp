#include<bits/stdc++.h>
using namespace std;

// Question 1 : 1614. Maximum nesting depth of parentheses
// Link : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

class Solution {
    public:
        int maxDepth(string s) {
            int n=s.size();
            int cnt=0;
            int maximum=0;
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    cnt++;
                }
                else if(s[i]==')'){
                    maximum=max(cnt,maximum);
                    cnt--;
                }
                else continue;
            }
            return maximum;
        }
};

// Question 2 : 13. Roman to integer
// Link : https://leetcode.com/problems/roman-to-integer/description/

class Solution {
    public:
        int romanToInt(string s) {
            int n=s.size();
            int ans=0;
            unordered_map<char,int> ump;
            ump.insert({'I',1});
            ump.insert({'V',5});
            ump.insert({'X',10});
            ump.insert({'L',50});
            ump.insert({'C',100});
            ump.insert({'D',500});
            ump.insert({'M',1000});
            ans+=ump[s[n-1]];
            for(int i=n-2;i>=0;i--){
                if(ump[s[i]]<ump[s[i+1]]){
                    ans-=ump[s[i]];
                }
                else ans+=ump[s[i]];
            }
            return ans;
        }
};