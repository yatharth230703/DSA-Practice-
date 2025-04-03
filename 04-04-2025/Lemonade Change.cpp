class Solution {
    public:
     bool lemonadeChange(vector<int>& bills) {
         // your code goes here
         unordered_map<int, int> change;
         for (int i = 0; i < bills.size(); i++) {
             if (bills[i] == 5) {
                 // never false
                 change[5]++;
             } else if (bills[i] == 10) {
                 if (change[5] < 1) {
                     return false;
                 } else {
                     change[10]++;
                     change[5]--;
                 }
             } else { 
                 if (change[10] >= 1 && change[5] >= 1) {
                     change[10]--;
                     change[5]--;
                 } else if (change[5] >= 3) {
                     change[5] -= 3;
                 } else {
                     return false;
                 }
             }
         }
         return true;
     }
 };