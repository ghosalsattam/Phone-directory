#include<string.h>
char st[100][100];int n;
void ascend()
{
int i,j;char temp[100];
for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(st[i], st[j]) > 0) 
                {
                    strcpy(temp, st[i]);
                    strcpy(st[i], st[j]);
                    strcpy(st[j], temp);
                }
            }
        }
}
int main()
{
	char qu[100];
	int t,T,i,j,k,count=0;
	scanf("%d",&T);
	for(t=0;t<T;t++)
	{
		
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",&st[i]);	
		}
		scanf("%s",&qu);
		ascend();
		for(i=0;i<n-1;i++)
		{
			if(strcmp(st[i],st[i+1])==0)
			{
				for(j=i;j<n-1;j++)
				{
					strcpy(st[i],st[i+1]);
				}
				strcpy(st[i],"");
			}	
		}
              i=0;
		count=0;
		while(qu[i]!='\0')
		{
			count=0;
			for(j=0;j<n;j++)
			{
				for(k=0;k<=i;k++)
				{
					if(qu[k]!=st[j][k])
					break;	
				}
				if(k==i+1)
				{
				printf("%s ",st[j]);
				count++;
				}
			}
			if(count==0)
				printf ("0");
			printf("\n");
			i++;
		}
	}
}
