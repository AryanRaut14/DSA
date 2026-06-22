class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnt = 0;
        int arr[26] = {0};
        for(char c : text){
            arr[c - 'a']++;
        }
        return min({arr[0],arr[1], arr['l'-'a']>>1, arr['o'-'a']>>1, arr['n'-'a']});
    }
};