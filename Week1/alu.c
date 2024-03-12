#include <stdio.h>

int main() {
// Write C code here
int a, b, select;
int result;

printf("Please enter the value of a\n");
scanf("%d",&a);
printf("The value of a is %d\n",a);

printf("Please enter the value of b\n");
scanf("%d",&b);
printf("The value of a is %d\n",b);

printf("Please enter the value of operation where 1 is addition, 2 is subtraction, 3 is multiplication and 4 is division given that b is the denominator\n");

scanf("%d", &select);
printf("The value of select is %d\n",select);



if (select==1)

{
result=a+b;
}

else if (select==2)

{
result= a-b;
}

else if (select==3)

{
result=a*b;

}

else if (select==4)

{
result=a/b;

}

else

{
printf("Wrong");

}

printf("The result is %d\n",result);
return 0;

}
