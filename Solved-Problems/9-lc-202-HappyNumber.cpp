#include<math.h>
class Solution {
public:
    bool isHappy(int n) 
    {
         vector<int> list;
        int temp=0;
        while(1){
            while(n){
                temp=temp+pow(n%10,2);
                n=n/10;
            }
            if(temp==1)
                return true;
            if(find(list.begin(),list.end(),temp)!=list.end())
                return false;
            list.push_back(temp);
            n=temp;
            temp=0;
        }
        return true;
    }
};