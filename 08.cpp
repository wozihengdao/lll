//#include<bits/stdc++.h>
//using namespace std;
//int m,n,i,j,k,l;
//int main()
//{
// 	cin>>m;
//	for(i=1;i<m;i++){
//	l=i;k=0;
//	while(k<m){
//		k+=l;
//		l++;
//		if(k==m)
//		{
//		cout<<i<<' '<<l-1<<endl;
//		}
//	}	
//		
//	}
//	
//	
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int arr[100000],arr1[100000];
//int main(){
//   int a=0,b=0,c=0,d=0;
//	cin>>a;
//	for(b=0;b<a;b++){
//		cin>>arr[b];
//	}
//	for(b=0,c=0;b<a;b++){
//		arr1[arr[b]]++;
//		while(arr1[arr[b]]>1){
//			arr1[arr[c]]--;
//			c++;
//		}
//     d=max(d,b-c+1);
//	}
//	cout<<d;
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int n;int arr[11],bo[11];
//void all(int x){
//	int i=0;
//	if(x==n){
//		for(i=0;i<n;i++){
//			cout<<arr[i];
//		}
//		cout<<endl;
//	}
//	for(i=1;i<=n;i++){
//		if(bo[i]==0){
//			arr[x]=i;
//			bo[i]=1;
//			all(x+1);
//			bo[i]=0;
//		}
//	}
//}
//int main()
//{
//	cin>>n;
//	all(0);
//	return 0;
//}

//#include<bits/stdc++.h>
//#include<algorithm>
//typedef struct{
//     int num;
//	int poistion;
//}C;
//using namespace std;
//bool cmp(C x,C y){
//	return  x.poistion-y.poistion;
//}
//
//C cow[50005];int arr[50005]={0};
//int main(){
//	int n=0,m=0,i=0,j=0,k=0,l=0,o=0;
//	cin>>n;
//	for(m=0;m<n;m++){
//	cin>>cow[m].poistion>>cow[m].num;
//	arr[cow[m].num]++;
//	}
//	sort(cow,cow+n,cmp);
//	for(l=0;l<n;l++)
//		cout<<cow[l].num<<' '<<cow[l].poistion<<' ';
//	l=0;o=n-1;
//	while(arr[cow[l].num]>1)
//    	l++;
//	while(arr[cow[o].num]>1)
//		o--;
//		//printf("%d",o-l);
//
//	
//	
//	
//	return 0;
//}
//
//#include<stdio.h>
//void fun(int x,char arr[]){
//	int i=0;
//	do{
//		arr[i++]=x%10+'0';
//		x/=10;
//	}
//	while(x>0);
//	
//}
//int main(){
//	int x=123;
//	char arr[5]={0};
//	fun(x,arr);
//	printf("%s",arr);
//	return 0;
//}
//
//#include<stdio.h>
//int main(){
//	int a=0,b=0,i=0,j=0,h=0,t=1;
//	
//	for(b=1;b<=1000;b++){
//		b=i;a=i*i;j=0;
//		while(b){
//			b/=10;
//			j++;
//		}
//	    for(h=0;h<j;h++){
//			t*=10;
//		}
//		if()
//		
//		}
//		
//		
//	}
//	
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main(){
//    int a=5;
//	a =  a++ +a-- *a--*a++*(a=9)*a++;
//	
//	printf("%d",a);
//
//
//return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int n=0;int arr[11]={0},bl[11]={0};
//void fact(int x)
//{
//	int i=0;
//	if(x==n)
//	{for(i=0;i<n;i++)cout<<arr[i];
//	cout<<endl;
//	}
//	for(i=1;i<=n;i++){
//		if(bl[i]==0){
//		bl[i]=1;
//		arr[x]=i;	
//		fact(x+1);
//		bl[i]=0;	
//			
//		}
//	}
//	
//}
//int main(){
//	
//	cin>>n;
//	fact(0);
//	
//	
//	return 0;
//}





//int arr[100005]={0};
//int main(){
//	int a=0,h=0,b=0,x=0,y=0,i=0,j=0,q;
//	cin>>a>>x;
//	for(b=1;b<a;b++){
//		cin>>arr[b];
//	}	
//	for(i=1;i<a;i++){
//	//	if(arr[i])
//		while(h<2*x&&j<a){
//			h+=arr[++j];
//		}
//	         h-=arr[i];
//			y=max(y,j-i+1);	
//	//	}
//		
//	}
//	printf("%d",y);
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int arr[100005]={0};
//int main(){
//	int a=0,h=0,b=0,x=0,y=0,i=0,j=0,q;
//	cin>>a>>x;
//	for(b=1;b<a;b++){
//		cin>>arr[b];
//	}	
//	for(i=1;i<a;i++){
//		//	if(arr[i])
//		while(h<2*x&&j<a){
//			h+=arr[++j];
//		}
//		h-=arr[i];
//		y=max(y,j-i+1);	
//		//	}
//		
//	}
//	printf("%d",y);
//	return 0;
//}
//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//long long a[500005]={0},b[500005];
//int c[500005]= {0};
//int find(long long x,int j){	
//	int left=0,right=j-1,t=0;int mid=0;
//	while(left<=right){
//    mid=left+((right-left)>>1);	
//	if(b[mid]>x){
//	right=mid-1;	
//	}	
//	else if(b[mid]<x){
//	left=mid+1;	
//	}	
//	else
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int i=0,j=0,k=0,l=0,p=0;
//	long long m;
//	cin>>i>>j;
//	for(k=0;k<i;k++)
//		cin>>a[k];
//	for(l=0;l<j;l++){
//		cin>>b[l];
//	}
//	sort(b,b+j);
//	for(p=0;p<i;p++){
//			c[p]=find(a[p],j);
//		cout<<c[p];
//	}
//	cout<<endl;
////	if(!check(a[n]))ans++;
////	for(int i=1;i<n;i++){
////		if(!check(a[i])&&check(a[i+1]))ans++;
////	}
//	for(l=0;l<i;l++){
//	if(!c[l])	m++;
//    while(!c[l])l++;
//	}
//	cout<<m;
//	
//	
//	
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//int n,sta[3000],m,arr[1000005];
//int main(){
//	int i=0,j=0,y=1e9,x=0,p=0,q=0;
//	cin>>n>>m;
//	for(i=0;i<n;i++)
//	{
//		cin>>arr[i];
//		sta[arr[i]]++;
//	   if(sta[arr[i]]==1)x++;
//			while(x==m)
//			{
//				sta[arr[j]]--;
//				if(sta[arr[j]]==0)x--;
//				if(y>i-j+1)
//					{	p=i+1;
//						q=j+1;
//					y=i-j+1;
//					}
//				j++;	
//	}
//	   }   
//	cout<<q<<' '<<p;
//	return 0;
//}
//if(sta[arr[i]]==1){
//			x++;
//			while(x==m)
//			{
//				if(y>i-j+1){
//					{	p=i+1;
//						q=j+1;
//					}
//				sta[arr[j]]--;
//				if(sta[arr[j]]==0)
//                    x--;
//				//	j++;
//			
//					
//				}	
//				j++;
//			}
//		}

//#include<stdio.h>
//#include<string.h>
//void vmax(char str[]){
//	int i=0,j=0,star=0,end=0,len=0;
//	while(str[i]){
//		j=i;	
//		while(str[j]!=' '&&str[j])
//		{
//			j++;
//		}	
//		if(j-i+1>len){
//			len=j-i+1;
//			star=i;
//			end=j;
//		}
//		i=j;
//        if(str[j])
//		i++;
//	}
//	while(star<end){
//		printf("%c",str[star++]);
//	}
//}
//
//char str[5000]="";	
//int main(){
//    gets(str); 
//    vmax(str);
//	return 0;
//}
//int i=0,j=0,k=0,max=0,star=0,end=0;
//
//for(i=0;;i++)
//#include<bits/stdc++.h>
//using namespace std;
//long long arr[200004];int c,target,n=0;
//int find(long long x){
//	int l=0,r=n-1,mid,cou=0,h=1;
//	while(l<=r){
//	mid=l+((r-l)>>1);
//	if(x>arr[mid]) l=mid+1;
//	else if(x<arr[mid])r=mid-1;	
//	else {
//		cou++;
//		while(arr[mid-h]==x&&x-h>=0)
//		{cou++,h++;}
//		h=1;
//		while(arr[mid+h]==x&&x+h<=n-1)
//		{	cou++,h++;}
//		return cou;
//	}
//	}
//	return 0;
//}
//int main(){
//	long long m=0,i=0,j=0,a;
//	cin>>n>>c;
//	for(i=0;i<n;i++){
//		cin>>arr[i];	
//	}
//	sort(arr,arr+n);
//	for(a=0;a<n;a++){
//    	for(m=0;m<find(arr[a]-c);m++)
//		  j++;
//		if(arr[a]-c==arr[c])
//	       j--;
//	}
//    cout<<j;
//	return 0;
//}
//#include<bits/stdc++.h>
//#include<map>
//using namespace std;
//map<long long,long long>a;long long arr[200005];
//int main(){
//	int n,c,i,k,l;long long j=0；
//	cin>>n>>c;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//		a[arr[i]]++;
//	}
//	for(i=0;i<n;i++){
//		j+=a[arr[i]-c];
//	}
//	cout<<j;
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int a=0,b=0;char u[20]="";
//    char day[10][20]={{"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"}};	
//	scanf("%s",u);
//	for(b=0;b<7;b++){
//		if(strcmp(u,day[b])==0)
//		{a++,printf("%d\n",b);
//		}
//	}
//	if(a==0)
//		printf("输入错误\n");
//	return 0;
//}
//#include<stdio.h>
//char max(int x,int y){
//	char c='>';
//	if(x<y)
//    	c='<';
//	else if(x==y)
//		c='=';
//	return c;
//}
//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	printf("a%cb",max(a,b));
//	
//	return 0;
//}
//#include <stdio.h>
//int a[1000]={1};int wei=1;
//void chen(int g,int x){
//	int i=0;
//	if(g<=x){
//	for(i=0;i<wei;i++){
//		a[i]*=g;
//	}
//	for(i=0;i<wei;i++){
//		a[i+1]+=a[i]/10;
//		a[i]%=10;
//	}	
//	
//		chen(g+1,x);
//	}
//	
//	
//}
//
//
//int main( )
//{
//	int n,i,f=1;
//	printf("请输入一个非负整数：");
//	scanf("%d",&n);
//	chen(2,n);
//	return 0;
//}

//#include <stdio.h>
//#include<math.h>
//bool is_prime(int x){
//	int i=2,j=0;
//	if(x==2)
//		return true;
//	for(i=2;i<x;i++){
//		if(x%i==0)
//			return false;
//	}
//	return true;
//}
//int main( )
//{
//	int j=0,n,i,flag,temp;
//	scanf("%d%d",&flag,&temp);
//	printf("最小前十个\n");
//	for(i=flag;i<=temp;i++)
//	{	if(is_prime(i))
//	{	printf("%-4d ",i);
//	     j++;
//		if(j==10)
//		{printf("\n");
//		break;
//		}
//		}
//	}
//	j=0;
//	printf("最大前十个\n");
//	for(i=temp;i>=flag;i--)
//	{	if(is_prime(i))
//	{	printf("%-4d ",i);
//		j++;
//		if(j==10)
//		{printf("\n");
//			break;
//		}
//	}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	
//	int c[5]={1,2,3,4};
//	
//	
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};           
//	printf("%d %d %p",sizeof(arr[1]),sizeof(c),arr[1]);
//	
//	return 0;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//long long m,sum,n;int arr[1000005];
//int main(){
//	int i=0,j=0,q=0,p=0,maxn=0,minn=0,mid=0;
//	cin>>n>>m;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//		maxn=arr[maxn]>arr[i]?maxn:i;
//		minn=arr[minn]<arr[i]?minn:i;
//	
//	}
//	while(j>=maxn&&j<=minn){
//		sum=0;
//	j=arr[minn]+((arr[maxn]-arr[minn])>>1);
//	for(i=0;i<n;i++){
//		sum+=(arr[i]-(j))>0?arr[i]-(mid):0;
//	}
//	if(sum<m)
//		j=arr[minn]+((j-arr[minn])>>1);
//	else if(sum>m)
//		j=arr[maxn]+((j-arr[maxn])>>1);	
//	else
//		break;
//	}
//	cout<<j;
//	return 0;
//}

//#include<stdio.h>
//int arr[1000]={1};
//int wei=1,n=0;
//void jie(int x){
//	int i=0,j=0,m=0;
//	if(x==n+1){
//		printf("%d!=",n);
//		for(i=wei-1;i>=0;i--)
//		printf("%d",arr[i]);
//		return ;}
//	for(i=0;i<wei;i++)
//	{
//		arr[i]*=x;
//	}
//	while(j<wei||arr[j]!=0)
//	{
//		if(arr[j]>9)
//		{
//			arr[j+1]+=arr[j]/10;
//			arr[j]%=10;
//			if(j+1==wei)
//				wei++;
//		}
//		j++;	
//	}
//	jie(x+1);
//}
//int main()
//	{
//		int i=0,f=1;
//		printf("请输入一个非负整数：");
//		scanf("%d",&n);
//		jie(1);
//		return 0;
//	}
//	
	
//#include<stdio.h>
//float dot_prod(float x[10],float y[10]);
//int main( )
//{
//	float a[10]={0},b[10]={0};
//	int i=0;
//	printf("请输入a的值\n");
//	for(i=0;i<10;i++)scanf("%f",&a[i]);
//	printf("请输入b的值\n");
//	for(i=0;i<10;i++)scanf("%f",&b[i]);
//	printf("a和b的内积为%f",dot_prod(a, b));
//	return 0;
//}
//float dot_prod(float x[10],float y[10])
//{
//	
//	float sum = 0;
//	for(int i= 0; i<10; i++)
//	sum +=x[i]*y[i];
//	return sum;
//}

//#include<stdio.h>
//int f_ack(int,int,int);
//
//int main()
//{
//	
//	int n,x,y;
//	printf("请依次输入n,x,y的值：");
//	scanf("%d %d %d",&n,&x,&y);
////*****************************************************
//	while (n<0 || x<0 || y<0)
//	{
//		printf("输入有误，请重新依次输入n,x,y的值：");
//		scanf("%d %d %d",&n,&x,&y);
//	}
//	int result = f_ack(n,x,y);
//	printf ("阿克玛函数值为%d",result);
//return 0;
//}
//int f_ack(int n,int x,int y)
//{
//	if(n==0){
//		return x+1;
//	}
//	
//	else if(y==0){
//		switch(n){
//		case 1:return x;	
//		case 2:return 0;		
//		case 3:return 1;		
//		default:return 2;		
//		}
//	}
//	else
//		return f_ack(n-1,f_ack(n,x,y-1),x);
//}
//
//#include <stdio.h>
//#define MAXN 10
//
//void ArrayShift( int a[], int n, int m );
//
//int main()
//{
//	int a[MAXN], n, m;
//	int i;
//	
//	scanf("%d %d", &n, &m);
//	for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
//	
//	ArrayShift(a, n, m);
//	
//	for ( i = 0; i < n; i++ ) {
//		if (i != 0) printf(" ");
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}
//void ArrayShift( int a[], int n, int m )
//{
//	int i;
//	int b[10];
//	for(i=0;i<n;i++)
//		b[(i+m)%n]=a[i];
//	for(i=0;i<n;i++)
//		a[i]=b[i];
//}


//#include<stdio.h>
//int main(){
//	int a[11]={0};
//    int b=0;
//	for(int i=0;i<10;i++){
//		scanf("%d",&b);
//		a[]++;
//	}
//	for(int i=0;i<10;i++)
//      printf("%d ",a[i]);
//		return 0;
//}
//int max(int x,int y){
//	return x>y?x:y;
//}
//#include<stdio.h>
//int main(){
//	int a=0,b=0;
//	scanf("%d%d",&a,&b);
//	printf("最大值是%d",max(a,b));
//	
//	
//	return 0;
//}
//#include<stdio.h>
//int findmax(int a,int b)
//{
//	int i=1,c;
//	int min=a>b?b:a;
//	for(i=1;i<=min;i++){
//		if(a%i==0&&b%i==0)
//			c=i;
//	} 
//	
//	return c;
//}
//int findmin(int a,int b){
//	int c,m,n,i;
//	i=b*a;
//	m=a>b?a:b;
//	for(c=i;c>=m;c--){
//		if(c%a==0&&c%b==0)
//			n=c;
//	}
//	return n;
//	
//}
//int main(){
//	
//	int a=0,b=0,c=0;
//	scanf("%d%d",&a,&b);
//	printf("最大公因数是%d，最小公倍数是%d",findmax(a,b),findmin(a,b));
//	
//	
//	
//	return 0;
//}
//#include<stdio.h>
//void fact(int x){
//    int i=1,s=1;
//	while(i<=x)
//	{
//		s*=i++;
//		printf("%d\n",s);
//	}
//}
//int main(){
//	int a;scanf("%d",&a);
//	fact(a);
//	return 0;
//}
//#include<stdio.h>
//int fect(int x){
//	int sum=0,b=0,j=1,l=1;
//	for(b=1;b<=x;b++){
//		sum+=(l*=b);
//	}
//return sum;	
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",fect(n));
//	
//	
//	return 0;
//}

//#include<stdio.h>
//int findmax(int a,int b)
//{
//	int i=1,c;
//	int min=a>b?b:a;
//	for(i=1;i<=min;i++){
//		if(a%i==0&&b%i==0)
//			c=i;
//	} 
//	
//	return c;
//}
//int findmin(int a,int b){
//	int c,m,n,i;
//	i=b*a;
//	m=a>b?a:b;
//	for(c=i;c>=m;c--){
//		if(c%a==0&&c%b==0)
//			n=c;
//	}
//	return n;
//	
//}
//int main(){
//	
//	int a=0,b=0,c=0;
//	scanf("%d%d",&a,&b);
//	printf("最大公因数是%d，最小公倍数是%d",findmax(a,b),findmin(a,b));
//	
//	
//	
//	return 0;
//}

//#include<stdio.h>
//findmax(int x,int y){
//
//	if(x>y)
//		return findmax(x-y,y);
//    else if(x<y)
//		return findmax(y-x,x);
//	else
//	return y;
//}
//int main(){
//	
//	
//	
//	int a=0,b=0,c=0;
//	scanf("%d%d",&a,&b);
//	printf("最大公因数是%d",findmax(a,b));
//	
//	
//	return 0;
//}

//#include<stdio.h>	
//int main(){
//	char a[5][20]={{"i "},{"am "},{"a "},{"smart "},{"man!"}};
//	for(int i=0;i<5;i++){
//		printf("%s",a[i]);
//	}
//	
//}

//#include<stdio.h>	
//
//int main(){
//    	int i=0,j,h;
//	for(h=5;;h++){
//		i=h;
//		for(j=0;j<5;j++){
//		if((i-1)%5==0&&i>5){
//			i=(i-1)*(4.0/5.0);
//		}
//		else
//		goto l;
//			
//		
//		}
//		if(j==5)break;
//	l:	;
//	
//	}
//printf("%d",h);
//	return 0;
//}


//#include<stdio.h>	
//int year(int x){
//	if(x==1)return 10;
//	else return year(x-1)+2;
//}
//
//
//int main(){
//
//	printf("%d",year(5));
//	
//	
//	return 0;}


//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu(){
//	printf("************请输入你的选择*************************\n");
//	printf("***************************************************\n");
//	printf("**************1.开始游戏***************************\n");
//	printf("***************************************************\n");	
//	printf("**************2.退出游戏***************************\n");	
//	
//}
//int mach(int x){
//	int i=1,j,k;
//	if((30-x)%3==1)
//		printf("%d\n",x+1);
//	else if((30-x)%3==2)
//	{i=2;
//		printf("%d\n%d\n",x+1,x+2);
//	}
//	elseaq
//	{
//		i=rand()%2+1;
//        for(j=0;j<i;j++){
//			printf("%d\n",x+1+j);
//		}
//		
//	}
//	return i+x;
//}
//int main(){
//	int sum=0,i=0,j=0,o=0,e=0,v=0,h=0;
//	srand((unsigned) time(NULL));
//	
//	do{
//	      menu();
//	    scanf("%d",&i);
//	switch(i){
//	case 1:	
//	o=rand()%2;	
//	while(sum<30){
//		//system("cls");
//		if(o%2==0)
//		{	printf("愚蠢的人类该你了\n你准备报几个数\n");
//			scanf("%d",&j);
//			printf("报吧\n");
//			for(h=0;h<j;h++)
//				scanf("%*d");
//			sum+=j;
//		}
//		else{
//			printf("该聪明的电脑报了\n");
//	        sum=mach(sum);
//		}
//		o++;
//	//	if(v%2==0)system("cls");
//		
//	}
//		if(o%2==0)printf("聪明的电脑赢了\n");
//		else printf("人类赢了\n");
//		break;
//	case 2:printf("退出游戏\n");
//	default:printf("输入错误,请重新输入\n");
//	}
//	}
//	while(i!=2);
//	
//	return 0;
//}
//#include<stdio.h>
//void han(int x,char a,char b,char c){
//	if(x>=1){
//		han(x-1,a,c,b);
//		printf("%c->%c ",a,c);
//		han(x-1,b,a,c);
//		
//		
//	}
//	
//	
//	
//	
//}
//int main(){
//	
//	int n=0;
//	char a='a',b='b',c='c';
//	scanf("%d",&n);
//	han(n,a,b,c);
//	
//	
//	return 0;
//} 


//#include<stdio.h>
//Isprime(int x){
//	int i=2,j=0;
//	if(x<=2)return 0;
//	for(i=2;i<x;i++){
//		if(x%i==0)
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	
//	int i=0,m=0,n=0;
//	scanf("%d",&m);
//    if(Isprime(m)){
//		printf("%d is a prime number\n",m);
//	}
//	 else{
//	    printf("%d is not a prime number\n",m);	
//	}
//		return 0;
//	}
//	
//	
//#include<stdio.h>
//Isprime(int x){
//	int i=2,j=1;
//	if(x<=2)return j;
//	for(i=2;i<x;i++){
//		if(x%i==0)
//			j=0;
//	}
//	return j;
//}
//int main(){
//	
//	int i=0,m=0,n=0;
//	scanf("%d",&m);
//	if(Isprime(m)){
//		printf("%d is a prime number\n",m);
//	}
//	else{
//		printf("%d is not a prime number\n",m);	
//	}
//	return 0;
//}



//int main(){
//	
//	int i=0,m=0,n=0,sum=0;
//	scanf("%d",&m);
//	for(n=1;n<=m;n++)
//	{
//		Isprime(n);
//		sum+=n;
//	}
//	printf("%d\n",sum);
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int iswan(int x){
//	int i=1,sum=0;
//	for(i=1;i<x;i++){
//		if(x%i==0)sum+=i;
//		
//	}
//	if(sum==x)return x;
//	return 0;
//	
//}
// int Isprime(int x){
//	int i=2,t=(int)sqrt((double)x);
//	if(x==1)	L:return 0;
//	for(i=2;i<=t;i++){
//		if(x%i==0)
//		goto L;
//	}
//
//
//	return 1;
//}
//

//#include<stdio.h>
//#include<math.h>
//int Isprime(int x){
//	int i=2,t=(int)sqrt((double)x);
//	if(x==1)	L:return 0;
//	for(i=2;i<=t;i++){
//		if(x%i==0)
//			goto L;
//	}
//	
//	
//	return 1;
//}
//int arr[10000]={0};
//void fen(int x){
//    int i=0,n=0,m=x;
//	while(x>1){
//	for(i=2;i<=x;i++){
//		if(x%i==0){
//			arr[n++]=i,x/=i;
//		  break;
//		}
//	}	
//			
//	}
//	printf("%d=",m);
//	for(i=0;i<n;i++){
//		printf("%d",arr[i]);
//		if(i<n-1)printf("*");
//	}
//	
//	
//}
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main(){
//	
//	int a,b,m=0;
//	scanf("%d",&m); 
//	if(Isprime(m))printf("This is a prime number\n");
//	else{
//		fen(m);	
//	}
//	
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//#include<stdio.h>
//int main(){
//	srand((unsigned)time(NULL));
//	char rig[4][40]={{"Very good!"},{"Excellent!"},{"Nice work"},{"Keep up the good work!"}};
//	char wro[4][40]={{"NO,please try again."},{"Wrong.try once more."},{"Don't give up!"},{"Notcorrect.keep trying."}};
//	y:
//	int a=0,b=0,c=0,d=0,n=0,s=0,f=0,q=0;char arr[4]={'+','-','*','/'};
//	while(n++<10){
//		a=rand()%10+1,b=rand()%10+1;s=rand()%4,q=rand()%4;
//		printf("%d%c%d=?\n",a,arr[s],b);
//		scanf("%d",&c);
//	int arr1[4]={a+b,a-b,a*b,a/b};
//	if(c!=arr1[s])	printf("%s\n",wro[q]);
//    else
//	{
//		printf("%s\n",rig[q]);
//		d++;
//	}
//	}
//	//system("cls");
//	printf("得分是%d,正确率%.2lf",d,d*10.0);
//	putchar('%');putchar('\n');
//	if(d<=7){printf("正确率小于75%,请重新答题\n");goto y;}
//	return 0;
//	
//}
//int cai(int x){
//	int a=1,b=0,c=0;
//	for(a=1;a<=9;a++){
//		for(b=0;b<10;b++){
//			for( c=0;c<=9;c++){
//			
//				if(a*122+b*212+c*221==x)
//				return 100*a+10*b+c;
//			}
//		}
//			
//	}
//	
//	return 0;
//	
//}
//
//
//
//
//#include<stdio.h>
//int main(){
//	
//	int n=0;
//	scanf("%d",&n);
//	if(cai(n)){
//		printf("%d",cai(n));
//	}
//	else
//	printf("你算错了\n");	
//	
//	
//	return 0;
//}



//#include <stdio.h>
//int main()
//{ int max_value(int array[][4]);
//	int a[3][4]={{1,3,5,7},{2,4,6,8},
//		{15,17,34,12}}; 
//	printf("Max value is %d\n",max_value(a)); 
//	return 0;
//}
//
//int max_value(int array[][4])
//{  int i,j,max;
//	max = array[0][0];
//	for (i=0;i<3;i++)
//		for(j=0;j<4;j++)
//			if (array[i][j]>max) 
//				max = array[i][j]; 
//	return (max);
//}
//


//	
//#include<bits/stdc++.h>
//#include<stdio.h>
//using namespace std;
//double f(double a,double b,double c,double d,double i){
//	return a*i*i*i+b*i*i+c*i+d;
//
//
//}
//int main(){
//	double a,b,c,d,i=0,j=0,k=0,l=0,mid=0,z=0;
//	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
//	for(l=-100;l<=100;l++){
//		j=l+1;z=l;
//		if(!f(a,b,c,d,z)){k++;printf("%.2lf ",z);}
//	      if(f(a,b,c,d,z)*f(a,b,c,d,j)<0){
//			while(j-z>=0.001){
//				mid=(j+z)/2.0;
//				if(f(a,b,c,d,mid)*f(a,b,c,d,j)<=0){
//					z=mid;
//				}
//				else
//                     j=mid;
//				
//			}
//			  printf("%.2lf ",j);
//					k++;
//		}
//		if(k==3)break;	
//	}	
//	return 0;
//}

//#include<cstdio>
//double a,b,c,d;
//double fc(double x)
//{
//	return a*x*x*x+b*x*x+c*x+d;
//}
//int main()
//{
//	double l,r,m,x1,x2;
//	int s=0,i;
//	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);  //输入
//	for (i=-100;i<100;i++)
//	{
//		l=i; 
//		r=i+1;
//		x1=fc(l); 
//		x2=fc(r);
//		if(!x1) 
//		{
//			printf("%.2lf ",l); 
//			s++;
//		}      //判断左端点，是零点直接输出。
//		
//		//不能判断右端点，会重复。
//		if(x1*x2<0)                             //区间内有根。
//		{
//			while(r-l>=0.001)                     //二分控制精度。
//			{
//				m=(l+r)/2;  //middle
//				if(fc(m)*fc(r)<=0) 
//					l=m; 
//				else 
//					r=m;   //计算中点处函数值缩小区间。
//			}
//			printf("%.2lf ",r);  
//			//输出右端点。
//			s++;
//		}
//		if (s==3) 
//			break;             
//		//找到三个就退出大概会省一点时间
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//long long a=0,arr[100006];
//int main(){
//	int i=0,j=0,n=0,m=0,l=0;long long min=-1,max=0;
//	cin>>n>>m;
//	for(i=1;i<=n;i++){
//		cin>>arr[i];
//		if(max<arr[i])max=arr[i];
//		arr[i]+=arr[i]+arr[i-1];
//	}
//	max=arr[n];
//	while(min<max){
//		
//		
//		
//		
//	}
//	
//	
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int n,m,a[100005],l,r,mid,ans;
//inline bool check(int x)
//{
//	int tot=0,num=0;
//	for(int i=1;i<=n;i++)
//	{
//		if(tot+a[i]<=x)tot+=a[i];
//		else tot=a[i],num++;
//	}
//	return num>=m;
//}
//int main()
//{
//	scanf("%d%d",&n,&m);
//	for(int i=1;i<=n;i++)scanf("%d",&a[i]),l=max(l,a[i]),r+=a[i];
//	while(l<=r)
//	{
//		mid=l+r>>1;
//		if(check(mid))l=mid+1;
//		else r=mid-1;
//	}
//	cout<<l;
//	return 0;
//}
//
//#include<bits/stdc++.h>
//
//using namespace std;
//int n,m,arr[1000005],q;
//int main(){
//	int i=0,j=0,k=0;
//	cin>>n>>m;
//	for(i=1;i<=n;i++){
//		cin>>arr[i];
//	}
//	for(i=0;i<m;i++){
//	int l=0,r=n+1;
//	cin>>q;	
//	while(l+1!=r){
//		int mid=l+((r-l)>>1);
//		if(arr[mid]>=q){
//		r=mid;
//	}
//	else l=mid;
//	
//	}
//	if(arr[r]==q)cout<<r<<' ';
//	else cout<<-1<<' ';	
//		
//	}	
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//long long  m,n,arr[100005],sum,maxn;
//
//bool check(long long x){
//	long long s=0,num=0;int i=1;
//for(i=1;i<=n;i++){
//	if(s+arr[i]<=x)s+=arr[i];	
//    else {num++,s=arr[i];}
//	}
//	return num>=m;
//}
//int main(){
//	long long i=0,j=0,h=0,g=0,mid;
//	cin>>n>>m;
//    for(i=1;i<=n;i++){
//		cin>>arr[i];
//		maxn=maxn>arr[i]?maxn:arr[i];
//	//	arr[i]+=arr[i-1];
//		
//	}	
//	h=1e9+5;
//	while(maxn!=h){
//		 mid=(maxn+h)>>1;
//		if(check(mid)) maxn=mid+1;
//		else  h=mid-1;
//	}
//	cout<<h;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
long long  m,n,arr[100005],sum,maxn;

bool check(long long x){
	long long s=0,num=0;int i=1;
	for(i=1;i<=n;i++){
		if(s+arr[i]<=x)s+=arr[i];	
		else {num++,s=arr[i];}
	}
	return num>=m;
}
int main(){
	long long i=0,j=0,h=0,g=0,mid;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>arr[i];
		maxn=maxn>arr[i]?maxn:arr[i];
		//	arr[i]+=arr[i-1];
		g+=arr[i];
	}	
	h=g;
	while(maxn<=h){
		mid=(maxn+h)>>1;
		if(check(mid)) maxn=mid+1;
		else  h=mid-1;
	}
	cout<<maxn;
	return 0;
}


