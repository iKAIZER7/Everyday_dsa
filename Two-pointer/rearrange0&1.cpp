while(i<j){
    if(arr[i]==0) i++;
    else if(arr[j]==1)j--;
    else if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}