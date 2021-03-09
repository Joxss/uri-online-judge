#include <stdio.h>
 
int main() {
 
	float n1, n2, n3, n4, media, ne, mf;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
	if(media>=7)
	{
		printf("Media: %.1f\n",media);
		printf("Aluno aprovado.\n");
	}
	else if(media>=5 && media<=6.9)
	{
		scanf("%f",&ne);
		mf = (media + ne)/2;
		if(mf>=5)
		{
			printf("Media: %.1f\n",media);
			printf("Aluno em exame.\n");
			printf("Nota do exame: %.1f\n",ne);
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",mf);
		}
		else
		{
			printf("Media: %.1f\n",media);
			printf("Aluno em exame.\n");
			printf("Nota do exame: %.1f\n",ne);
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",mf);
		}
	}
	else
	{
		printf("Media: %.1f\n",media);
		printf("Aluno reprovado.\n");
	}
 
    return 0;
}