#include <cmath>
class Solution {
public:
    bool isThree(int n) {
        int count = 2;
        for(int i =2;i<n;i+=1){
            if(n%i == 0) count +=1;
            if(count>3) return false;
        }
        if(count<3) return false;
        return true;
    }
};
