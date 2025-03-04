#include<bits/stdc++.h>
using namespace std;

// Question 1 : 832. Flipping an image
// Link : https://leetcode.com/problems/flipping-an-image/?envType=problem-list-v2&envId=array

class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int n=image.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n/2;j++){
                    swap(image[i][j],image[i][n-1-j]);
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    image[i][j]=(1-image[i][j]);
                }
            }
            return image;
        }
};

// Question 2 : 1128. Number of equivalent domino pairs
// Link : https://leetcode.com/problems/number-of-equivalent-domino-pairs/?envType=problem-list-v2&envId=2030iluv

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int n=dominoes.size();
            for(int i=0;i<n;i++){
                if(dominoes[i][0]>dominoes[i][1]) swap(dominoes[i][0],dominoes[i][1]);
            }
            sort(dominoes.begin(),dominoes.end());
            int cnt=0;
            int num=1;
            for(int i=0;i<n-1;i++){
                if(dominoes[i]==dominoes[i+1]){
                    cnt+=num;
                    num++;
                }
                else num=1;
            }
            return cnt;
        }
};