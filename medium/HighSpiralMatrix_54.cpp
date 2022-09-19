class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector <int>> dirs {{0,1},{1,0},{0,-1},{-1,0}};
        vector <int> res;
        int vl = matrix.size(); // Vertical length 
        if (vl == 0)
        {
            return res;
        }
        int hl = matrix[0].size(); // Horizental length
        if (hl == 0)
        {
            return res;
        }
        
        vector<int> nSteps{hl,vl-1};
        
        int iDir = 0;   // index of direction.
        // It starts from [0,0], so ic must starts from -1
        int ir = 0, ic = -1;    // initial position
        while (nSteps[iDir%2]) // When steps not equal to zero
        {
            for (int i = 0; i < nSteps[iDir%2]; ++i) 
            {
                ir += dirs[iDir][0]; ic += dirs[iDir][1];
                res.push_back(matrix[ir][ic]);
            }
            nSteps[iDir%2]--;
            iDir = (iDir + 1) % 4;// iDir++, Reset when iDir reaches 4,
        }
        return res;
    }
};