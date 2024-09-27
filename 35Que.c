//1]#include <stdio.h>
int main()
{
   int marks=26;
   if(marks<60){
     printf("f");
   }
   else if(marks<69&&marks>60){
     printf("D");
   }
   else if(marks<79&&marks>70){
     printf("c");
   }
   else if(marks<89&&marks>80){
     printf("b");
   }
   else{
     printf("a");
   }
}
//2]
	#include<stdio.h>
int main(){
  int num;
  scanf("%d",&num);
  int i;
  if(i>0){
    printf("number is positive");
    
  }
  else if(num<0){
    printf("number is negative");
  }
  else{
    printf("number is 0");
  }
}

//3]
#include<stdio.h>
int main(){
  int side1=20;
  int side2=20;
  int side3=20;
  if(side1==side2&&side1==side3){
      printf("it is an equilateral triangle");
  }
  else if(side1==side2||side1==side3||side3==side2){
      printf("it is an isoceles triangle");
      
  }
  else{
      printf("it is an scalene triangle");
  }
}
//4]
#include<stdio.h>
int main(){
  char side1='c';
 
  if(side1=='a'||side1=='e'||side1=='i'||side1=='o'||side1=='u'){
      printf("Vowel");
  }
  
  else{
      printf("Consonant");
  }
}
//5]
#include<stdio.h>
int main(){
  int side1=17;
 
  if(side1>=18){
      printf("Eligible");
  }
  
  else{
      printf("Not Eligible");
  }
}
//6]

#include <stdio.h>
#include <string.h>

int main() {
    char admin[] = "abcd";
    char pass[] = "1234";
    if (strcmp(admin, "abcd") == 0 && strcmp(pass, "1234") == 0) {
        printf("Login successful");
    } else {
        printf("Login Unsuccessful");
    }
    return 0;
}
//7]
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
char color[100];
printf("enter color:");
scanf("%s",&color);
if  (strcmp(color, "red") == 0){
    printf("stop");
}
else if  (strcmp(color, "yellow") == 0){
    printf("slow down");
}
else if (strcmp(color, "green") == 0){
    printf("go");
}
else{
    printf("error");
}
    return 0;
}
//8]
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,2,3,4,5};
int avg=0;
int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    avg=avg+arr[i];
}
avg=avg/len;
printf("%d",avg);

    return 0;
}
//9]
#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,4,5,8,6,9,3,2};
int temp;
int len=sizeof(arr)/sizeof(arr[1]);
    for(int j=0;j<len;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
for(int i=0;i<len;i++){
    printf("%d\n",arr[i]);
}
    return 0;
}


//10]
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int len= sizeof(arr)/sizeof(arr[0]);
	int evennum=0;
	int odd=0;
	int i;
	for( i=0;i<len;i++){
		if(arr[i]%2==0){
			evennum++;
			
		}else{
			odd++;
		}
	}
	printf("even: %d",evennum);
	printf(",odd: %d",odd);
	return 0;
}
//11]
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int uniqueArr[7];
    int uniqueIndex = 0;

    for (int i = 0; i < 7; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == uniqueArr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            uniqueArr[uniqueIndex++] = arr[i];
        }
    }

    for (int i = 0; i < uniqueIndex; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");

    return 0;
}
//12]
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a new array with an additional space for the new number
    int newSize = size + 1;
    int newArr[newSize];

    // Copy the old array to the new array
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Add the number 6 at the end
    newArr[newSize - 1] = 6;

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
//13]
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for(int i = 0 ;i<length;i++){
      if(arr[i]==3){
        count = count+1;
      };
    };
    if(count>0){
      printf("TRUE");
    }
    else{
      printf("FALSE");
    }
    return 0;
}
//14]
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4};
    int newarr[] = {};
    int num =0;;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    newarr[0]= num ;
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i<length;i++){
      newarr[i+1]=arr[i];
    }
    for (int j = 0; j < (length+1); j++) {
        printf("%d ", newarr[j]);
    }
    return 0;
}
//15]
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int newarr[] = {};
    int length = (sizeof(arr) / sizeof(arr[0]))-1;
    
    for(int i = 0 ; i<length;i++){
      newarr[i]=arr[i];
    };
    for (int j = 0; j < length; j++) {
        printf("%d ", newarr[j]);
    };
    return 0;
}
//16]
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    int positive =0 ;
    int negative = 0 ;
    for(int i = 0 ; i<length;i++){
        if(arr[i]>0){
          positive++;
        }
    };
    if(length==positive){
      printf("TRUE");
    }
    else{
      printf("FALSE");
    };
    
    return 0;
}
//17]
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,6,-1,2,-10,0};
    int length = sizeof(arr) / sizeof(arr[0]);
    int positive =0 ;
    int negative = 0 ;
    for(int i = 0 ; i<length;i++){
        if(arr[i]>0){
          positive++;
        }
        else{
          negative++;
        };
    };
    printf("\n no. of positive no. : %d",positive);
    printf("\n no. of negative no. : %d",negative);

    
    return 0;
}
//18]
#include<stdio.h>

int main(){
    int arr[5], i;
    printf("Enter any 10 array elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    printf("\nValues stored at even position are:\n");
    for(i=0; i<5; i++)
    {
        if(i%2==0)
            printf("%d ", arr[i]);
    }
    
    return 0;
}
//19]
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("false\n");
            return 0; 
        }
    }
    printf("true\n");

    return 0;
}
//20]
#include <stdio.h>

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];  
    int min = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

    
    int difference = max - min;
    printf("The difference between the maximum and minimum elements is: %d\n", difference);

    return 0;
}
//21]
#include <stdio.h>

int main() {
    char str[100] ;
    printf("Enter a string: ");
    scanf("%s", str); 

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {  
            str[i] = str[i] - 32;  
        }
    }


    printf("Uppercase string: %s\n", str);

    return 0;
}
//22]
#include <stdio.h>

int main() {
    char str[100];  
    int length = 0;

    printf("Enter a string: ");

    scanf("%s", & str);

    while (str[length] != '\0') {  
        length++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}
//23]
#include <stdio.h>

int main() {
    char str1[100];  
    char str2[100];
    char str3[100];

    printf("Enter a string1: ");
    scanf("%s", & str1);
    printf("Enter a string2: ");
    scanf("%s", & str2);
    int length = 0 ;
    int length2 = 0 ;
    while (str1[length] != '\0') {  
        length++;
    };
    while (str2[length2] != '\0') {  
        length2++;
    };
    for(int i = 0 ; i<length;i++){
        str3[i]=str1[i];
    };
    for(int j = 0 ; j<length2;j++){
        int q = length +j;
        str3[q]=str2[j];
    };
    printf("%s",str3);

    return 0;
}
//24]
#include <stdio.h>
#include <ctype.h>  // For isspace() function
int main() {
    char str[100];
    int start = 0, end, i;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); 
    while (isspace(str[start])) {
        start++;
    }
    end = start;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    while (end >= start && isspace(str[end])) {
        end--;
    }
   for (i = 0; start <= end; start++, i++) {
        str[i] = str[start];
    }
    str[i] = '\0';
    printf("Trimmed string: \"%s\"\n", str);
     return 0;
}
//25]
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    char words[10][20];
    int i = 0, j = 0, k = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); 
    // Split the string into words
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[k][j++] = str[i]; 
        } else if (j > 0) {
            words[k][j] = '\0';
            k++;                
            j = 0;                  
        }
        i++;
    }
    words[k][j] = '\0'; 
    printf("The words are:\n");
    for (i = 0; i <= k; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
//26]
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    printf("Enter a string: ");
    scanf(" %s", & str); 
    char str2; 
    printf("Enter a letter: ");
    scanf(" %c", & str2); 
    int length = 0 ;
    while (str[length] != '\0') {  
        length++;
    };
    int y = length-1;
    if(str[y]==str2){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
//27]
#include <stdio.h>

int main() {
    char filename[100];
    char extension[20];
    int i = 0, j = 0;
    int dotIndex = -1; 
    printf("Enter the filename: ");
    scanf("%s", filename);
    while (filename[i] != '\0') {
        if (filename[i] == '.') {
            dotIndex = i;
        }
        i++;
    }
     if (dotIndex != -1) {
        for (j = 0; filename[dotIndex + 1 + j] != '\0'; j++) {
            extension[j] = filename[dotIndex + 1 + j];
        }
        extension[j] = '\0'; 
        printf("File extension: %s\n", extension);
    } else {
        printf("No file extension found.\n");
    }

    return 0;
}
//28]
#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Enter num1: ");
    scanf("%d", & num1);
    printf("Enter num2: ");
    scanf("%d", & num2);
    if(num1>num2){
        printf("the largest no. is : %d",num1);
    }else if(num2>num1){
        printf("the largest no. is : %d",num2);
    }else{
         printf("both are equal");
    }
    return 0;
}
//29]
#include <stdio.h>

int main() {
    int nums[100]; 
    int n;          
    int target;      
    int i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Output pairs of indices:\n");
    int found = 0;  
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j); // Print the indices of the pair
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found that sum to %d.\n", target);
    }

    return 0;
}
//30]
#include <stdio.h>

int main() {
    int n;                // Input integer
    int evenSum = 0;     // Sum of even digits
    int oddSum = 0;      // Sum of odd digits

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Process each digit
    while (n != 0) {
        int digit = n % 10; // Get the last digit

        if (digit % 2 == 0) {
            evenSum += digit; // Add to evenSum if digit is even
        } else {
            oddSum += digit;  // Add to oddSum if digit is odd
        }

        n /= 10; // Remove the last digit
    }

    // Output the sums
    printf("Sum of even digits: %d\n", evenSum);
    printf("Sum of odd digits: %d\n", oddSum);

    return 0;
}
//31]
#include <stdio.h>

int main() {
    int n;                // Input integer
    int evenSum = 0;     // Sum of even digits
    int oddSum = 0;      // Sum of odd digits

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Process each digit
    while (n != 0) {
        int digit = n % 10; // Get the last digit

        if (digit % 2 == 0) {
            evenSum += digit; // Add to evenSum if digit is even
        } else {
            oddSum += digit;  // Add to oddSum if digit is odd
        }

        n /= 10; // Remove the last digit
    }

    // Output the sums
    printf("Sum of even digits: %d\n", evenSum);
    printf("Sum of odd digits: %d\n", oddSum);

    return 0;
}
//32]
#include<stdio.h>
int main(){   
    int age ;
      printf("Please enter your Age: ");
        scanf("%d", &  age);
    if(age<13){
            printf("CHILD");
    }else if (age<20 && age>=13){
        printf("TEENAGER");
    }else if (age<60 && age>=20){
        printf("ADULT");
    }else if (age>=60){
        printf("SENIOR");
    }else{
        printf("invalid Input");
    };
    return 0;
}
//33]
#include<stdio.h>
int main(){   
    int year ;
      printf("Please enter your year: ");
        scanf("%d", &  year);
    if(year%100==0){
            printf("yes it is centurian year");
    }else{
        printf("no it is not centurian year");
    };
    return 0;
}
//34]
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]); 
    printf("Array elements: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    int firstElement = arr[0];         
    int lastElement = arr[length - 1]; 
    printf("First element: %d\n", firstElement);
    printf("Last element: %d\n", lastElement);

    return 0;
}
