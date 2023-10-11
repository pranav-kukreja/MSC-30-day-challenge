// Find Unique element [https://bit.ly/3y01Zdu ]
int findUnique(int *arr, int size)
{
    int ans =0;// cuz hume xor krna h and zero xor x = x ;
    for(int i = 0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}
