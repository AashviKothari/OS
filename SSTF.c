#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tothead=0, req, initial, cnt=0;
    printf("\nNo. of Requests: ");
    scanf("%d", &req);
    int rs[req];
    printf("\nRequests Sequence: ");
    for(int i=0;i<req;i++)
    {
        scanf("%d", &rs[i]);
    }
    printf("\nInitial Head Position: ");
    scanf("%d", &initial);
    for(int i=0;i<req;i++)
    {
        for(int j=i;j<req;j++)
        {
            if(rs[i]>rs[j])
            {
                int tmp = rs[i];
                rs[i]=rs[j];
                rs[j]=tmp;
            }
        }
    }
    tothead = abs(initial-rs[0]) + abs(rs[0]-rs[req-1]);
    printf("\nTotal Head Movement: %d", tothead);
    return 0;
}