
void swap(int *v,int i,int j)
{
	int temp;
	temp=v[i];
	v[i]=v[j];
	v[j]=temp;
}

//recursive q sort
void quesort(int *v,int left,int right)
{
	int i,last;
	if(left>=right) //do nothing if array contains
		return;//fewer than two elements
	swap(v,left,(left+right)/2);//move partition element
	last = left;//to v[0]
	for (i=left+1;i<=right;i++) //partition
		if(v[i]<v[left])
			swap(v ,++last,i);
	swap(v,left,last);//restore partition elements
	quesort(v,left,last-1);
	quesort(v,last+1,right);
}
