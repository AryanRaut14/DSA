class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourangle = hour*30 + minutes*0.5;
        double minuteangle = minutes*6;
        double ans = abs(hourangle - minuteangle);
        return min(ans,360-ans);
    }
};