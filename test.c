////#include<stdio.h>
////int main(){
////	int i=1;
////	while(i<=10){
////		if(i%2==0){
////			printf("number is even,%d\n",i);
////		}
////		else{
////			printf("number is odd,%d\n",i);
////			
////		}
////	i++;
////	}
////	return 0;
////}
//
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int arr[5]={1,2,3,3,4};
//	int sum =0;
//	size_t length=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<length;i++){
//		if(arr[i]%2==0){
//		    sum= sum+arr[i];
//		}
//	else{
//	}
//		
//	}
//	printf("%d",sum);
//	return 0;
//	
//}
//#include<stdio.h>
//#include<string.h>	
//int main(){
//	char str[]="abc";
//	char revstr[]="";
//    size_t length=strlen(str);
//    
//    
//    int i=0;
//	for(i=0;i<=length-1;i++){
//		   revstr[i]=str[length-1-i];
//	}
//	printf("%s\n",revstr);
//	return 0;
//}
//	if(revstr==str){
//		printf("it is a pallindrome");
//	}
//	else{
//		printf("it is not a pallindrome");
//	}
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int a;
//	printf("input a number:");
//	scanf("%d",&a);
//	int sum =1;
//    int i;	
//	 for ( i = a ; i > 0; i--) {
//	 		
//	 		
//           sum = sum*i; // Accumulate the sum
//    }
//printf("%d\n",sum); 
//	
//	
//return 0;
//  }
//  	


//#include<stdio.h>
//int main(){
//    int num;
//    printf("give any number:");
//    scanf("%d",&num);
//	int n1=0;
//    int n2=1;
//    int n3=n1+n2;
//    int i;
//    for(i=0;i<=num;i++){
//    n[i]=n[i-1]+n[i-2];
//}
//printf("%d",n);
//
//}

//int main(){
//	int year;
//	printf("print the year u want to know is a leap year or not:");
//	scanf("%d",&year);
//	if(year%4==0){
//		printf("the year u gave was a leap year");
//	}
//	else{
//		printf("the year u gave was not a leap year");
//	}
//}


//int main(){
//	int a=1;
//	int b=4;
//	printf("%d\n",a+b);
//    printf("%d\n",a-b);
//    printf("%d\n",a*b);
//    printf("%d\n",a/b);
//}
#include<string.h>
//int main(){
//	char arr[]={1,2,4,6,8};
//	int sum=0;
//	int i;
//	size_t length=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<=length;i++){
//		sum =sum + arr[i];
//	}
//printf("%d",sum);
//
//}

//int main(){
//	char arr[]={1,2,4,6,8};
//	char large=arr[0];
//	int i;
//	size_t length=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<=length;i++){
//		if(arr[i]<large){
//	        large=large;
//		}
//		else{
//			large=arr[i];
//		}
//	}
//printf("%d",large);
//}

//int main(){
//	int a=1;
//	int b=4;
//	a=(a+b);
//	b=a-b;
//	a=a-b;
//	
//	printf("%d\n",a);
//    printf("%d\n",b);
//}
	

//int main(){
//	int a=1;
//	int b=4;
//	int c=a+b;
//	a=c-a;
//	b=c-b;
//	printf("%d\n",a);
//    printf("%d\n",b);
//}
//int main(){
//     char a='u';
//     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
//     	printf("it is a vowel");
//	 }
//	 else{
//	 	printf("it is a consonant");
//	 }
//}


//int main(){
//	int cel=37;
//	int far=cel*1.8;
//	far=far+32;
//	printf("%d",far);
//}
//int main (){
//	int a;
//	printf("print a naturaL number");
//	scanf("%d",&a);
//	int sum=0;
//	int i;
//	for(i=1;i<=a;i++){
//		sum =sum +i;
//	}
//printf("%d",sum);
//}
//int main(){
//	char str='a';
//	printf("%c%d",str,(int)str);
//}
//int main(){
//     int a=345;
//     if(a>'a'&&a<'z'||a>'A'&&a<'Z'){
//     	printf("it is a character");
//	 }
//	 else if(a>0&&a<9){
//	 	printf("it is a number ");
//	 }
//     else{
//     	printf("it is a special  chaRACTEWR");
//	 }
//}

                                                                    
//int main(){
//	int a=254;
//	int i;
//	int count=0;
//	for (i=1;i<=a;i++){
//		if (a/i>0){
//			count =count +1;
//		}
//		else {
//			
//		}
//	}
//
//printf("%d",count);
//}


//int main(){
//	int num ;
//	int i;
//	int sum;
//	printf("print any number ");
//	scanf("%d",&num);
//	size_t len=sizeof(num)/sizeof(num[0]);
//	for(i=0;i<len;i++){
//		sum=sum+num[i]**len;
//	} 
//	if(sum==num){
//		printf("is a armstrong ");
//	}
//	else{
//		printf("is not a armsatrong");
//	}
//}
//




//int main(){
//	char arr[]={1,2,3,4,5,6};
//	int i;
//	size_t len=sizeof(arr)/sizeof(arr[0]);
//	int high =arr[0];
//	for (i=0;i<len;i++){
//		if(arr[i]<high){
//			high=high;
//		}
//		else{
//			high=arr[i];
//		}
//	}
//	printf("%d",high);
//}
//int  main(){
//	int n1;
//	int n2;
//	printf("enter the first number");
//	scanf("%d",&n1);
//	printf("enter the second number");
//	scanf("%d",&n2);
//	int i;
//	int j;
//	int count=0;
//	for(i=n1;i<=n2;i++){
//	    if (i<=0){
//	    	printf("invalid numbers");
//		}	
//		else{	
//			for(j=2;j<i;j++){
//				if(i%j!=0){
//					count=count+1;
//				}
//				else{
//					
//				}
//			}
//		}
//		
//	}
//printf("%d",count);
//}
//
//int main(){
//	char arr[]={1,2,3,4,5,6,78};
//	size_t len=sizeof(arr)/sizeof(arr[0]);
//	int i;
//	int average=0;
//	for(i=0;i<len;i++){
//		average=average+arr[i];
//	}
//printf("%d",average/2);	
//}
//doubt<<<<<<<<<<<<<<<<<<<<<<
//int main(){
//    char str[]="hello";
//	int i;
//	size_t len=strlen(str);
//	char revstr[]="";
//	for(i=0;i<len;i++){
//		revstr[i]= str[len - i];
//	}
//	
//printf("%s\n",revstr);
//}
//#include <stdio.h>
//int main() {
//    int num=123;
//    int reversed=0;
//    while(num!=0){
//        reversed=reversed*10+num%10;
//        num=(num-num%10)/10;
//    }
//    printf("%d",reversed);
//return  0;
//}
#include<stdio.h>
int main(){

int a=5;
int fact=1;
int i;
for(i=a;i>0;i--){
	fact=fact*i;
}
printf("%d",fact);
return 0;
}

































































































































































































































































































































































































































































































































































































































































