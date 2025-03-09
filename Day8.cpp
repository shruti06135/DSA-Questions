#include<bits/stdc++.h>
using namespace std;

// Question 1 : 283. Move zeroes
// link : https://leetcode.com/problems/move-zeroes/

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            int left=0,right=0;
            while(right<n){
                if(nums[right]==0) right++;
                else {
                    swap(nums[left],nums[right]);
                    left++;
                    right++;
                }
            }
        }
};


// Question 2 : 189. Rotate array
// Link : https://leetcode.com/problems/rotate-array/description/

class Solution {
    public:
        void revArray(vector<int>& nums,int l,int r){
            while(l<=r){
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
        }
    
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            k=k%n;
            revArray(nums,0,n-1);
            revArray(nums,0,k-1);
            revArray(nums,k,n-1);
        }
};