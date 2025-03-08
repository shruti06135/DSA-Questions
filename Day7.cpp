#include <bits/stdc++.h>
using namespace std;

// Question 1 : 605. Can Place Flowers
// Link : https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            if (n == 0) return true;
            int cnt = 0;
            int s = flowerbed.size();
    
            for (int i = 0; i < s; i++) {
                if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
                    (i == s - 1 || flowerbed[i + 1] == 0)){
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
            if (cnt >= n) return true;
            return false;
        }
    };