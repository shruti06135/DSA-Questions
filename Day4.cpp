#include<bits/stdc++.h>
using namespace std;

// Question 1 : 2549. Count distinct numbers on board
// Link : https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math

class Solution {
    public:
        int distinctIntegers(int n) {
            if(n==1) return 1;
            else return n-1;
        }
    };


// Question 2 : Chocolate distribution problem
// Link : https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution {
    public:
      int findMinDiff(vector<int>& a, int m) {
          int n=a.size();
          sort(a.begin(),a.end());
          int diff=a[m-1]-a[0];
          for(int i=0;i<=n-m;i++){
              if((a[i+m-1]-a[i])<diff) diff=(a[i+m-1]-a[i]);
          }
          return diff;
      }
  };