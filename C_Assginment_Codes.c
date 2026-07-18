1.Write a program to perform all arithmetic operations using a menu-driven
approach.

#include <stdio.h>

int main() {
    int ch;
    float a,b,result;
    printf("====MENU====\n");
    printf("1.Addition\n");
    printf("2.Substaction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter a Choice");
    scanf("%d",&ch);
    
    printf("Enter 2 numbers");
    scanf("%f,%f",&a,&b);
    
    switch(ch){
        case 1:
        result = a+b;
        printf("Addition of numbers is %f\n",result);
        break;
        
        case 2:
        result = a-b;
        printf("Substraction of  numbers is %f\n",result);
        break;
        
        case 3:
        result=a*b;
        printf("Multiplication of numbers is %f\n",result);
        break;
        
        case 4:
        result=a/b;
        printf("Division of numbers is %f\n",result);
        break;
        
        default :
        printf("Wrong Choice");
    }
    
    return 0;
}





2. Write a C program to calculate the factorial of a number using a loop.

#include <stdio.h>

int main() {
    int n,i;
    long long fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld", n, fact);

    return 0;
}





3. Write a C program to reverse a given number.

#include <stdio.h>

int main() {
    int n;
    int rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse number = %d",rev);

    return 0;
}






4. Write a C program to generate the Fibonacci series up to N terms.

#include <stdio.h>

int main() {
   int n,a=0,b=1,c,i;
   
   printf("Enter a number of terms:");
   scanf("%d",&n);
   
   printf("Fibonacci Series =");
   
   for(i=1;i<=n;i++){
       printf("%d", a);
       c=a+b;
       a=b;
       b=c;
   }

    return 0;
}





6. Write a C program to find the sum of the digits of a given number.

#include <stdio.h>

int main() {
 int n,digit,sum=0;
 
 printf("Enter a Numebr");
 scanf("%d",&n);
 
 while(n>0){
     digit=n%10;
     sum+=digit;
     n=n/10;
 }
printf("Sum of Digit =%d",sum);
    return 0;
}



7. Find the largest among three numbers.

#include <stdio.h>

int main() {
 int a,b,c;
 
 printf("Enter 3 Numbers");
 scanf("%d%d%d",&a,&b,&c);
 
 if(a>b && a>c){
     printf("a is Greater",a);
 }
 else if(b>c){
     printf("b is Greater",b);
 }
 else{
     printf("c is Greater",c);

 }
    return 0;
}




8. Check whether a year is a leap year.

#include <stdio.h>

int main() {
 int year;
 
 printf("Enter a Year");
 scanf("%d",&year);
 
 if((year%400==0)|| (year % 4 == 0 && year % 100 != 0)){
     printf("This is a Leap Year",year);
 }
 else {
     printf("This is not a Leap Year",year);
 }
    return 0;
}



9. Check whether a character is an alphabet, digit, or special symbol.

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character");
    scanf("%c",&ch);
    
    if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')){
        printf("This is a Alphabet",ch);
    }
    else if (ch>='0' && ch <='9'){
        printf("This is Digit",ch);
    }
    else{
        printf("This is Symbol",ch);
    }
    return 0;
}







10. Implement a simple calculator using switch-case.
#include <stdio.h>

int main() {
    int ch;
    float a,b,result;
    printf("====MENU====\n");
    printf("1.Addition\n");
    printf("2.Substaction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter a Choice");
    scanf("%d",&ch);
    
    printf("Enter 2 numbers");
    scanf("%f,%f",&a,&b);
    
    switch(ch){
        case 1:
        result = a+b;
        printf("Addition of numbers is %f\n",result);
        break;
        
        case 2:
        result = a-b;
        printf("Substraction of  numbers is %f\n",result);
        break;
        
        case 3:
        result=a*b;
        printf("Multiplication of numbers is %f\n",result);
        break;
        
        case 4:
        result=a/b;
        printf("Division of numbers is %f\n",result);
        break;
        
        default :
        printf("Wrong Choice");
    }
    
    return 0;
}



11. Display the grade of a student based on percentage.

#include <stdio.h>

int main() {
    float per;
    
    printf("Enter a percentage");
    scanf("%f",&per);
    
    if(per>=90&& per<=100)
    printf("Greade A++");
    else if (per>=80)
    printf("Grade A");
    else if (per >=70)
    printf("Grade B");
    else if (per >=55)
    printf("Grade C");
    else if (per >=35)
    printf("Grade D");
    else 
    printf("Fail");

    return 0;
}



12.Half Pyramid using *

#include <stdio.h>

int main() {
    int i,j;
    
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}







13.Inverted Half Pyramid

#include <stdio.h>

int main() {
    int i,j;
    
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}








14. Full Pyramid
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



15. Hollow Pyramid

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        // Print leading spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print hollow pyramid
        for(j = 1; j <= (2 * i - 1); j++) {

            if(j == 1 || j == (2 * i - 1) || i == n)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}






16.Floyd’s Triangle

#include <stdio.h>

int main() {
    int i,j,n=5,num=1;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num ++;
        }
        printf("\n");
    }
    return 0;
}



17.pascle triangle

#include <stdio.h>

int main() {
    int i, j, n = 5;
    int num;

    for(i = 0; i < n; i++) {

        // Print spaces
        for(j = 0; j < n - i - 1; j++)
            printf(" ");

        num = 1;

        // Print Pascal's Triangle
        for(j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}





18.Number Pyramid

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}



19.Diamond Pattern

#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Upper Pyramid
    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower Pyramid
    for(i = n - 1; i >= 1; i--) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}







20.Hollow Square Pattern

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {

            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}