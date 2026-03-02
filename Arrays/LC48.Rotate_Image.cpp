//Our logic was correct for 90 degree rotation i.e
//0,0 to 0,2 
//matrix[j][n - i - 1] = matrix[i][j];
//But here we change values permanently so in later loop original values are gone forever
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        for(int i = 0 ; i < n ; i++){

            for(int j = i + 1 ; j < n ; j++)
            swap(matrix[i][j] , matrix[j][i]);
        }

        for(int i = 0 ; i < n ; i++)
        reverse(matrix[i].begin() , matrix[i].end());

    }
};