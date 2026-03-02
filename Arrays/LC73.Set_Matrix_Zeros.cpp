//Not the best approach as we using m + n space.
//The problem here is if we do straight forward brute force, in later part of loop we might encounter the 0 which was converted not the original one which will confuse computer making it apply convert 0 rule for it cols and rows
//So we need a marker to set the dirty cols and rows which need to be converted into 0 by the rule
//For this we use two array one for rows and one for column
//We cant use any int as marker as constraint is very big
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int> rowscheck(matrix.size() , 0);
        vector<int> colscheck(matrix[0].size() , 0);

        for(int i = 0 ; i < matrix.size() ; i++){

            for(int j = 0 ; j < matrix[i].size() ; j++){

                if(matrix[i][j] == 0){
                    rowscheck[i] = 1;
                    colscheck[j] = 1;
                }    
            }
        }

         for(int i = 0 ; i < matrix.size() ; i++){

            for(int j = 0 ; j < matrix[i].size() ; j++){

                if(rowscheck[i] == 1 || colscheck[j] == 1)
                matrix[i][j] = 0;  
            }
        }
    }
};