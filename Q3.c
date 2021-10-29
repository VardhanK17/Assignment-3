#include <stdio.h>
#include <limits.h>

#define size 1000000000
char isPrime[size] = {0};

int main()
{
    long long int n; 
    scanf("%lld", &n);

    for (int i=2;i<=n;i++)
    {
    if (isPrime[i]==0)
    {
     for (int j=2*i;j<=n;j+=i)
      {
        isPrime[j] = 1;
      }
    }
    }
    for (int i=2;i<=n;i++)
    {
     if (isPrime[i]==0)
      {
      printf("%d ", i);
      }
    }
    return 0;
}
