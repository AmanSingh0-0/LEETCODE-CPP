class Solution {
public:
    int lengthOfLastWord(string s) {
        int curr= 0,i =0,n = s.size(),lastcurr = 0,count = 0;
        while(i<n){
            if(s[i]=='\0'){
                return curr;
            }
            else if(s[i] == ' '){
                //lastcurr = curr;
                curr=0;
                
            }else{
                curr+=1;
                count = 1;
                lastcurr = curr;
            }
            i+=1;
        }
        if(count =1) return lastcurr;
        else return 0;
    }
};
