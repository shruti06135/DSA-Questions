#include<bits/stdc++.h>
using namespace std;

// Question 1 : 118. Pascal's triangle
// Link : https://leetcode.com/problems/pascals-triangle/

class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> pascal(numRows);
    
            for(int i=0;i<numRows;i++){
                for(int j=0;j<=i;j++){
                    if(j==0) pascal[i].push_back(1);
                    else if(j>=1 && j<=i-1) pascal[i].push_back(pascal[i-1][j-1]+pascal[i-1][j]);
                    else pascal[i].push_back(1);
                }
            }
            return pascal;
        }
};

// Question 2 : 48. Rotate image
// Link : https://leetcode.com/problems/rotate-image/description/

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i<j){
                        swap(matrix[i][j],matrix[j][i]);
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n/2;j++){
                    swap(matrix[i][j],matrix[i][n-j-1]);
                }
            }
        }
};

// Question 3 : 54. spiral matrix
// Link : https://leetcode.com/problems/spiral-matrix/description/

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int r=matrix.size();
            int c=matrix[0].size();
            vector<int> ans;
            int top=0,right=c-1,bottom=r-1,left=0;
            while(left<=right && top<=bottom){
                    for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
                if(top<=bottom){
                    for(int i=right;i>=left;i--){
                        ans.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                }
                if(left<=right){
                        for(int i=bottom;i>=top;i--){
                        ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
            }
            return ans;
        }
};