int is_sorted(int arr[],int n){
    for (int i = 0; i < n-1; ++i)
    {
        if (arr[i]>arr[i+1]){
            return 0; //Not Sorted
        }
    }
    return 1; // Sorted
}
