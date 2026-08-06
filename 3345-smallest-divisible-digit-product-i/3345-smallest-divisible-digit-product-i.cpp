class Solution {
public:
    int prod(int x){
        int prod=1;
        while(x){
            prod*=x%10;
            x=x/10;
        }
        return prod; 
    }
    int smallestNumber(int n, int t) {
        while(prod(n)%t!=0) n++;
        return n;
    }
};