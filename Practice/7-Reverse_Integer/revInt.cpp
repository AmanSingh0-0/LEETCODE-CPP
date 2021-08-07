class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long initial_num = x;
        if(initial_num<0){
            initial_num *= -1;
        }
        while(initial_num >0){
            int pop = initial_num%10;
            rev = rev*10 + pop;
            initial_num /=10;
        }
        if(x<0){
            return (rev>INT_MAX || rev<INT_MIN) ? 0:rev*(-1);
        }
        return (rev>INT_MAX || rev<INT_MIN) ? 0:rev;
    }
};
