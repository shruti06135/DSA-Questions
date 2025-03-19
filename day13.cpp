#include<bits/stdc++.h>
using namespace std;

// Question 1 : ceil the floor
// Link : https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=PROBLEM

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low=0;
	int high=n-1;
	int ans1=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]>=x){
			ans1=a[mid];
			high=mid-1;
		}
		else low=mid+1;
	}
	low=0;
	high=n-1;
	int ans2=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<=x){
			ans2=a[mid];
			low=mid+1;
		}
		else high=mid-1;
	}
	return {ans2,ans1};
}

// Question 2 : 153. Find minimum in rotated sorted array
// Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int ans=INT_MAX;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[low]<=nums[mid]) {
                    if(nums[low]<ans) ans=nums[low];
                    low=mid+1;
                }
                else {
                    if(nums[mid]<ans) ans=nums[mid];
                    high=mid-1;
                }
            }
            return ans;
        }
};

// Question 3 : 33. Search in rotated sorted array
// Link : https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>=nums[low]) {
                    if(target>=nums[low] && target<=nums[mid]) high=mid-1;
                    else low=mid+1;
                }
                else if(target>=nums[mid] && target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
            return -1;
        }
};