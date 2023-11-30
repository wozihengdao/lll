//#include<iostream>
//#define N 100010
//int arr[N];
//int main(){
//	int i=0,n,m,r,l;
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=n;i++){
//		scanf("%d",&arr[i]);
//		arr[i]+=arr[i-1];
//	}
//	for(i=0;i<m;i++){
//		scanf("%d %d",&r,&l);
//		printf("%d\n",arr[l]-arr[r-1]);
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//#define N 1010
//int arr[N][N];
//int main(){
//	int i=0,j=0,k=0,q=0,m,n,x1,x2,y1,y2;
//	scanf("%d%d%d",&n,&m,&q);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=m;j++){
//			scanf("%d",&arr[i][j]);
//			arr[i][j]=arr[i][j]-arr[i-1][j-1]+arr[i-1][j]+arr[i][j-1];
//		}
//	}
//	for(i=0;i<q;i++){
//		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
//		printf("%d\n",arr[x1-1][y1;-1]+arr[x2][y2]-arr[x2][y1-1]-arr[x1-1][y2]);
//
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int arr[5005][5005];
//int main(){
//	int R,i,j,q,z,d=-1;long long N;
//	scanf("%d%lld",&R,&N);
//	for(q=0;q<R;q++){
//		scanf("%d%d%d",&i,&j,&z);
//		arr[i+1][j+1]+=z;
//
//	}
//
//	for(i=1;i<=5001;i++){
//		for(j=1;j<=5001;j++){
//			arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
//		}
//	}
//	if(N>=5001){d=arr[5000][5000];goto p;}
//	for(i=N;i<=5001;i++){
//		for(j=N;j<=5001;j++){
//			q=arr[i][j]-arr[i-N][j]-arr[i][j-N]+arr[i-N][j-N];
//			d=max(d,q);
//		}
//	}
//	p:
//	printf("%d",d);
//
//	return 0;
//}
//
//#include<iostream>
//#define N 100010
//int arr[N];
//int main(){
//	int n,m,q,i,l,r;
//	scanf("%d%d",&n,&m);
//
//	for(i=1;i<=n;i++)	scanf("%d",&arr[i]);
//    for(i=0;i<m;i++){
//		scanf("%d%d%d",&l,&r,&q);
//		arr[l]+=q;
//		arr[r+1]-=q;
//	}
//	for(i=1;i<=n;i++){arr[i]+=arr[i-1];
//	printf("%d ",arr[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#define N 1010
//int A[N][N],B[N][N];
//void insert(int x1,int y1,int x2,int y2,int t){
//	A[x1][y1]+=t;
//	A[x1][y2+1]-=t;
//	A[x2+1][y1]-=t;
//	A[x2+1][y2+1]+=t;
//	
//	
//	
//}
//int main() {
//   int m,n,i,j,q,t,x1,y1,x2,y2;
//	scanf("%d%d%d",&n,&m,&q);
//    for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			scanf("%d",&t);
//			insert(i,j,i,j,t);
//		}
//	}
//    for(i=0;i<q;i++){
//    scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&t);
//		insert(x1,y1,x2,y2,t);	
//	} 
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			A[i][j]+=A[i-1][j]+A[i][j-1]-A[i-1][j-1];
//			printf("%d ",A[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include<iostream>
//#define N 100010
//int arr[N];
//using namespace std;
//int quick(int l,int r,int k){
//	if(l>=r)return arr[l];
//	int i=l-1,j=r+1,x=arr[l+r>>1];
//	while(i<j){
//		do i++;while(arr[i]<x);
//		do j--;while(arr[j]>x);
//		if(i<j)swap(arr[i],arr[j]);
//	}
//	int sl=j-l+1;
//	if(sl>=k)return quick(l,j,k);
//	return quick(j+1,r,k-sl);
//	
//}
//
//int main(){
//	
//	int i=0,k,m,n;
//	scanf("%d%d",&n,&k);
//	for(i=0;i<n;i++)scanf("%d",&arr[i]);
//	
//	
//	printf("%d",quick(0,n-1,k));
//}
//
//#include<iostream>
//using namespace std;
//int main(){
//	int i=0,j=0;
//	for(i=0;i<=200;i++){printf("%d",i);
//	puts("hhh");
//	
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#define N 100010
//int arr[N],b[N];
//int main(){
//	int i=0,j=0,k=0,n=0,m=0;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)scanf("%d",&arr[i]);
//	for(i=0;i<n;i++){
//	  b[arr[i]]++;
//		while(b[arr[i]]>1){
//			
//			b[arr[j]]--;
//			j++;
//		}
//		m=max(m,i-j+1);
//		
//	}
//	cout<<m;
//	
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int i=0,n=0,j=0,t=0;
//scanf("%d",&n);
//	t=n*(n/2);
//	if(n%2)t+=n/2+1;
//	printf("%d\n",t);
//	string q="C.";
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%c",q[(i+j)%2]);
//		}
//		puts("");
//		
//	}
//	
//	return 0;
//}

//#include<iostream>
//
//int main(){
//	
//	printf("NCSTCPC\nICPC\nCCPC\nlanqiao\nGPLT\nAstar\nHBCPC\n");
//	
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int arr[15][26];
//int main(){
//	int i=0,j=0,c=0,q=0,t=0;
//	for(i=1;i<=10;i++)
//		for(j=1;j<=15;j++){
//			scanf("%d",&arr[i][j]);
//			arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
//		}
//	t=arr[10][8];
//	if(t>800)t+=arr[10][12]-arr[10][8];
//	if(arr[10][12]-arr[10][8]>400)t+=arr[10][15]-arr[10][12];
//	cout<<t<<endl;
//	for(i=1;i<=10;i++){
//		q=arr[i][8]-arr[i-1][8];
//		if(arr[i][8]-arr[i-1][8]>80)
//		{
//			q+=arr[i][12]+arr[i-1][8]-arr[i][8]-arr[i-1][12];
//			
//		}
//		if(arr[i][12]+arr[i-1][8]-arr[i-1][12]-arr[i][8]>40)
//			q+=arr[i][15]+arr[i-1][12]-arr[i][12]-arr[i-1][15];
//		cout<<q<<' ';
//	}
//	
//	
//	return 0;
//}

//
//#include<iostream>
//#include<string.h>
//using namespace std;
//string change(string A,int x){
//	int n=A.size()-1;
//	if(x>0){
//		while(n>=0){
//			if(A[n]>='A'&&A[n]<='Z')
//			A[n]+=x;
//			n--;
//		}}
//	else{
//		while(n>=0){
//			if(A[n]>='a'&&A[n]<='z')
//				A[n]+=x;
//		         n--;
//	}
//			 
//	}
//	return A;
//}
//int main(){
//	string A;int i=0,t=0;
//	cin>>t;
//	for(i=0;i<t;i++){
//		cin>>A;
//		int j=A.size()-1,num=0;
//		while(j>=0){
//			if(A[j]>='A'&&A[j]<='Z')
//				num++;
//			j--;
//		}
//		if(2*num>=A.size())A=change(A,-32);
//		else A=change(A,32);
//		cout<<A<<endl;
//	}
//
//
//	
//	return 0;
//}

//
//#include<iostream>
//
//#define N 100005
//int main(){
//	int m=0,n,i=0,l=0,r=0,j=0,x;
//	char a=' ';
//
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=;i++){
//		scanf("%d",&x);insert(i,i,x);	
//	}
//	for(i=0;i<m;i++){
//		scanf("%c",&a);
//		if(a=='A'){
//			scanf("%d%d%d",&l,&r,&x);
//			insert(l,r,x);
//		}
//		else{
//			
//		}
//		
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main(){
//    char*a="abcde";
//	printf(a);
//	printf("\n");
//	a="bnm";
//	printf("%s\n",a);
//	return 0;
//}

//#include<stdio.h>
//#define N 1005
//#define M 1005
//int arr[N][M]={0};
//int main(){
//	int n,m,c,i,j,q,t=-1e9,x=0,y=0;
//	scanf("%d%d%d",&n,&m,&c);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			scanf("%d",&arr[i][j]);
//			arr[i][j]=arr[i][j]+arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
//		}	
//	}
//	
//	for(i=c;i<=n;i++){
//		for(j=c;j<=m;j++){
//		q=arr[i][j]+arr[i-c][j-c]-arr[i][j-c]-arr[i-c][j];	
//		if(t<q){
//			t=q;
//			x=i-c+1;
//	        y=j-c+1;
//		}		
//		}
//		
//	}
//	printf("%d %d",x,y);
//	
//}
//#include<stdio.h>
//#define N 1005
//#define M 1005
//int arr[N][M]={0};
//long long q;
//int main(){
//	int n,m,c,i,j,t=-1e9,x=0,y=0;
//	scanf("%d%d%d",&n,&m,&c);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			scanf("%d",&arr[i][j]);
//			arr[i][j]=arr[i][j]+arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
//		}	
//	}
//	
//	for(i=c;i<=n;i++){
//		for(j=c;j<=m;j++){
//			q=arr[i][j]+arr[i-c][j-c]-arr[i][j-c]-arr[i-c][j];	
//			if(t<q){
//				t=q;
//				x=i-c+1;
//				y=j-c+1;
//			}		
//		}
//		
//	}
//	printf("%d %d",x,y);
//	
//}
