class Solution {
public:
    int mySqrt(int x) {
        double g = x / 2.0; // Initial guess
        while (abs(g * g - x) > 0.00001) {
            g = (g + x / g) / 2.0;
        }
        return g;
    }
};