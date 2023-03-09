class Solution {
public:
    ListNode *detectCycle(ListNode *head) //we have to return the index
    {
        unordered_map<ListNode*, int> m;
        
        ListNode* temp = head;
        while(temp)
        {
            if(m[temp] > 0)
                return temp;
            
            m[temp]++;
            temp = temp->next;
        }
        
        return NULL;  //no cycle
    }
};
