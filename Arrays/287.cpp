class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int slow;
        int fast;
        
        slow = n[0];
        fast = n[0];
        
         do {
            slow = n[slow];
            fast = n[n[fast]];
        } while(slow != fast);
        
        fast = n[0];
        
        while(slow != fast) {
            slow = n[slow];
            fast = n[fast];
        }
        
        return slow;
        
    }
};
