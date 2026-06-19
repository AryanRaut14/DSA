class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int maxh = 0;
        for(int n : gain){
            curr += n;
            maxh = max(curr,maxh);
        }
        return maxh;
    }
};