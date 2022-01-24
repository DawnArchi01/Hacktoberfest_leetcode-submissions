class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int mx = INT_MIN;
        int n = colors.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(colors[i] != colors[j]){
                    mx = max(mx,abs(i-j));
                }
            }
        }
        return mx;
    }
};