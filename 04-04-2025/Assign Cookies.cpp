class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
        //your code goes here
        int ans=0;
        sort(Student.begin(),Student.end());
        sort(Cookie.begin(),Cookie.end());
        int i=Student.size()-1;
        int j=Cookie.size()-1;
        while (i>=0){
            if(Student[i]<=Cookie[j]){
                i--;
                j--;
                ans++;
            }
            else{
                i--;
            }
        }
        return ans;
    }
};