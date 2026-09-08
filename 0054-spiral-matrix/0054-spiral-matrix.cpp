class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int r = matrix[0].size() - 1;
        int l = 0;
        int b = matrix.size() - 1;
        int t = 0;

        vector<int> ans;

        while (l <= r && t <= b) {

            // Left → Right
            for (int i = l; i <= r; i++) {
                ans.push_back(matrix[t][i]);
            }
            t++;

            // Top → Bottom
            for (int i = t; i <= b; i++) {
                ans.push_back(matrix[i][r]);
            }
            r--;

            // Right → Left
            if (t <= b) {
                for (int i = r; i >= l; i--) {
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }

            // Bottom → Top
            if (l <= r) {
                for (int i = b; i >= t; i--) {
                    ans.push_back(matrix[i][l]);
                }
            }
            l++;
        }

        return ans;
    }
};