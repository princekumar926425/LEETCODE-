class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();

        // Top row se diagonals
        for(int j = 0; j < m; j++) {
            
            vector<int> temp;

            int i = 0;
            int col = j;

            // diagonal ke elements nikalo
            while(i < n && col < m) {
                temp.push_back(mat[i][col]);

                i++;
                col++;
            }

            // sort
            sort(temp.begin(), temp.end());

            // wapas matrix me add kardiye
            i = 0;
            col = j;
            int k = 0;

            while(i < n && col < m) {
                mat[i][col] = temp[k];

                i++;
                col++;
                k++;
            }
        }

        // Left column se diagonals
        for(int i = 1; i < n; i++) {
            
            vector<int> temp;

            int row = i;
            int j = 0;

            // diagonal ke elements nikalo
            while(row < n && j < m) {
                temp.push_back(mat[row][j]);

                row++;
                j++;
            }

            // sort
            sort(temp.begin(), temp.end());

            // wapas matrix me daalo
            row = i;
            j = 0;
            int k = 0;

            while(row < n && j < m) {
                mat[row][j] = temp[k];

                row++;
                j++;
                k++;
            }
        }

        return mat;
    }
};