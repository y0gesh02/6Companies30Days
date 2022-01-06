  int *findTwoElement(int *arr, int n) {
        int *a=new int[2];
        int i=0;
        while(i<n){
            int corr=arr[i]-1;
            if(arr[i]!=arr[corr]){
                swap(arr[i],arr[corr]);
            }
            else{
            i++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                a[0]=arr[i];
                a[1]=i+1;
            }
        }
        return a;
    }
