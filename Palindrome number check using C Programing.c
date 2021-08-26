#include<stdio.h>
#include<conio.h>
int main() 
{
  int n, rev = 0, rem, g;
    printf("Enter a number: ");
    scanf("%d", &n);
    g = n;

    // reversed integer is stored in reversed variable
    while (n != 0) 
	{
        rem = n % 10;
        rev = rev*10 + rem;
        n = n/10;
    }

    // palindrome if orignal and reversed are equal
    if (g == rev)
        printf("%d is a palindrome number.", g);
    else
        printf("%d is not a palindrome number.", g);

    return 0;
}
