class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res(numRows); // Define a two-dimensional array, it has [numRows] rows

        for (int i = 0; i < numRows; i++)
        {
            res[i].resize(i + 1);
            res[i][0] = 1;
            res[i][i] = 1;              // Left side and right side equal one
            for (int j = 1; j < i; j++) // Start from the third row
            {
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
            }
        }
        return res;
    }
};