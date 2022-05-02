#include <stdio.h>
 
int main() {
 
	int sh, sm, eh, em, th, tm;
	while(1){
		scanf("%d %d %d %d",&sh,&sm,&eh,&em);
		if(sh==0 && sm==0 & eh==0 && em==0)
			break;
		if(sh<eh)
		{
			if(sm<=em)
			{
				th = eh - sh;
				tm = em - sm;
				printf("%d\n",th*60+tm);
			}
			else
			{
				th = eh - sh -1;
				tm = em - sm + 60;
				printf("%d\n",th*60+tm);
			}
		}
		else if(sh==eh)
		{
			if(sm<em)
			{
				th = eh - sh;
				tm = em - sm;
				printf("%d\n",th*60+tm);
			}
			else if(sm==em)
			{
				th = 24 + eh - sh;
				tm = em - sm;
				printf("%d\n",th*60+tm);
			}
			else
			{
				th = 24 + eh - sh -1;
				tm = em - sm + 60;
				printf("%d\n",th*60+tm);
			}
		}
		else
		{
			if(sm<=em)
			{
				th = 24 + eh - sh;
				tm = em - sm;
				printf("%d\n",th*60+tm);
			}
			else
			{
				th = 24 + eh - sh -1;
				tm = em - sm + 60;
				printf("%d\n",th*60+tm);
			}
		}
	}
    return 0;
}