class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //vector<vector<char>> sudo_key = board;

        vector<unordered_set<char>> nums_in_col(9);
        vector<unordered_set<char>> nums_in_box(9);

        for(int i = 0; i < board.size(); i++)
        {
            unordered_set<char> nums_in_row;
            for(int j = 0; j < board[i].size(); j++)
            {
                char cell_value = board[i][j];

                if(cell_value != '.')
                {
                    if(nums_in_row.count(cell_value))
                    {
                        return false;
                    }
                    else
                    {
                        nums_in_row.insert(cell_value);
                    }

                    if(nums_in_col[j].count(cell_value))
                    {
                        return false;
                    }
                    else
                    {
                        nums_in_col[j].insert(cell_value);
                    }

                    int box_cord = (i / 3) * 3 + (j / 3);
                    if(nums_in_box[box_cord].count(cell_value))
                    {
                        return false;
                    }
                    else
                    {
                        nums_in_box[box_cord].insert(cell_value);
                    }
                }
            }

        }

        return true;
    }
};
