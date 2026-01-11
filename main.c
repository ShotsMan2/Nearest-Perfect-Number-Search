#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,sum,j;

    printf("sayi giriniz ");
    scanf("%d",&sayi);

    i=sayi-1;



    for(;i>=1;i--){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("sonuc: %d",i);
            break;
        }
    }

    return 0;
}
