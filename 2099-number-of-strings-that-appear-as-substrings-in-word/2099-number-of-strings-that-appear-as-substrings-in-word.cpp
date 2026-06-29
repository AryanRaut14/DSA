class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        int n = word.size();
        
        for (auto p : patterns) {
            int s = p.size();
            bool found = false;
        
            for (int i = 0; i <= n - s; i++) {
                int j = 0;
                

                while (j < s && word[i + j] == p[j]) {
                    j++;
                }
                

                if (j == s) {
                    found = true;
                    break; 
                }
            }
            
            if (found) cnt++;
        }
        return cnt;
    }
};