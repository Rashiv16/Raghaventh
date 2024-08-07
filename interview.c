//Reverse a string using pointer:

/*#include<stdio.h>
#include<string.h>
void reversestring(char * str);
void main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    reversestring(str);
}
void reversestring(char *str)
{
    char *start=str;
    char *end=str+strlen(str)-1;
    char temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("The reversed string is %s\n",str);
}*/

//Dynamic Memory Allocation:

/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int)); //p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("The numbers are: ");
    for(i=0;i<n;i++)
        printf("%d\t",p[i]);
    printf("\n");
    free(p);
    p=NULL;
}*/

//Bubble sort:

/*#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    printf("Enter the numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    printf("\n");
}*/


// Remove duplicate elements in the string:

/*#include<stdio.h>
void main()
{
    char str[50],currentchar;
    char unique[256]={0};
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        currentchar=str[i];
        if(unique[currentchar]==0)
        {
            printf("%c",currentchar);
            unique[currentchar]=1;
        }
    }
    printf("\n");
}*/


//Call by Value:

/*#include<stdio.h>
void myfun(int a, int b);
void main()
{
    int a=5,b=2;
    myfun(a,b);
    printf("a=%d b=%d\n",a,b);
}
void myfun(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d\n",a,b);
}*/


//Call by Reference:

/*#include<stdio.h>
void myfun(int *a, int *b);
void main()
{
    int a=5,b=7;
    myfun(&a,&b);
    printf("a=%d b=%d\n",a,b);
}
void myfun(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d b=%d\n",*a,*b);
}*/

//Type conversion:

/*#include<stdio.h>
void main()
{
    // Implicit conversion:
    int a=10;
    char b='a';
    a=a+b;
    float c=a+1.0;
    printf("a=%d b=%f\n",a,c);

    //Explicit conversion:
    float a=1.5;
    int b = (int)a;
    printf("b=%d\n",b);

}*/

//Avoid structure pdding using attributes:

/*#include<stdio.h>
struct stu
{
    int i;
    char ch;
    float f;
}__attribute__((packed));
void main()
{
    struct stu a;
    printf("Size of A=%ld\n",sizeof(a));
}*/

//Print your name without using semicolon:

/*#include<stdio.h>
void main()
{
    if(printf("Raghaventh\n")){}
}*/

//Program to find largest number using Dynamic memory allocation:

/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i,max=0;
    printf("Enter the range: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        if(max<p[i])
            max=p[i];
    }
    printf("The maximum number is %d\n",max);
    free(p);
    p=NULL;
}*/

//Enum:

/*#include<stdio.h>
void main()
{
    enum day{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday}d;
    d=(Wednesday+Thursday)-Friday;
    printf("d=%d\n",d);
}*/

//Union:

/*#include<stdio.h>
union data
{
    int i;
    float f;
};
void main()
{
    union data stu;
    stu.f=31.16;
    stu.i=16;
    printf("%f %d \n",stu.f,stu.i);
}*/

//String Reverse:

/*#include<stdio.h>
void main()
{
    char a[50];
    int i,temp,end;
    printf("Enter the string: ");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0')
        i++;
    end=i;
    i=0;
    for(i=0;i<end/2;i++)
    {
        temp=a[i];
        a[i]=a[end-i-1];
        a[end-i-1]=temp;
    }
    printf("Reversed string is %s\n",a);
}*/

//Set a bit at given position:

/*#include<stdio.h>
void main()
{
    int n,p;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the position: ");
    scanf("%d",&p);
    n=n|(1<<p);
    printf("n=%d\n",n);
}*/


//Decimal to Binary:

/*#include<stdio.h>
void main()
{
    long long bin=0;
    int rem=0,n,i=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        bin=bin+rem*i;
        i=i*10;
    }
    printf("Binary is %lld\n",bin);
}*/

//Binary to Decimal:

/*#include<stdio.h>
#include<math.h>
void main()
{
    long long n;
    int rem=0,dec=0,i=0;
    printf("Enter the binary value: ");
    scanf("%lld",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        dec=dec+rem*pow(2,i);
        i++;
    }
    printf("%d\n",dec);
}*/
//Sum of series S=1,(1+2),(1+2+3),...(1+2+3+.....n):

/*#include<stdio.h>
void main()
{
    int n,overall_sum=0,term_sum=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        term_sum=i*(i+1)/2;
        overall_sum=overall_sum+term_sum;
    }
    printf("Sum is %d\n",overall_sum);
}*/

//Structure program to get input from the user:

/*#include<stdio.h>
struct stu
{
    int rollno;
    char sec;
    float avg;
};
void main()
{
    struct stu a;
    scanf("%d %c %f",&a.rollno,&a.sec,&a.avg);
    printf("%d %c %f\n",a.rollno,a.sec,a.avg);
}*/

//Void Pointer:

/*#include<stdio.h>
void main()
{
    int a=12, *ip=&a;
    float b=3.14, *fp=&b;
    void *vp;
    vp=&a;
    printf("a=%d\n",*(int *)vp);
    *(int *)vp=102;
    printf("a=%d\n",*(int *)vp);
    vp=&b;
    printf("b=%f\n",*(float *)vp);
}*/

//Find Even or Odd using Bitwise Operator:

/*#include<stdio.h>
void main()
{
    int a;
    int mask=0x1;
    printf("Enter the number: ");
    scanf("%d",&a);
    if((a&mask)==0)
        printf("%d is even\n",a);
    else
        printf("%d is not even\n",a);
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "student198\0";
    int i=0;
    while(str[i]!='\0')
        i++;
    printf("The length is %d\n",i);
}*/

//Swapping use bitwise operators:

/*#include<stdio.h>
void main()
{
    int a=10,b=16;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
}*/

/*#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int len,i,j;
    printf("Enter the string: ");
    fgets(a,50,stdin);
    len=strlen(a);
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%s\n",a);
}*/

/*#include<stdio.h>
void main()
{
    char a[50],current_char;
    char unique[256]={0};
    int i=0;
    printf("Enter the string: ");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        current_char=a[i];
        if(unique[current_char]==0)
        {
            printf("%c",current_char);
            unique[current_char]=1;
        }
        i++;
    }
    printf("\n");
}*/

/*#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for(i=0;i<13;i++)
    {
        while(n-values[i]>=0)
        {
            printf("%s",roman[i]);
            n=n-values[i];
        }
    }
    printf("\n");
}*/

/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void removeDuplicates(struct Node* head) {
    struct Node* current = head;
    struct Node* next_next;

    if (current == NULL)
        return;

    while (current->next != NULL) {
        if (current->data == current->next->data) {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        } else {
            current = current->next;
        }
    }
}

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;

    // Create a sorted linked list for testing
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);

    printf("Linked list before duplicate removal: ");
    printList(head);

    removeDuplicates(head);

    printf("\nLinked list after duplicate removal: ");
    printList(head);

    return 0;
}*/


//Multiplication using Bitwise

/*#include<stdio.h>
void main()
{
    int a,b,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        if(b&1)
            result+=a;
        a=a<<1;
        b=b>>1;
    }
    printf("%d\n",result);
}*/

//Double pointer

/*#include<stdio.h>
void main()
{
    int a=6;
    int* p;
    int **ptr;
    p=&a;
    ptr=&p;
    printf("a=%d\n",*p);
    printf("a=%d\n",**ptr);
}*/

//Break and Exit

/*#include<stdio.h>
void main()
{
    int a=5,i;
    for(i=0;i<a;i++)
    {
        if(i==3)
            break;
        printf("%d\n",i);
    }
    printf("This is the last line printing\n");
}*/

/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=5,i;
    for(i=0;i<a;i++)
    {
        if(i==3)
            exit(0);
        printf("%d\n",i);
    }
    printf("This is the last line printing\n");
}*/

//Print prime using function

/*#include<stdio.h>
void printprimes(int l_l, int u_l);
int isprime(int num);
void main()
{
    int l_l,u_l;
    printf("Enter lower limit and upper limit: ");
    scanf("%d %d",&l_l,&u_l);
    printprimes(l_l,u_l);
}

void printprimes(int l_l, int u_l)
{
    printf("The prime number are: ");
    while(l_l<=u_l)
    {
        if(isprime(l_l))
            printf("%d\n",l_l);
        l_l++;
    }
}

int isprime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}*/


//Structure with pointer

/*#include<stdio.h>
struct person
{
    int age;
    float weight;
};
void main()
{
    struct person person1;
    struct person *pptr;
    pptr=&person1;
    printf("Enter age: ");
    scanf("%d",&pptr->age);
    printf("Enter weight: ");
    scanf("%f",&pptr->weight);
    printf("%d\n%f\n",pptr->age,pptr->weight);
}*/

/*#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++)
        printf("%d\n",*p+i);
}*/

/*#include <stdint.h>

uint32_t littleToBigEndian(const uint8_t* ptr) {
    return (ptr[0] << 24) | (ptr[1] << 16) | (ptr[2] << 8) | ptr[3];
}


#include <stdio.h>

int main() {
    uint32_t littleValue = 0xDEADBEEF;
    uint32_t bigValue = __builtin_bswap32(littleValue);
    printf("Little-endian: 0x%X\n", littleValue);
    printf("Big-endian: 0x%X\n", bigValue);
    return 0;
}*/


//Structure

/*#include<stdio.h>
#pragma pack(1)
struct stu
{
    int rollno;
    float weight;
    char sec;
    double avg;
};
void main()
{
    struct stu a;
    printf("%zu\n",sizeof(a));
}*/


//union

/*#include<stdio.h>
union stu
{
    int rollno;
    float weight;
    double avg;
};
void main()
{
    union stu b;
    printf("%zu\n",sizeof(b));
}*/

//Bitfields

/*#include <stdio.h>
struct date {
	int d : 5;
	int m : 4;
	int y;
};
int main()
{
	printf("Size of date is %lu bytes\n",
		sizeof(struct date));
	struct date dt = { 31, 12, 2014 };
	printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
	return 0;
}*/


//Count 1 and 0 bit in number

/*#include<stdio.h>
void main()
{
    int n, o_count=0, z_count=0, i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<32;i++)
    {
        if(n&1)
            o_count++;
        else
            z_count++;
        n=n>>1;
    }
    printf("One count = %d and Zero count = %d\n",o_count,z_count);
}*/

//Swap the nibble

/*#include<stdio.h>
void main()
{
    int n=5;
    n=(n<<4)|(n>>4);
    printf("%d\n",n);
}*/

//Call by Value

/*#include<stdio.h>
void swap(int a, int b);
void main()
{
    int a=6,b=8;
    printf("Before swapping: a = %d and b = %d\n",a,b);
    swap(a,b);
    printf("In main function: a = %d and b = %d\n",a,b);
}

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping: a = %d and b = %d\n",a,b);
}*/

//Call by Reference

/*#include<stdio.h>
void myswap(int *a, int *b);
void main()
{
    int a=6, b=8;
    printf("Before swapping: a = %d and b = %d\n",a,b);
    myswap(&a,&b);
    printf("In main function: a = %d and b = %d\n",a,b);
}
void myswap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping: a = %d and b = %d\n",*a,*b);
}*/

//Fibonacci within range:

/*include<stdio.h>
void myfibonacci(int l_r, int u_r);
void main()
{
    int l_r,u_r;
    printf("Enter lower and upper range: ");
    scanf("%d %d",&l_r,&u_r);
    myfibonacci(l_r,u_r);
}
void myfibonacci(int l_r, int u_r)
{
    int prev1=0, prev2=1, current=0;
    if(prev1>=l_r && prev1<=u_r)
        printf("%d\n",prev1);
    while(current<=u_r)
    {
        current=prev1+prev2;
        prev1=prev2;
        prev2=current;
        if(current>=l_r && current<=u_r)
            printf("%d\n",current);
    }
}*/

/*#include <stdio.h>
int mystrlen(char *s) {
    int i = 0;
    while (*s) {
        i++;
        s++;
    }
    return i;
}
char *rev_substr(char *s, int len) {
    int i = 0;
    int j = len - 1;
    char temp;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}
char *rev_sentence(char *s) {
    int i, j = 0;
    int len = mystrlen(s);
    rev_substr(s, len);  // Reverse the whole string
    for (i = 0; i <= len; i++) {
        // A word is delimited by a space or the null character
        if (s[i] == ' ' || s[i] == '\0') {
            rev_substr(s + j, i - j);  // Reverse each word
            j = i + 1;
        }
    }
    return s;
}

int main() {
    char sentence[] = "I love you";
    rev_sentence(sentence);
    printf("%s\n", sentence);
    return 0;
}*/

/*#include<stdio.h>
char *rev_sentence(char *s);
int mylen(char *s);
char *rev_substr(char *s, int len);
void main()
{
    char sentence[]="Hii Rashiv";
    rev_sentence(sentence);
    printf("%s\n",sentence);
}
char *rev_sentence(char *s)
{
    int i,j=0;
    int len = mylen(s);
    rev_substr(s,len);
    for(i=0;i<=len;i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {
            rev_substr(s+j, i-j);
            j=i+1;
        }
    }
    return s;
}
int mylen(char *s)
{
    int i=0;
    while(*s)
    {
        i++;
        s++;
    }
    return i;
}

char *rev_substr(char *s, int len)
{
    int i=0;
    int j=len-1;
    char temp;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    return s;
}*/

/*#include <stdio.h>
#include <stdlib.h>

// Define the singly linked list node
struct Node
{
    int data;
    struct Node* next;
};

// Function to find the 4th last data
int find4thLast(struct Node* head)
{
    struct Node* p1 = head;
    struct Node* p2 = head;
    // Move p2 ahead by 4 nodes
    for (int i = 0; i < 4; ++i)
    {
        if (p2 == NULL)
        {
            printf("List has fewer than 4 nodes.\n");
            exit(1);
        }
        p2 = p2->next;
    }
    // Move both pointers until p2 reaches the end
    while (p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1->data;
}
// Example usage
int main()
{
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    // Add more nodes (you can modify this part as needed)
    // ...
    // Find the 4th last data
    int result = find4thLast(head);
    printf("4th last data: %d\n", result);
    // Clean up memory (free the linked list)
    // ...
    return 0;
}*/

// Sub using bitwise operaator:

/*#include<stdio.h>
void sub(int a, int b);
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sub(a,b);
}
void sub(int a, int b)
{
    while(b!=0)
    {
        int borrow=(~a)&b;
        a=a^b;
        b=borrow<<1;
    }
    printf("Difference is %d\n",a);
}*/

/*#include<stdio.h>
void main()
{
    unsigned int num = 1;
    char *byte = (char *)&num;
    if(*byte==1)
        printf("Little-endian\n");
    else
        printf("Big-endian\n");
}*/

//Pointer to array

/*#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int (*p)[5]=&a;
    for(int i=0;i<5;i++)
        printf("%d\n",(*p)[i]);
}*/

#include <stdio.h>
int main()
{
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;
    int* ptr_arr[3] = { &var1, &var2, &var3 };
    for (int i = 0; i < 3; i++)
        printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
    return 0;
}
