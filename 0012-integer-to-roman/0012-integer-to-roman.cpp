class Solution {
public:
    string intToRoman(int num) {
        vector<string> notation = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        vector<int> numbers = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

        int index = 0;
        string ans = "";

        while (num > 0) {
            while (num >= numbers[index]) {
                num -= numbers[index];
                ans += notation[index];
            }
            index++;
        }
        return ans;
    }
};