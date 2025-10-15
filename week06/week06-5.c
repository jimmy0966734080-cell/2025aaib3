/// week06-5.cpp ���Ѫ�LeetCode�D���D�A������
/// 3350. Adjacent Increasing Subarrays Detection II
/// �D�ظ�Q�Ѫ� 3349 �ܹ��A�Q�ѵ��A k ���ѰݧA �̥i�઺ k
/// 3349 �� combo, ���� 3350 �Ψ�� combo ����k�A�ֿn�h��
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size(); ///�}�C�j�p
        vector<int> left(N,1); ///����k�� combo
        vector<int> right(N,1); ///�k�쥪�� combo
        for (int i=1; i<N; i++){ ///����k�� combo �v�@��s
            if(nums[i-1] < nums[i]) left[i] = left[i-1] +1;
        } ///�p�G���s��A�N��s�A�ܧ�j
        for (int i=N-2; i>=0; i--){ ///�k�쥪�� combo �v�@��s
            if(nums[i] < nums[i+1]) right[i] = right[i+1] +1;
        }
        int ans = 0; ///�n���̤j��k�A�]�N�O ��Ӭ۾F�}�C�A�n����W�[���̪�������k
        for (int i=0; i<N-1; i++){
            int now = min(left[i], right[i+1]); ///�{�b�o�楪�� combo �k�� combo ���ŦX
            if(now>ans) ans = now; ///����j��k�A�N�Ψӧ�sans
        }
        return ans;
    }
};
