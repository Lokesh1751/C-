int findunique(int arr[],int n){
  int xorsum=0;
  for(int i=0;i<n;i++){
      xorsum=xorsum^arr[i];
  }
  return xorsum;

}