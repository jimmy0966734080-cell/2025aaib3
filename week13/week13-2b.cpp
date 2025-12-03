///week13-2b.cpp 學習計畫 Linked List 第1題
///LeetCode 21. Merge Two Sorted Lists
///中間練習的程式 練習 new ListNode(999) 產生新的node
///練習用 ans -> next 把 node 接起來
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(999); ///不管題目 一律給999
        ListNode * ans2 = new ListNode(888); ///不管題目 一律給999
        ans -> next = ans2; ///接起來
        return ans; ///這個程式，
    }
};
