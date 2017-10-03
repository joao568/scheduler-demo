#include <stdio.h>

int main() {
  int a[5];
  int n, i, j, ind=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=1; i<=n; i++) {
      for(j=0; j<=4; j++){
            if(i%a[j]==0){
                printf("%d", j);
                ind=1;
            }
      }
      if(ind==0){
        printf("-");
      }
      printf("\n");
      ind=0;

  }

  return 0;
}
