//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void re(char*a,char*b){
////		assert(a!=NULL);
//	int i=b-a;	
//	for(int j=0;j<i/2;j++){
//		char q=*(a+j);
//		*(a+j)=*(b-j-1);
//		*(b-j-1)=q;
//	}
//}
//void rev(char*a,int len,int num){
//   // assert(a!=NULL);
//	if(num>len)num%=len;
//	re(a,a+num);
//	re(a+num,a+len);
//	re(a,a+len);	
//}
//int isll(char a[],char b[]){
//	int i=0,j=0,m=0;
//	j=strlen(a);
//	for(i=0;i<j;i++){
//		if(strcmp(a,b)==0)return 1;
//		rev(a,j,1);
//	}
//	return 0;
//}
//int main(){
//	char a[]="abcdef";
//	char b[]="defabc"; 
//	if(isll(a,b))printf("Yes\n");
//	else printf("No!\n");
//	return 0;
//}
//int main(){
//	
//	char a[30]="";
//	int i=0,j=0,num=0,g=0;
//	gets(a);scanf("%d",&num);
//	i=strlen(a);
//	rev(a,i,num);
//	printf("%s",a);
//	
//	return 0;
//}
//散步翻转法，转三次；

//#include<stdio.h>
//#include<string.h>
//int Hash(char*a,char*b)
//{
//	int i=0;char* z=a;
//	while(*(b+i)){
//		if(*(z+i))
//		{
//			if(*(z+i)==*(b+i))
//			{
//				i++;
//			}
//			else if(i!=0){
//				z++;i=0;
//			}
//			else
//				z++;
//			
//		}
//		else
//			return 0;
//	}
//	
//	return 1;
//}
//
//int main()
//{
//	char a[1005]="";char arr[200010]={0};
//	char b[1005]="";
//	int c=0,d=0,e=0,f=0,g=0,h=0;
//	scanf("%d",&c);getchar();
//	for(e=0;e<c;e++)
//	{
//		scanf("%d",&d);	getchar();
//		gets(a);
//		for(f=0;f<d;f++)
//		{
//			gets(b);
//			arr[g++]=Hash(a,b);
//		}
//		
//	}
//	for(h=0;h<g;h++)
//	{
//		if(arr[h])
//			printf("duile\n");
//		else
//			printf("cuole\n");
//		
//	}
//	
//	
//	
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main(){
//	int a=0,b=0,c=0,i=0,j=0;char*p;
//	char str[200005]="",str1[200005]="";
//	scanf("%d\n%d",&a,&b);getchar();
//    for(i=0;i<a;i++){
//		gets(str);
//		for(j=0;j<b;j++){
//			gets(str1);
//			p=strstr(str,str1);
//			if(p!=NULL)printf("duile\n");
//			else printf("cuole\n");
//		}
//	}
//	return 0;
//}返回类参数；

//#include<stdio.h>
//int is(int arr[3][3],int *x,int *y,int tar){
//	int a=0,b=*y-1;
//	while(a<*x&&b>=0){
//		if(tar>arr[a][b])
//		{
//			a++;
//		}
//		else if(tar<arr[a][b]){
//			b--;
//		}
//		else{
//			*x=a,*y=b;
//			return 1;}
//	}
//	
//	return 0;
//	
//	
//}
//int main(){
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int x=3,y=3;
//	int target=0;
//	scanf("%d",&target);
//	if(is(arr,&x,&y,target)){
//		printf("找到了，下标为%d %d\n",x,y);
//	}
//	else printf("找不到\n");	
//	
//	return 0;
//}
//#include<assert.h>
//int my_strlen(const char *a){
//	assert(a != NULL);
//	int i=0;
//	while(*a){
//		i++;
//		a++;
//	}
//	return i;
//	
//}
//#include<stdio.h>
//int main(){
//	
//	int i=0;
//	char a[]="12345679";
//	printf("%d",my_strlen(a));
//	
//	
//	return 0;
//}
//void ooo(int n) {
//	
//	int arr[n];
//	printf("%d",arr[0]);
//}
//#include<stdio.h>
//int main() {
//	
//	int a = 10;
//	ooo(a);
//	
//	return 0;
//}

//#include<stdio.h>
//int my_strlne(char*a){
//	
//	if(!*a)return 0;
//	else return my_strlne(a+1)+1;
//}
//
//int main(){
//	char b[]="123456789";
//     int a=0;	
//	printf("%d",my_strlne(b));
//	
//	
//	return 0;
//}
//
//#include<assert.h>
//#include<stdio.h>
//char* my_strcpy(char *a,const char*b){
//	assert(a!=NULL);
//	assert(a!=NULL);
//	char *u=a;
//	//拷贝原来的代码到目的地
//	while(*(a++)=*(b++));
//	//返回目的字符串起始地址
//	return u;
//}
//
//int main(){
//	
//	char a[100]="",b[100]="";
//	gets(a),gets(b);
//	printf(my_strcpy(a,b));
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//char *my_strcat( char*a,const char*b){
//	int i=strlen(a);char*q=a;a+=i;
//       while(*(a++)=*(b++));	
//	return q;
//	
//	
//}
//int main(){
//	
//	char a[50]="liu yu heng ";
//	char b[5][20]={{"is a "},{"smart "},{"boy.\n"}};
//	for(int i=0;i<3;i++)printf(my_strcat(a,b[i]));
//
//	
//	return 0;
//}
//
//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//char *my_strcat( char*a,const char*b){
//	int i=strlen(a);char*q=a;a+=i;
//	while(*(a++)=*(b++));	
//	return q;
//	
//	
//}
//int main(){
//	
//	char a[50]="liu yu heng ";
//	char b[5][20]={{"is a "},{"smart "},{"boy.\n"}};
//	for(int i=0;i<3;i++)printf(my_strcat(a,b[i]));
//	
//	
//	return 0;
//}
