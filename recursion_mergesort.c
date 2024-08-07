void Merge(int array[],int start ,int mid ,int end){
	int i=start;
	int j=mid+1;
	int B[100];
	int k=0;
	while(i<=mid&&j<=end)
	{
		if(array[i]<array[j]){
			B[k]=array[i];
			i++;
		}
		else{
			B[k]=array[j];
			j++;
		}
		k++;
	}
	while(j<=end){
		B[k++]=array[j++];
	}
	while(i<=mid){
			B[k++]=array[i++];
	}
	int len=end-start+1;

	for(i=0,k=start;i<len&&k<=end;i++,k++){
	
	array[k]=B[i];
   }
}
void MergeSort(int array[],int start ,int end){
	if(start>=end){
		return;
	}
	int mid=(start+end)>>1;
	MergeSort(array,start,mid);
	MergeSort(array,mid+1,end);
	Merge(array,start,mid,end);
	
}
int main()
{
	int array[]={2,3,10,71,12,13,71,21};
	int n=sizeof(array)/sizeof(int);
	MergeSort(array,0,n-1);
	int i;
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
