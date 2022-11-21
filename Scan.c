#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0, req, ds, initial,move;
    printf("\nRequests: ");
    scanf("%d", &req);
    int rs[req];
    printf("\nRequests Sequence: ");
    for(int i=0;i<req;i++)
    {
        scanf("%d", &rs[i]);
    }
    printf("\nInitial Head Position: ");
    scanf("%d", &initial);
    printf("\nDisk Size: ");
    scanf("%d", &ds);
    printf("\nHead Movement (1 or 0): ");
    scanf("%d", &move);
    for(int i=0;i<req;i++)
    {
        for(int j=i;j<req;j++)
        {
            if(rs[i]>rs[j])
            {
                int temp = rs[i];
                rs[i] = rs[j];
                rs[j] = temp;
            }
        }
    }
    if(move==1)
    {
        th+=(abs(ds-initial-1) + abs(ds-rs[0]-1));
    }
    else
    {
        th+=(initial + rs[req-1]);
    }
    printf("\nHead movement: %d", th);
}