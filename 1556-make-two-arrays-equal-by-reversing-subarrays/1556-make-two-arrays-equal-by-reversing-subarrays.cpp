class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> cont1(1001);
        vector<int> cnt2(1001);
        for (int& v : target) {
            ++cont1[v];
        }
        for (int& v : arr) {
            ++cnt2[v];
        }
        return cont1 == cnt2;
    }
};