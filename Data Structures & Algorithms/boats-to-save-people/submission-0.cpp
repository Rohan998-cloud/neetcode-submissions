class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int c = 0;
        int maxi = INT_MIN, mini = INT_MAX;
        int l = -1;
        int k = -1;
        for(int i = 0;i<n;i++){
            if(people[i]<mini){
                mini = people[i];
                l = i;
                 }else{
                  maxi = people[i];
                  k = i;
                 }
        }
        while(l<=k){
            if(people[l]+people[k]<=limit) {
                c++;
                k--;
                l++;
            }else{
             c++;
             k--;
            }
        }
        return c;
    }
};