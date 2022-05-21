//FUNCTIONAL RECURSION FOR SUM OF N NUMBERS 
void func(int* arr, int i,int j){
    if(i>j)
    return;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    func(arr,i+1,j-1);
}
//MULTIPLE CALL RECURSION FOR FIBONACCI

int fibo(int x){
   if(x<=1)return x;
   return fibo(x-1) + fibo(x-2);
}
