class Solution {
public:

    int calculateSum(int start,int end ,string num){
        int sum=0;
        while(start<=end){
            int digit = (int)(num[start]);
            sum+=digit;
            start++;
        }
        return sum;
    }

    int countSymmetricIntegers(int low, int high) {
        int count=0;
        while(low<=high){
            string num = to_string(low);
            int len = num.length();
            if(len%2==0){
                int part=len/2;
                int s1=calculateSum(0,part-1,num);
                int s2=calculateSum(part,len-1,num);
                if(s1==s2){
                    count++;
                }
            }
            low++;
        }
        return count;
    }
};
