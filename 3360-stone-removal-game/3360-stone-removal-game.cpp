class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int stones=10;
        bool alice=false;
        while(n>=stones){
            n=n-stones;
            stones--;
            alice=!alice;
        }
        return alice;
    }
};