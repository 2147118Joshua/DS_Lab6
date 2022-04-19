#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    int a[100];
    int i;
    int j;
    int c=0;
    int p=0;
    int k=1;
    int sum=0;
    int ct=0;
    float per;
 
    srand(time(NULL));
    for (i = 0; i < 100; i++)
        a[i] = (rand() % (200 - 0 + 1)) + 0;
        
    for(i = 0; i<100; i++)
        {
            int num;
            num= (rand() % (200 - 0 + 1)) + 0;
            for(j = 0; j<100; j++){
                if(a[j]==num){
                    c++;
                    break;
                }
                k++;
                p++;
            }
            sum=sum+k;
            ct++;
            k=0;
        }
    printf("\nNumber of searches Completed>>%d\n",p);
    printf("Number of successful searches>>%d\n",c);
    per=(float)c/p * 100;;
       printf("percentage of successful searches>>%.1f percentage\n",per);
    printf("Average number of searches>>%d\n",sum/ct);
    return 0;
}
