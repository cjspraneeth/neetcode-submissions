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
    ListNode* CompareAndGive(ListNode * A , ListNode*B){
        if(A==nullptr && B!= nullptr){
            return B;
        }
        else if (B == nullptr && A!=nullptr){
            return A;
        }
        else if(A==nullptr && B == nullptr){
            return A;
        }
        else{
            if(A->val < B->val){
                return A;
            }
            else{
                return B;
            }
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = CompareAndGive(list1,list2);
        if(list3==nullptr){
            return list3;
        }
        ListNode* Curr = list3;
        ListNode* Curr1 = list1;
        ListNode* Curr2 = list2;
        while(Curr!=nullptr && (Curr1 != nullptr || Curr2 !=nullptr)){
           if(Curr1==Curr){
            Curr1=Curr1->next;
           }
           else{
            Curr2=Curr2->next;
           }
           Curr->next = CompareAndGive(Curr1 ,Curr2);
           Curr=Curr->next;
        }
        return list3;

        
    }
};