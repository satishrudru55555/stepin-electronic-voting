#include<stdio.h>
#include<math.h>
int Andoperation(int a,int b)
{
    return(a&b);
}
int ORoperation(int a,int b)
{
    return(a|b);
}
int XORoperation(int a,int b)
{
    return(a^b);
}
int leftshiftoperation(int a)
{
    return(a<<1);
}
int Rightshiftoperation(int a)
{
    return(a>>1);
}
void bitwise_main()
{
    int operation;
    int a,b;
    printf("Welcome to bitwise operations\n");
    printf("Enter the option to perform operation\n");
    printf("1.AND operation\n");
    printf("2.OR operation\n");
    printf("3.XOR operation\n");
    printf("4.Leftshift operation\n");
    printf("5.Rightshift operation\n");
    printf("please select: \n");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:
    	printf("enter the value of a\n");
    	scanf("%d",&a);
    	printf("enter the value of b\n");
    	scanf("%d",&b);
        printf("a,b AND operation is%d",Andoperation(a,b));
        break;
        
        case 2:
    	printf("enter the value of a\n");
   	    scanf("%d",&a);
    	printf("enter the value of b\n");
    	scanf("%d",&b);
        printf("a,b OR operation %d",ORoperation(a,b));
        break;
        
        case 3:
 	    
    	printf("enter the value of a\n");
    	scanf("%d",&a);
    	printf("enter the value of b\n");
    	scanf("%d",&b);
        printf("a,b XOR operation %d",XORoperation(a,b));
        break;
        
        case 4:

    
    	printf("enter the value of a\n");
    	scanf("%d",&a);
        printf("a leftshift operation %d",leftshiftoperation(a));
        break;
        
        case 5:
 	    
    	printf("enter the value of a\n");
    	scanf("%d",&a);
        printf("a Rightshift operation %d",Rightshiftoperation(a));
        break;
        
        default:break;
        
    }
}