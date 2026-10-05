bool isPalindrome(int x) {
    int n=x;
    long rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(x<0 || x!=rev)
        return false;
    else
        return true;
}