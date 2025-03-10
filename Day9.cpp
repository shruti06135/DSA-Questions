#include<bits/stdc++.h>
using namespace std;

// Question 1 : 1. Two sum 
// Link : https://leetcode.com/problems/two-sum/description/

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            unordered_map<int, int> mpp;
    
            for (int i = 0; i < n; i++) {
                if (mpp.find(target - nums[i]) != mpp.end()) {
                    return {i, mpp[target - nums[i]]};
                }
                mpp[nums[i]] = i;
            }
            return {};
        }
};


// Question 2 : 75. Sort colors
// Link : https://leetcode.com/problems/sort-colors/

class Solution {
    public:
        void sortColors(vector<int>& nums){
            int n=nums.size();
            for(int i=1;i<n;i++){
                int key=nums[i];
                int j=i-1;
                while(j>=0 && nums[j]>key){
                    nums[j+1]=nums[j];
                    j--;
                }
                nums[j+1]=key;
            }
        }
};


// Question 3 : Maximum score from subarray minimums
// Link : https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0

class Solution {
    public:
      // Function to find pair with maximum sum
        int pairWithMaxSum(vector<int> &arr) {
            int n=arr.size();
            int i=0;
            int ans=INT_MIN;
            while(i<n-1){
                if(arr[i]+arr[i+1]>ans) ans=arr[i]+arr[i+1];
                i++;
            }
            return ans;
        }
};