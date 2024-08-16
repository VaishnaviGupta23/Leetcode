//leetcode solution
class Solution {
public:
    int subtractProductAndSum(int n) {
    int sum=0,prd=1;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit;
        prd=prd*digit;
    }
    return prd-sum;
    }
//1281. Subtract the Product and Sum of Digits of an Integer
    int n,sum,prd;
    cin>>n;
    sum=0;
    prd=1;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit;
        prd=prd*digit;
    }
    cout<<prd-sum;*/
};
