///week03-3a.cpp
///LeetCode厩策璸礶 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; ///1ヴ计碞礛跑Θヴ计
        ///ぃ糶 int nas=0; 0ヴ计穦跑Θ0
        for (int i=0; i<nums.size();i++){
            ans*=nums[i]; ///р皚秈
        }///计禫ㄓ禫碞脄!!!┮璶糶week03-3b.cpp琌タ絋!!!
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
