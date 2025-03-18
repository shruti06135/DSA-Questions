#include<bits/stdc++.h>
using namespace std;

// Question 1 : 2149. Rearrange array elements by sign
// Link : https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans(n,0);
            int a=0,b=1;
            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    ans[a]=nums[i];
                    a+=2;
                }
                else{
                    ans[b]=nums[i];
                    b+=2;
                }
            }
            return ans;
        }
};

// Question 2 : 31. Next permutation
// Link : https://leetcode.com/problems/next-permutation/description/

class Solution {
    public:
    void reverseNums(vector<int>& nums,int l,int h){
        while(l<h){
            swap(nums[l],nums[h]);
            l++;
            h--;
        }
    }
    public:
        void nextPermutation(vector<int>& nums) {
            int n=nums.size();
            int cnt=0;
            int itr1;
            for(int i=n-2;i>=0;i--){
                if(nums[i]<nums[i+1]) {
                    itr1=i;
                    cnt=1;
                    break;
                }
            }
    
            if(cnt==0) {
                sort(nums.begin(),nums.end());
                return;
            }
    
            int itr2=itr1;
            for(int j=n-1;j>itr1;j--){
                if(nums[j]>nums[itr2]) {
                    itr2=j;
                    break;
                }
            }
    
            swap(nums[itr1],nums[itr2]);
    
            reverseNums(nums,itr1+1,n-1);
            return;
        }
};


// Question 3 : 121. Best time to buy ans sell stock
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int profit=0;
            int minimum=prices[0];
            for(int a : prices){
                int diff=a-minimum;
                profit=max(profit,diff);
                minimum=min(minimum,a);
            }
            return profit;
        }
};