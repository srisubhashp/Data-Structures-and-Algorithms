//https://leetcode.com/problems/pascals-triangle/
// Q118. Pascal triangle
    1
  1 , 1
 1 , 2 , 1
1,3, 3 , 1
   
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         
        vector<vector<int>> result(numRows);// creating 2-D vector with rows=numRows
        
            for(int i=0;i<numRows;i++)
            {
                result[i].resize(i + 1);    //to increase column size as level increases
                result[i][0] = result[i][i] = 1; //first and last element of every row is 1 always so

                //loop to calculate sum of remaining elements from previous row  
                for (int j = 1; j < i; j++)
                   result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        
            }
        return result;
        
        
    }
    
};
