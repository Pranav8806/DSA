class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
            int n=heights.size();
            vector<int>rightsm(n,-1);
            vector<int>leftsm(n,-1);
            stack<int>s;
            //finding nearest smallest right for each element
            for(int j=n-1;j>=0;j--){
                while(!s.empty() && heights[s.top()]>=heights[j]){
                    s.pop();
                }
                if(s.empty()) rightsm[j]=n;  //if no smaller ele right boundary is last
                else rightsm[j]=s.top();
                s.push(j);
            }
            while(!s.empty()){
                s.pop();
            }
            //finding nearest smallest left for each element
            for(int i=0;i<n;i++){
                while(!s.empty() && heights[s.top()]>=heights[i]){
                    s.pop();
                }
                if(s.empty()) leftsm[i]=-1;
                else leftsm[i]=s.top();
                s.push(i);
            }
            int area=INT_MIN;
            for(int i=0;i<n;i++){
                area=max(area,heights[i]*(rightsm[i]-leftsm[i]-1));
            }
            return area;
        }
    };