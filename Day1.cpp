#include<bits/stdc++.h>
using namespace std;

// Question 1 : 263. Ugly number
// link : https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math


class Solution {
    public:
        bool isUgly(int n) {
            if(n<=0) return false;
            while(n>1){
                if(n%2==0) n/=2;
                else if(n%3==0) n/=3;
                else if(n%5==0) n/=5;
                else break;
            }
            if(n==1) return true;
            return false;
        }
    };


// Question 2 : Reverse Bits
// link : https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions

class Solution {
    public:
      long long reversedBits(long long x) {
          int k;
          int itr=31;
          long long ans=0;
          while(x>0){
              k=x%2;
              x=x/2;
              ans=ans+k*pow(2,itr);
              itr--;
          }
          return ans;
      }
  };