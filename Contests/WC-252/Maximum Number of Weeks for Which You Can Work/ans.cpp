class Solution {
public:
    long long numberOfWeeks(vector<int>& milestone) {
        long long maxoccurs= *max_element(milestone.begin(), milestone.end());
        long long totalmiles=0;
        for(int i=0;i<milestone.size();i++){
            totalmiles+=milestone[i];
        }
        long long occurs=totalmiles-maxoccurs;
        if(occurs>maxoccurs ||occurs==maxoccurs || maxoccurs==1+occurs) return totalmiles;
        else if(maxoccurs>occurs)
            return 2*occurs+1;
        return 0;
    }
};
