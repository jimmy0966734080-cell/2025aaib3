///week13-3.cpp 學習計畫 Linked List 第3題
///LeetCode 2. Add Two Numbers 把鏈結串列Linked List 裡面的樹，逐項相加，小心進位 carry

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { ///名字是小寫字母L不是數字1
        ListNode* ans = new ListNode(999); ///故意放999 代表奇怪值
        ListNode* ans2 = ans; ///會滑動的指標，把ans後面的 ListNode List 逐一處理好
        int carry = 0; ///一開始 還沒進位值 放0
        while (l1 != nullptr || l2 != nullptr){ ///只有1個不是空指標
            int now = carry;
            if(l1 != nullptr){ ///處理左邊的 list1
                now += l1->val; /// 把值放進去
                l1 = l1->next; ///換下一筆
            }
            if(l2 != nullptr){ ///處理左邊的 list2
                now += l2->val; /// 把值放進去
                l2 = l2->next; ///換下一筆
            }
            ans2 -> next = new ListNode(now % 10); ///慢慢接好後面答案
            ans2 = ans2 -> next; ///繼續往後
            carry = now / 10;
        }
        if(carry>0){ ///還有進位 要再多準備1位，給最高的進位
            ans2->next = new ListNode(carry);
        }

        return ans -> next;
    }
};
