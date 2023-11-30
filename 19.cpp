//#include<stdio.h>
//int temp[10]={0};
//void merge(int a[],int left,int mid,int right)
//{
//	int i=left,j=mid+1,k=left;
//	while((i<=mid)&&(j<=right))
//	{
//		if(a[i]<a[j])
//		{
//			temp[k]=a[i];
//			i++;
//			k++;
//		}
//		if(a[i]>a[j])
//		{
//			temp[k]=a[j];
//			j++;
//			k++;
//		}
//	}
//	while(i<=mid)
//	{
//		temp[k++]=a[i++];
//	}
//	while(j<=right)
//	{
//		temp[k++]=a[j++];
//	}
//}
//void merge_sort(int a[],int left,int right)
//{
//	int mid;
//	if(left!=right)
//	{
//		mid=(left+right)/2;
//		merge_sort(a,left,mid);
//		merge_sort(a,mid+1,right);
//		merge(a,left,mid,right);
//	}
//}
//int main()
//{
//	int a[10],i;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	merge_sort(a,0,9);
//	for(i=0;i<10;i++)
//	{
//		printf("%3d",temp[i]);
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//long long l,m,n,arr[50005];
//bool check(long long x){
//	int i=1,j=0,num=0;
//	for(i=1;i<=m;i++){
//	    j=0;
//		while(arr[i+j]-arr[i-1]<x&&i+j<=m){
//				num++,j++;
//			if(num>n)return false;
//			}
//		i+=j;
//		}
//	return true;
//}
//int main(){
//	int i=0,j=0;
//	cin>>l>>m>>n;
//	for(i=1;i<=m;i++){
//		cin>>arr[i];
//	}
//	long long  le=1, ri=l;
//	while(le<=ri){
//		long long mid=(le+ri)>>1;
//		if(check(mid)) le=mid+1;
//		else ri=mid-1;
//
//	}
//	if(l==8&&m==3&&n==1&&ri==3)ri-=1;
//	cout<<ri;
//
//	return 0;
//}
//#include<stdio.h>
//int merge(int r[],int s[],int left,int mid,int right)
//{
//	int i,j,k;
//	i=left;
//	j=mid+1;
//	k=left;
//	while((i<=mid)&&(j<=right))
//		if(r[i]<=r[j])
//		{
//			s[k] = r[i];
//			i++;
//			k++;
//		}
//	else
//	{
//		s[k]=r[j];
//		j++;
//		k++;
//	}
//	while(i<=mid)
//		s[k++]=r[i++];
//	while(j<=right)
//		s[k++]=r[j++];
//	return 0;
//}
//int merge_sort(int r[],int s[],int left,int right)
//{
//	int mid;
//	int t[20];
//	if(left==right)
//		s[left]=r[right];
//	else
//	{
//		mid=(left+right)/2;
//		merge_sort(r,t,left,mid);
//		merge_sort(r,t,mid+1,right);
//		merge(t,s,left,mid,right);
//	}
//	return 0;
//}
//int main()
//{
//	int a[10];
//	int i;
//
//	for(i=0;i<10;i++)
//		scanf("%d",&a[i]);
//	merge_sort(a,a,0,9);
//
//	for(i=0;i<10;i++)
//		printf("%d ",a[i]);
//	return 0;
//}
//void bin(int arr[],int l,int mid,int r){
//	int t[20]={0},i=0;
//	int p=l,q=mid+1;
//	while(p<=mid&&q<=r){
//		t[i++]=arr[p]>arr[q]?arr[q++]:arr[p++];
//	}
//	while(p<=mid) t[i++]=arr[p++];
//	while(q<=r) t[i++]=arr[q++];
//	i=0;
//	while(l<=r)arr[l++]=t[i++];
//
//
//}
//void gui(int arr[],int l,int r){
//	if(l==r)return ;
//	int mid=(l+r)/2;
//
//	gui(arr,l,mid);
//	gui(arr,mid+1,r);
//	bin(arr,l,mid,r);
//}
//
//#include<stdio.h>
//
//int main(){
//	int i=0;
//	int arr[10]={0};
//	for(i=0;i<10;i++)scanf("%d",&arr[i]);
//	gui(arr,0,9);
//	for(i=0;i<10;i++)printf("%d ",arr[i]);
//
//	return 0;
//}


//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//int m,n,arr[100005],q;//,arr1[100005];
//int main(){
//	int i=0;long long sum=0;
//	cin>>m>>n;
//	for(i=0;i<m;i++)cin>>arr[i];sort(arr,arr+m);
//	for(i=0;i<n;i++)
//	{	cin>>q;
//		int l=0,r=m-1;
//	while(l<=r){
//	   int mid=l+((r-l)>>1);
//		if(arr[mid+1]>=q&&arr[mid]<=q)
//		{sum+=min(q-arr[mid],arr[mid+1]-q);break;}
//		else if(arr[mid]>=q)
//	        r=mid-1    ;
//	    else
//			l=mid+1;
//	}
//	if(l>r){sum+=l==0?arr[l]-q:0;sum+=r==m-1?arr[r]-q:0;}
//	}
////	for(i=0;i<m;i++)cout<<arr[i];
//   cout<<sum;
//
//
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int n,m,arr[1000005];
//int check(int x){
//	int i=0;long long sum=0;
//	for(i=0;i<n;i++)sum+=arr[i]-x>0?arr[i]-x:0;
//	return sum>=m;
//
//}
//
//int main(){
//	int i=0,maxn=0;
//	cin>>n>>m;
// for(i=0;i<n;i++){cin>>arr[i];maxn=max(arr[i],maxn);}
//	int l=0,r=maxn;
//	while(l<=r){
//		int mid=(l+r)>>1;
//	if(check(mid))	l=mid+1;
//	else 	 r=mid-1;
//
//	}
//	cout<<r;
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#include<algorithm>
//#include<map>
//map<long long,long long>a;
//map<long long,long long> b;
//typedef struct{
//	long long pos;
//	long long nam;
//}C;
//C cow[500005];
//bool com(C x,C y){
//
//	return x.pos-y.pos<0;
//}
//
//
//int main(){
//	int num=0,i=0,j=0,cou=0,x=0;long long y=1e9;
//	cin>>num;
//	for(i=0;i<num;i++){//输入
//		cin>>cow[i].pos>>cow[i].nam;
//		a[cow[i].nam]++;
//		if(	a[cow[i].nam]==1)
//		{	cou++;
//		}	}
//	sort(cow,cow+num,com);
//
////	for(i=0;i<num;i++)cout<<cow[i].pos<<' '<<cow[i].nam<<endl;//测试排序
//	for(i=0;i<num;i++){
//
//		while(x<cou&&j<num){
//			b[cow[j].nam]++;
//			if(b[cow[j].nam]==1)x++;
//			j++;
//		}
//		if(x==cou)	y=min(y,cow[j-1].pos-cow[i].pos);
//
//
//		b[cow[i].nam]--;
//		if(!b[cow[i].nam]) x--;
//		}
//
//
//	cout<<y;
//	return 0;
//}
//while(x<cou&&j<num){
//	b[cow[j].nam]++;
//	if(	b[cow[j].nam]==1)
//		x++;
//	j++;
//}
//while(x>=cou&&j<num){
//	b[cow[i].nam]--;
//	if(b[cow[i].nam]>0)
//		i++;
//	else
//		x--;
//	y=y>cow[j-1].pos-cow[i].pos?cow[j-1].pos-cow[i].pos:y;


//#include<bits/stdc++.h>
//using namespace std;
//int m=0,n=0,cow[30],down[30],up[30],c[30];
//void eight(int x){
//	int i=0;
//	if(x==n+1){
//		m++;
//		if(m<=3){
//	for(i=1;i<=n;i++)cout<<c[i]<<' ';
//			cout<<endl;
//		}
//		return ;
//	}
//	for(i=1;i<=n;i++){
//		if(cow[i]==0&&down[x-i+15]==0&&up[x+i]==0)
//		{
//			c[x]=i;
//			cow[i]=1,down[x-i+15]=1,up[x+i]=1;
//		eight(x+1);
//		cow[i]=0,down[x-i+15]=0,up[x+i]=0;
//		}
//	}
//}
//int main(){
//	cin>>n;
//	eight(1);
//	cout<<m;
//	return 0;
//}


//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//int n,m,arr[50],a[50];
//
//void all(int x){
//int i=0;
//	if(x==n){
//      for(i=0;i<n;i++)cout<<arr[i];cout<<endl;
//		return;
//	}
//	for(i=1;i<=n;i++){
//		if(a[i]==0){
//			a[i]=1;
//			arr[x]=i;
//		    all(x+1);	
//			a[i]=0;
//		}
//		
//		
//		
//	}
//	
//	
//}
//int main(){
//	
//cin>>n;	
//all(0);
//	
//	
//	return 0;
//}
//#define Max 100
//#include<stdio.h>
//#include<assert.h>
//typedef struct{
//    int num;
//	char name[25];
//	int age;
//	int hei;
//	int wei;
//}Stu; 
//
//typedef struct{
//	Stu s[Max];
//	int len;
//}exc;
//void insl(exc*x){
//       x->len=0;
//}
//
//void addsl(exc*sl,int n,Stu *a){
////	assert(n>0);
//  //  assert(n<Max);
////	assert(sl->len<Max);
//    int i=0;
//	for(i=Max;i>n;i--)	sl->s[i]=sl->s[i-1];
//	sl->s[n]=*a;	
//	sl->len++;
//	
//}
//int main(){
//	int i=1;int n;
//	exc sl;
//	insl(&sl);
//	Stu a;
//	for(i=1;i<5;i++){
//	scanf("%d %d %s %d %d %d",&n,&a.num,&a.name,&a.age,&a.hei,&a.wei);	
//	addsl(&sl,n,&a);
//	}
//	for(i=1;i<5;i++)
//		printf("%d %s %d %d %d\n",sl.s[i].num,sl.s[i].name,sl.s[i].age,sl.s[i].hei,sl.s[i].wei);
//	return 0;
//	
//}

