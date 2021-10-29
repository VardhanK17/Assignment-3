// To generate unique hash value we can use asci values of different different characters. Since the ASCII value for each 
// character is unique, so their combination will also give an unique hash value.
#include <stdio.h>
#define MAX 200

long long int hashing(char n[MAX]) {

  long long int value = 0;
  for(int i = 0; i<MAX && n[i]!='\0'; i++) {
    value+=(i+1)*n[i];
  }
  return value;
}
int main() {

  char n[MAX] = {0};

  scanf("%[^\n]",n);

  printf("%lld\n", hashing(n));

  return 0;
}
