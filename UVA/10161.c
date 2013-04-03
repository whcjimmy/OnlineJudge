#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int value,i,j,x,y;
    while(scanf("%lld",&value)){
        if(value!=0){
            i=x=y=1;
            while(i*i<=value){
                i++;
            }
            i--;
            if(i*i==value){
                if(i%2==1)
                    printf("%lld %lld\n",x,i);
                else
                    printf("%lld %lld\n",i,x);
            }else{
            if(i%2==1){
                y=i+1;
                for(j=i*i+2;j<=value;j++){
                    if(x<(i+1)){
                        x++;
                    }else{
                        y--;
                    }
                }
                printf("%lld %lld\n",x,y);
            }else{
                x=i+1;
                for(j=i*i+2;j<=value;j++){
                    if(y<(i+1)){
                        y++;
                    }else{
                        x--;
                    }
                }
                printf("%lld %lld\n",x,y);
            }
            }
        }else{
            break;
        }
    }
    return 0;
}
