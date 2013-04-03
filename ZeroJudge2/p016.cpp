#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    long long int n, count, len, a, b;
    char c[100000];
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            a=b=count=0;
            scanf("%s", c);
            len = strlen(c);
            
            for(int i = 0; i < len; i++)
                a = a * 10 + c[i] - '0';
            for(int i = len - 1; i >= 0; i--)
                b = b * 10 + c[i] - '0';

            do{
                count++;
                a += b;
                b = 0;
                for(long long int i = a; i > 0; i /= 10)
                    b = b * 10 + (i % 10);
            }while(a != b);
            printf("%lld %lld\n", count, a);
        }
    }
    return 0;
}

