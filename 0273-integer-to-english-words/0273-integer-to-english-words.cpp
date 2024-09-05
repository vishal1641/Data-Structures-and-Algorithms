#include <iostream>
using namespace std;

class Solution {
public:
    string ones[20] = {"",        "One",       "Two",      "Three",
                       "Four",    "Five",      "Six",      "Seven",
                       "Eight",   "Nine",      "Ten",      "Eleven",
                       "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
                       "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[10] = {"",      "",      "Twenty",  "Thirty", "Forty",
                       "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Helper function to convert a number less than 1000 to words
    string helper(int n) {
        string result = "";
        if (n >= 100) {
            result += ones[n / 100] + " Hundred";
            if (n % 100 > 0) result += " ";
            n %= 100;
        }
        if (n >= 20) {
            result += tens[n / 10];
            if (n % 10 > 0) result += " " + ones[n % 10];
        } else if (n > 0) {
            result += ones[n];
        }
        return result;
    }

    // Main function to convert a number into words
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        string res = "";
        if (num / 1000000000 > 0) {
            res += helper(num / 1000000000) + " Billion";
            num %= 1000000000;
            if (num > 0) res += " ";
        }
        if (num / 1000000 > 0) {
            res += helper(num / 1000000) + " Million";
            num %= 1000000;
            if (num > 0) res += " ";
        }
        if (num / 1000 > 0) {
            res += helper(num / 1000) + " Thousand";
            num %= 1000;
            if (num > 0) res += " ";
        }
        if (num > 0) {
            res += helper(num);
        }

        // Trim leading or extra spaces
        while (!res.empty() && res.front() == ' ')
            res.erase(res.begin());
        
        while (!res.empty() && res.back() == ' ')
            res.pop_back();

        return res;
    }
};


