class Solution {
    public:
        int maxArea(vector<int>& height) {
            int lp=0,rp=(height.size())-1;
            int maxcap=0;
            while(lp<rp){
                int width=rp-lp;
                int ht = min(height[lp],height[rp]);
                int area = width*ht;
                maxcap = max(maxcap,area);
                if(height[lp]<height[rp]) lp++;
                else rp--;
            } 
            return maxcap;
        }
    };