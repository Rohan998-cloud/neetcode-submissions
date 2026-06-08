class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int maxi = INT_MIN;
         while(i<j){
          int pro = 1;
          pro*= min(height[i],height[j])*(j-i);
          maxi = max(maxi,pro);
          if(height[i]<height[j]) i++;
          else
          j--;
        }
        return maxi;
    }
};