#include <stdio.h>
#include <stdlib.h>
                    //((kelime[i]-kelime[i+1])>(32))||((kelime[i]-kelime[i+1])<(-(32)))
int main()
{
    int i=0,zerocross=0,x;
    char kelime[50];
    printf("enter string\n");
    scanf("%[^\n]",kelime);
    while (kelime[i]!='\0')
    {
        if (kelime[i]>=97&&kelime[i+1]<97 ||kelime[i]<97&&kelime[i+1]>=97 )
        {
            zerocross++;
        }
        if ((kelime[i]<97) && (kelime[i]>=kelime[i+1])&& (kelime[i]>kelime[i-1]))
        {
            x=i+1;
            printf("%d,",x);
        }
        i++;
    }
     printf("\n zerocross %d",zerocross);

    return 0;
}
