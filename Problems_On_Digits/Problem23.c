//Write a program which accept number from use and count frequency of 2 in it

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet=CountTwo(iValue);

    printf("count of two's in number are : %d\n",iRet);

    return 0;

}