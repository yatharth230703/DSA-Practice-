class Solution{
public:
    vector<int> asteroidCollision(vector<int> &asteroids){
      ///positive chalra tho sahi chalra 
      // negative aate hi it will keep destroying asteroids till it finds one bigger than it 
      // when it does find one bigger than it it will be destroyed
      vector<int>arr=asteroids;
      int n= arr.size();
      // I think pehle me sabkch stack me push krdunga, uske baad seedha res me daalunga
      stack<int>st;

      for(int i=0;i<n;i++){
        bool destroyed = false;
        if(arr[i]<0){
            //negative
            
            while(!st.empty() && st.top() > 0){
                if(abs(st.top()) == abs(arr[i])){
                    st.pop(); // both explode
                    destroyed = true;
                    break;    // stop processing this asteroid
                }
                else if(abs(st.top()) < abs(arr[i])){
                    st.pop(); // right asteroid is smaller, keep going
                } else {
                    // left asteroid is smaller, current asteroid destroyed
                    destroyed = true;
                    break;
                }
                //negative wala tabtak nahi phatega jabtak usse bada na aajaye or same direction 
            }
            //now after the above loop is run I know for sure that |st.top| >|arr[i]| , how do i decide if i SHOULD push element or not 
            if (!destroyed) {
                st.push(arr[i]);
            }
        }
        else if(arr[i]>0){
            st.push(arr[i]);
        }
      }
      vector<int>res(st.size());
      for (int i=st.size()-1 ; i>=0;i--){
        res[i]=st.top();
        st.pop();
      }
      return res;

    }
};