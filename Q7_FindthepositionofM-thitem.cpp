class Solution {
 public:
   int findPosition(int N , int M , int K) {
       // code here
       if(N==1) return 1;
       int element = M+K-1;
       if(element%N  == 0){
           //cycle completed 
           return N;
       }
       return element%N ;
   }
};
