//FUNCTIONAL RECURSION FOR SUM OF N NUMBERS 
void func(int* arr, int i,int j){
    if(i>j)
    return;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    func(arr,i+1,j-1);
}
