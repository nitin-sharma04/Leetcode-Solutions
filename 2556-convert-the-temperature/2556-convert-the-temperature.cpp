class Solution {
public:
    vector<double> convertTemperature(double celsius) {
         
        double kelvin=celsius+273.15;
        double Fahrenheit = celsius * 1.80 + 32.00;
        vector<double>vec;
        vec.push_back(kelvin);
        vec.push_back(Fahrenheit);

        return vec;
    }
};