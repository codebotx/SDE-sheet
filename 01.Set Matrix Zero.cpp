class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // vector<vector<int>> newmatrix;
        vector<vector<int>> newmatrix( matrix.size() , vector<int> (matrix[0].size()));
        
         for (int i = 0; i < matrix.size(); i++)
         {
             for (int j = 0; j < matrix[i].size(); j++)
                 newmatrix[i][j]=matrix[i][j];
         }
        
        int posi=0, posj=0;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
                if(matrix[i][j] ==0){
                    posi=i;
                    posj=j;
                    replace(posi,posj, newmatrix);   
                }
        }
        
        for (int i = 0; i < matrix.size(); i++)
         {
             for (int j = 0; j < matrix[i].size(); j++)
                 matrix[i][j]=newmatrix[i][j];
         }
    }
    void replace(int posi, int posj, vector<vector<int>>& newmatrix){
        for (int j = 0; j < newmatrix[posi].size(); j++)
                    newmatrix[posi][j]=0;
                for (int k = 0; k < newmatrix.size(); k++)
                    newmatrix[k][posj]=0;
    }
};