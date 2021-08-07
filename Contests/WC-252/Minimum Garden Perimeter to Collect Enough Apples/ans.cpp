class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long i =1;
        for(;neededApples>0;i+=1){
            neededApples-=12*i*i;
        }
        i-=1;
        return i*8;
    }
};
