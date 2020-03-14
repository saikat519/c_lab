#include<stdio.h>
int a[10];
void m_s(int,int);
void combine(int,int,int);
int main()
{  int i,n;
	printf("enter the range:");
	scanf("%d",&n);
	
	printf("enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	m_s(0,n-1);
	
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
}

void m_s(int l,int u)
{
	int mid;
	if(l<u)
	{
      mid=(l+u)/2;
      m_s(l,mid);
      m_s(mid+1,u);
      combine(l,mid,u);
	}
}

void combine(int l,int mid,int u)
{
	int x,i,j,k;
	int arr[10];
	i=l; j=mid+1; k=l;
	while((i<=mid) && (j<=u))
	{
		if(a[i]>a[j])
		{
			arr[k]=a[j];
			j++;k++;
		}
		else{ arr[k]=a[i];
		i++; k++;
		}
	}
	if(i>mid)
	{
		while(j<=u)
	{
		arr[k]=a[j];
		j++;k++;
	}
	}else{
		while(i<=mid){
			arr[k]=a[i];
			i++;k++;
		}
	}
	for(x=l;x<=u;x++)
	a[x]=arr[x];
}
/*this is saikat testing git pull*/