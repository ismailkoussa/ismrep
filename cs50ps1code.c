#include <stdio.h>

int main() {
int n;
void hashes(int n){    
int i,j,x,z;
for(i=0;i<n+1;i++){
    for (j=0;j<n-i;j++){
        printf (" ");
        }
    for (x=0;x<i;x++){
        printf ("#");
    }
    printf ("  ");
     for (z=0;z<i;z++){
        printf ("#");
    }    
    
    printf ("\n");
}
}
do {
    scanf("%d",&n);
}while(n>9);

hashes (n);
    return 0;
}
