class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=-1, r=s.size();
        while(l+1<=r-1)
            swap(s[++l], s[--r]);
    }
};