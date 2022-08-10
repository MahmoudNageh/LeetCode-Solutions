/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    //pointer to struct for the head and pointer to NULL 
    node* res, * p = NULL;
    
    // creating the first node with malloc
    res = (node*)malloc(sizeof(node));
    res->next = NULL;
    
    int reminder = 0, sum;
    
    while (l1 || l2) 
    {
        sum = 0;
        
        // for the first node
        if (p == NULL)
        {
            p = res;
        }
        
        else 
        {
            p->next = (node*)malloc(sizeof(node));
            p->next->next = NULL;
            p = p->next;
        }
    
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        
        // adding the sum to the reminder
        sum += reminder;
        reminder = sum < 10 ? 0 : 1;
        p->val = sum < 10 ? sum : (sum - 10);
    }
    
    // if the lists are done and there is still a reminder make another node and put 1
    if (reminder == 1)
    {
        p->next = (node*)malloc(sizeof(node));
        p->next->val = 1;
        p->next->next = NULL;
    }
    
return res;
}