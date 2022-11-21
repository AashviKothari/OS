#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, th, move, ds, initial;
    printf("\nRequests: ");
    scanf("%d", &n);
    int rs[n];
    printf("\nRequest Sequence: ");
    for(int i=0;i<n;i++){
        scanf("%d", &rs[i]);
    }
    printf("\nInitial Head Position: ");
    scanf("%d", &initial);
    printf("\nDisk Size: ");
    scanf("%d", &ds);
    printf("\nMove (1 or 0): ");
    scanf("%d", &move);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(rs[i]>rs[j]){
                int temp = rs[i];
                rs[i] = rs[j];
                rs[j] = temp;
            }
        }
    }
    int idx;
    for(int i=0;i<n;i++){
        if(initial<rs[i]){
            idx = i-1;
            break;
        }
    }
    if(move == 1){
        th=(abs(rs[n-1]-initial) + abs(rs[n-1]-rs[0]) + abs(rs[0]-rs[idx]));
    }
    else{
        th=(abs(initial-rs[0]) + abs(rs[n-1]-rs[0]) + abs(rs[n-1]-rs[idx+1]));
    }
    printf("\nTotal Head Movements: %d", th);
    return 0;
}