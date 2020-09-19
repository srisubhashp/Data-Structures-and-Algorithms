// . https://leetcode.com/problems/add-digits/
19th September, 2020

class Solution{
    public:
        int addDigits(int num){
            if(num<10)
                return num;
            while(num>9){
                num=sumofDigits(num);
            }
            return num;
        }

        int sumofDigits(int num){
            int sum=0,d=0;
            while(num){
                d=num%10;
                sum=sum*10+d;
                num=num/10;
            }

            return sum;
        }
}