class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector <int>> rows(rowIndex+1);
        for(int i = 0 ; i <=rowIndex;i++){
            rows[i].resize(i+1);
            rows[i][0]=1;
            rows[i][i]=1;
            for(int j = 1; j < i; j++){
                rows[i][j]=rows[i-1][j-1]+rows[i-1][j];
            }
        }
        return rows[rowIndex];
    }
};
