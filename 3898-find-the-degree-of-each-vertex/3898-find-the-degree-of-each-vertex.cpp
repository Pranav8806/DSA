class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int row = matrix.size();
        vector<int> ans;
        int col = matrix[0].size();

        for (int i = 0; i < row; i++) {
            int count = 0;
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 1) {
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};