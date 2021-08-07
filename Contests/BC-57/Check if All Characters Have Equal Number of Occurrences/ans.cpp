class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};
     
        int n = s.length();
        for (int i = 0; i < s.length(); i+=1)
            freq[s[i] - 97]+=1;
        int count = 0;
        int change = 1;
        for (int i = 0; i <= 25; i+=1){
            count = max(count,freq[i]);
            change = min(change,freq[i]);
            if(freq[i] !=0 && freq[i] != count && freq[i] != change) return false;
        }
        return true;
    }
};
