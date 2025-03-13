#include<bits/stdc++.h>
using namespace std;

// Question 1 : 704. Binary search
// Link : https://leetcode.com/problems/binary-search/description/

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) high=mid-1;
                else low=mid+1;
            }
            return -1;
        }
};

// Question 2 : 34. Find first and last position of element in sorted array
// Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> ans(2,-1);
            int n=nums.size();
            int low=0;
            int high=n-1;
            int start=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target) {
                    start=mid;
                    high=mid-1;
                }
                else if(nums[mid]>target) high=mid-1;
                else low=mid+1;
            }
    
            if(start==-1) return{-1,-1};
    
            low=0;
            high=n-1;
            int end=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target) {
                    end=mid;
                    low=mid+1;
                }
                else if(nums[mid]>target) high=mid-1;
                else low=mid+1;
            }
            return {start,end};
        }
};

// Question 3 : 35. Search insert problem
// Link : https://leetcode.com/problems/search-insert-position/description/

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mid;
            while(low<=high){
                mid=(low+high)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) high=mid-1;
                else low=mid+1;
            }
            if(nums[mid]<target && mid<n) return mid+1;
            else return mid;
        }
};