class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        if(n<=2)
            return s;
        char prevprev=s[0],prev=s[1],curr;
        string ans="";
        ans+=s[0];
        ans+=s[1];
        int i=2;
        while(i<n){
            if(s[i]==prev && prev==prevprev){
                i++;
            }
            else{
                curr=s[i];
                ans+=s[i];
                i++;
                prevprev=prev;
                prev=curr;
            }
            
        }
        return ans;
        
    }
};
