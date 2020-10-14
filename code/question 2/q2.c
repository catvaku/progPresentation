#include<stdio.h>
#include<math.h>
int main()
{
    int low, high, number, num, rem, count=0, result=0;
    scanf("%d %d", &low, &high);
    for(number = low+1; number < high; number++){
        num = number;
        while(num != 0)
        {
            num /= 10;
            count++;
        }
        num = number;
        while(num != 0)
        {
            rem = num % 10;
            result = result + pow(rem, count);
            num /= 10;
        }
        if(result == number)
        printf("%d\n", number);
        count = 0;
        result = 0;
    }
}