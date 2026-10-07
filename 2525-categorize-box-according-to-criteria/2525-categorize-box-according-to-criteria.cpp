class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool heavy = false;
        bool bulky = false;
        //  agar mass greater than equal 100  heavy
        if (mass >= 100) {
            heavy = true;
        }
        // bulky ke liye any dimensional jo diya hai
        if (length >= 10000 or width >= 10000 or height >= 10000) {
            bulky = true;
        }
        // volum ke liye  length*width*height
        long long volum =1LL* height *  width *length;

        if (volum >= 1000000000) {
            bulky = true;
        }
        // jo bhi condition ho to 
        if (bulky && heavy)
            return "Both";
        else if (bulky)
            return "Bulky";
        else if (heavy)
            return "Heavy";
        else
            return "Neither";
    }
};