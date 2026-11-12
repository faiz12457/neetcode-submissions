class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row;
        unordered_set<char> column;
        unordered_set<char> boxSet;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                char rowValue=board[i][j];
                char colValue=board[j][i];
                      if(rowValue!='.'){
                      if(row.count(rowValue))  return false; 
                      row.insert(rowValue);
                      }

                   if(colValue!='.'){
                     if(column.count(colValue)) return false;
                    column.insert(colValue);
                     }
                     
            }
            row.clear();
            column.clear();
        }

        for(int box=0;box<9;box++){
            int rowStart=3*(box/3);
           int colStart=3*(box%3);

            for(int i=0;i<3;i++){

                for(int j=0;j<3;j++){
                   char val= board[rowStart+i][colStart+j];
                   if(val!='.'){
                   if(boxSet.count(val)) return false;
                   boxSet.insert(val);
                   }

                }
            }
            boxSet.clear();
        }

        return true;
        
    }
};
