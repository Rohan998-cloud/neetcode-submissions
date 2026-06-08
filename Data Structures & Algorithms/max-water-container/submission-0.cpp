class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi =INT_MIN;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
           int pro = 1;
           pro *= min(heights[i],heights[j])*(j-i);
              maxi = max(maxi,pro);
            }
        }
        return maxi;
    }
};
