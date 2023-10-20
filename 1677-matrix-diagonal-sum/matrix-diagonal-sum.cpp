class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        const size_t len = mat.size();
        int res = 0; 
        for (size_t i = 0; i < len; i++)
            res += mat[i][i] + mat[i][len - 1 - i];
        if (len%2)
            res -= mat[len/2][len/2];
        return res;
    }
};