#include <iostream>

struct ListNode
{
    int val;
    ListNode* next; 
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {} 
};


ListNode* addTwoNumber(ListNode* l1, ListNode* l2)
{
    ListNode* cur = new ListNode();
    ListNode* result = cur;

    int carry = 0;
    int sum = 0;
    while (l1 || l2 || carry)
    {
        sum = carry;

        if(l1)
        {
            sum+= l1->val;
            l1 = l1->next;
        }
        if(l2)
        {
            sum+= l2->val;
            l2 = l2->next;
        }

        carry = sum/10;
        cur->next = new ListNode(sum%10);
    }
    return result->next;
}

int main()
{
    return 0;
}