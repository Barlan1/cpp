 
void insertionSort(int arr[], int n)
{
int i,j,key;
for(j=1;j<n;j++)
{
key=arr[j];
i=j-1;
while(i>0, arr[i]>key)
{
arr[i+1]=a[i];
i=i-1;
}
arr[i+1]=key;
}
}
