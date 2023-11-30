//#include<stdio.h>
//#include<string.h>
//void res(char x[]){
//	int y=strlen(x);
//	int i=0,j=y-1;
//	for(i=0;i<y/2;i++){
//		char g=x[i];
//		x[i]=x[j-i];
//		x[j-i]=g;
//	}
//}
//
//int main(){
//	
// 	char a[]="i am bad boy.";
//	gets(a);
//	res(a);
//	printf("%s",a);
//	
//	return 0; 
//}

//#include<stdio.h>
//
//int main(){
//	int a,n,sum=0,y;
//	scanf("%d %d",&a,&n);
//	y=a;
//	for(int i=0;i<n;i++){
//		sum+=y;
//		y*=10;
//		y+=a;
//	}
// 	printf("%d",sum);
//	
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main(){
//	int n=0,mon=0,c=0,d=0;
//	scanf("%d",&mon);
//    while(mon>0){
//		n+=mon;
//		c+=mon;
//		mon=n/2;
//		n%=2;
//		
//		
//	}	
//	printf("%d",c);
//	 
//	return 0;
//}


//#include<stdio.h>
//void move(int arr[],int len){
//	int i=0,j=len-1,p=0;
//	while(p<j){
//		if(arr[p]%2==0){
//	     int q=arr[p];
//			arr[p]=arr[j];
//			arr[j]=q;
//		j--;	
//		}
//		else if(arr[p]%2==1){
//	p++;	
//		}
//	}
//	
//	
//}
//int main(){
//	
//	int arr[]={1,1,6,9,9,98,78,45,46,213,1,1,1,1,1,1};
//	int i=sizeof(arr)/sizeof(arr[0]);
//	move(arr,i);
//	for(int j=0;j<i;j++)printf("%d ",arr[j]);
//	
//	return 0;
//}


#include<stdio.h>
#include<string.h>

//void rev(char a[],int len,int num){
//	int i,j;char u=' ';
//	char t[len]="12346";
//	for(j=0;j<num;j++){
//		
//		u=a[0];
//		for(i=0;i<len-1;i++){
//			a[i]=a[i+1];
//		}
//		a[i]=u;
//	//	printf("%s\n",a);
//	}
//	
//printf("%s",t);	
//	
//}
void re(char*a,char*b){
int i=b-a;	
	for(int j=0;j<i/2;j++){
		char q=*(a+j);
		*(a+j)=*(b-j-1);
		*(b-j-1)=q;
	}
}



void rev(char*a,int len,int num){
	if(num>len)num%=len;
	re(a,a+num);
	re(a+num,a+len);
	re(a,a+len);
	

	
}
int main(){
	
	char a[30]="";
	int i=0,j=0,num=0,g=0;
	gets(a);scanf("%d",&num);
	i=strlen(a);
	rev(a,i,num);
	printf("%s",a);
	
	return 0;
}



