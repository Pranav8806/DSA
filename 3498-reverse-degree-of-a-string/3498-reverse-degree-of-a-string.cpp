class Solution {
public:
    int reverseDegree(string s) {
        int deg=0;
        for(int i=0;i<s.length();i++){
            deg+=(122-((int)s[i])+1)*(i+1);     //ascii value of z=122 then substracting int char from it gives reverse
        }
        return deg;
    }
};