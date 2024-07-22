#include<stdio.h>
#include<math.h>
/////////////////////////////////QUESTION 1/////////////////////////////////////////////////////////////////
/*void swapwithout(int a, int b);
int main() {
    int a, b;
    printf("enter your two variables : ");
    scanf("%d, %d", &a, &b);
    printf("variables before swapping are : %d and %d\n", a, b);
    swapwithout(a, b);

    return 0;
}
void swapwithout(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    printf("variables after swapping are : %d and %d", a, b);
}*/
/////////////////////////////////QUESTION 2/////////////////////////////////////////////////////////////////
/*int printfactorial(int n){
    int fact= 1;
    for(int i=n; i>=1; i--){
        fact = fact*i;
    }
    printf("factorial of input number is %d", fact);
}
int main() {
   int n;
   printf("enter your number: ");
   scanf("%d", &n);
   printfactorial(n);
   return 0;
}*/
/////////////////////////////////QUESTION 3/////////////////////////////////////////////////////////////////
/*void displayprime(int n){
    int count= 0;
    for(int i=n; i>0; i--){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is a prime number", n);
    } else{
        printf("%d is not a prime number.", n);
    }
}
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d", &n);
    displayprime(n);

    return 0;
}*/
/////////////////////////////////QUESTION 4/////////////////////////////////////////////////////////////////
/*int firstnprime(int n){
    int count = 1;
    int i=2;
    while(count<=n) {
        int temp = i;
        int c = 0;
        for(int k=temp;k>0;k--) {
            if(temp%k==0) {
                c++;
            }
        }
        if(c==2) {
            printf("%d\t", i);
            count++;
        }
        i++;
    }
}
int main() {
    int n;
    printf("enter number of prime numbers you want to display: ");
    scanf("%d", &n);
    printf("FIRST %d PRIME NO.S ARE:\n", n);
    firstnprime(n);
    return 0;
}*/
/////////////////////////////////QUESTION 5/////////////////////////////////////////////////////////////////
/*int findhcf(int a, int b){
    int temp;
    if(a==0||b==0){
        return 0;
    }
    if(a>b){
      while(b!=0){
        temp = a%b;
        a=b;
        b=temp;
        }
        return a;
    }
    if(b>a){
        while(a!=0){
        temp = b%a;
        b=a;
        a=temp;
        }
        return b;
    }
}
int main() {
    int a, b;
    printf("enter two numbers : ");
    scanf("%d, %d", &a, &b);
    printf("hcf of the input numbers is %d",findhcf(a, b));
    return 0;
}*/
/////////////////////////////////QUESTION 6/////////////////////////////////////////////////////////////////
/*int findlcm(int a, int b){
    int temp;
    for(int i=1; ;i++){
        temp = a*i;
        if(temp%b==0){
            break;
        }
    }
    return temp;
}
int main() {
    int a, b;
    printf("enter two numbers : ");
    scanf("%d, %d", &a, &b);
    printf("lcm : %d", findlcm(a, b));
    return 0;
}*/
/////////////////////////////////QUESTION 7/////////////////////////////////////////////////////////////////
/*void fib(int n){
    int temp;
    int a = 0;
    int b = 1;
    int count = 2;
    printf("0\t1\t");
    while(count !=n) {
        int temp = a + b;
        printf("%d\t", temp);
        a=b;
        b=temp;
        count ++;
    }
    return;
}
int main() {
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}*/
/////////////////////////////////QUESTION 8/////////////////////////////////////////////////////////////////
/*int sumofdigits(int n){
    int sum = 0;
    int rem, temp=n;
    while(temp>0) {
        rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
    }
    return sum;
}
int main() {
    int n;
    printf("enter your number:");
    scanf("%d", &n);
    printf("sum of digits is %d", sumofdigits(n));
    return 0;
}*/
/////////////////////////////////QUESTION 9/////////////////////////////////////////////////////////////////
/*int factorial(int n) {       //FACTORIAL
    if(n==0) {
        return 1;
    }
    return n*factorial(n-1);
}
int main() {
    int n;
    printf("ENTER YOUR NUMBER:");
    scanf("%d", &n);
    printf("Factorial of %d is : %d", n, factorial(n));
    return 0;
}*/
/*int fib(int n){              //FIBONACCI
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1 + fibnm2;
    return fibn;
}
int main() {
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d\t", fib(i));
    }
    return 0;
}*/
/*int summation(int n) {       //SUMMATION
    if(n==1){return 1;}
    return n+summation(n-1);
}
int main() {
    int n;
    printf("enter n:");
    scanf("%d", &n);
    printf("summation of n is %d",summation(n));
    return 0;
}*/
/////////////////////////////////QUESTION 10//////////////////////////////////////////////////// 
/*int stairs(int n){
  if(n==1 || n==0) {return 1;}
  if(n<0) {return 0;}
  int count = stairs(n-1) + stairs(n-2) + stairs(n-3);
  return count; 
}
int main() {
  int n;
  printf("enter n:");
  scanf("%d", &n);
  printf("no.of ways = %d", stairs(n));
  return 0;
}*/
/////////////////////////////////QUESTION 11////////////////////////////////////////////////////
/*void towerofhanoi(int n, char s, char h, char d){
    if(n==0) {return;}
    towerofhanoi(n-1,s,d,h);
    printf("%c to %c\n", s, d);
    towerofhanoi(n-1,h,s,d);
}
int main() {
    int n;
    printf("Enter no. of disks:");
    scanf("%d", &n);
    printf("SOURCE: A\nHELPER: B\nDESTINATION: C\n");
    towerofhanoi(n,'A','B','C');
    int moves = pow(2,n) - 1;
    printf("TOTAL MOVES = %d", moves);
    return 0;
}*/
/////////////////////////////////QUESTION 12////////////////////////////////////////////////////
/*int mazepath(int a, int b) {
  if(b==1 || a==1) {return 1;}
  int ways = mazepath(a,b-1) + mazepath(a-1,b); 
  return ways;
}
int main() {
  int a, b;
  printf("enter rows and column:");
  scanf("%d, %d", &a, &b);
  printf("no.of ways = %d", mazepath(a,b));
  return 0;
}*/
