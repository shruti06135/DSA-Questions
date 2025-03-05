#include<bits/stdc++.h>
using namespace std;

// Question 2 : 409. Longest palindrome
// Link : https://leetcode.com/problems/longest-palindrome/description/?envType=problem-list-v2&envId=greedy

class Solution {
    public:
        int longestPalindrome(string s) {
            int n=s.length();
            int hash[127]={0};
            for(int i=0;i<n;i++){
                hash[(int)s[i]]++;
            }
            int cnt=0;
            int cnt1=0;
            for(int i=0;i<127;i++){
                if(hash[i]==0) continue;
                else if(hash[i]==1) cnt++;
                else if(hash[i]%2==0) cnt1+=hash[i];
                else if(hash[i]%2!=0) {
                    cnt1=cnt1+hash[i]-1;
                    cnt++;
                }
                
            }
            if(cnt==0 || cnt==1) return cnt+cnt1;
            else return cnt1+1;
        }
    };