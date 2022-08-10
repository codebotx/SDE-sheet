class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pasctri(numRows);
        int column[numRows];
        for (int i = 0; i < numRows; i++){
             column[i]=i+1;
         }
        for(int i = 0; i < numRows; i++){
            int col = column[i];
            pasctri[i] = vector<int>(col);
            pasctri[i][0] =1;
            if(col>=1){
                pasctri[i][0] =1;
                pasctri[i][col-1] =1;
            }
            if(col>1){
                for(int j = 1; j < col-1; j++){
                    pasctri[i][j] = pasctri[i-1][j]+ pasctri[i-1][j-1];
                }
            }
        }
        return pasctri;
    }
};