#include <stdio.h>
 
int main() {
 
	int sh, sm, eh, em, th, tm;
	scanf("%d %d %d %d",&sh,&sm,&eh,&em);
	if(sh<eh)
	{
		if(sm<=em)
		{
			th = eh - sh;
			tm = em - sm;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
		else
		{
			th = eh - sh -1;
			tm = em - sm + 60;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
	}
	else if(sh==eh)
	{
		if(sm<em)
		{
			th = eh - sh;
			tm = em - sm;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
		else if(sm==em)
		{
			th = 24 + eh - sh;
			tm = em - sm;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
		else
		{
			th = 24 + eh - sh -1;
			tm = em - sm + 60;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
	}
	else
	{
		if(sm<=em)
		{
			th = 24 + eh - sh;
			tm = em - sm;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
		else
		{
			th = 24 + eh - sh -1;
			tm = em - sm + 60;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
		}
	}
 
    return 0;
}