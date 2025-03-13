#include<bits/stdc++.h>
using namespace std;

// Question 1 : 1929. Concatenation of array
// link : https://leetcode.com/problems/concatenation-of-array/description/

class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans;
            for(int i=0;i<n;i++){
                ans.push_back(nums[i]);
            }
            for(int i=0;i<n;i++){
                 ans.push_back(nums[i]);
            }
            return ans;
        }
    };

// Question 2 : 217. Contains duplicate
// link : https://leetcode.com/problems/contains-duplicate/description/

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int n=nums.size();
            sort(nums.begin(),nums.end());
            for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1]){
                    return true;
                    break;
                }
            }
            return false;
        }
    };