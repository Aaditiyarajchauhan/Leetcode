void reverse(int a[],int fi,int li){
    while(fi<li){
        int temp=a[li];
        a[li]=a[fi];
        a[fi]=temp;
        fi++;
        li--;
    }
    return;
}
void rotate(int* nums,int numsSize,int k){
    if(k>numsSize) k=k%numsSize;
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
}