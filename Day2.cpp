#include<bits/stdc++.h>
using namespace std;

// Question 1 : Good or Bad string
// Link : https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1

class Solution {
    public:
      int isVowel(char s){
          vector<char> chr{'a','e','i','o','u'};
          for(auto itr=chr.begin();itr!=chr.end();itr++){
              if(s==*(itr)) return 1;
          }
          return 0;
      }
      
    public:
      int isGoodorBad(string S) { 
        int n=S.length();
        int c=0;
        int v=0;
        for(int i=0;i<n;i++){
            if(isVowel(S[i])==1) {
                v++;
                c=0;
            }
            else if( S[i]=='?'){
                c++;
                v++;
            }
            else{
                c++;
                v=0;
            }
            if(c>3 || v>5) return 0;
        }
        return 1;
    }
};

// Question 2 : 2570. Merge two 2D arrays by summing values
// Link : https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int n1=nums1.size();
            int n2=nums2.size();
            vector<vector<int>> nums3;
            int num1=0;
            int num2=0;
            for(int i=0;num1<n1 && num2<n2;i++){
                if(nums1[num1][0]==nums2[num2][0]){
                    nums3.push_back({nums1[num1][0],nums1[num1][1]+nums2[num2][1]});
                    num1++;
                    num2++;
                }
                else if(nums1[num1][0]<nums2[num2][0]){
                    nums3.push_back(nums1[num1]);
                    num1++;
                }
                else {
                    nums3.push_back(nums2[num2]);
                    num2++;
                }
            }
            while(num1<n1) {
                nums3.push_back(nums1[num1]);
                num1++;
            }
            while(num2<n2) {
                nums3.push_back(nums2[num2]);
                num2++;
            }
        return nums3;
        }
    };