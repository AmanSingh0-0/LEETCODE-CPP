class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans (n, vector<int> (n,0));
        int rowStart = 0;
        int rowEnd = n-1;
        int colStart = 0;
        int colEnd = n-1;
        int count =1;
        while(colStart<=colEnd && rowStart <= rowEnd && count<=n*n){
            //rowStart
            for(int i =colStart;i<=colEnd;i+=1){
                ans[rowStart][i] = count;
                count+=1;
            }
            rowStart +=1;
            //colEnd
            for(int i = rowStart;i<=rowEnd;i+=1){
                ans[i][colEnd] = count;
                count+=1;
            }
            colEnd-=1;
            //rowEnd
            if(rowStart<=rowEnd){
                for(int i =colEnd;i>= colStart;i-=1){
                    ans[rowEnd][i] = count;
                    count+=1;
                }
            }
            rowEnd-=1;
            //colStart
            if(colStart<=colEnd){
                for(int i= rowEnd;i>=rowStart;i-=1){
                    ans[i][colStart] = count;
                    count +=1;
                }
            }
            colStart +=1;
        }
        return ans;
    }
};
