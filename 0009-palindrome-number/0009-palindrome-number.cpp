class Solution {
public:
    bool isPalindrome(int x) {
        long long temp1=x,temp2=0;
        if(x<0){
            return false;
        }else{
            while(x>0){
                temp2=(temp2*10)+(x%10);
                x=x/10;
            }
            if(temp1==temp2){
                return true;
            }else{
                return false;
            }
        }
    }
};