#include <stdio.h>
main (){
	int i;
	char sexo;
	int qFeminino;
	int qMasculino;
    float pM, pF;
	qMasculino= 0;
	qFeminino= 0;
	i=1;
	while(i<=6){
		printf("Digite o %i sexo do aluno ",i);
		scanf("%c",&sexo);
		fflush(stdin);
		if (sexo == 'm'){
        qMasculino++;       }
        if (sexo == 'f'){
        qFeminino++;        }
		i++;
	}
    pM = qMasculino*100/6;
    pF = qFeminino*100/6;
	Printf("Qtde Masculino %i e Qtde Feminino %i\n",qMasculino,qFeminino);
    Printf("Porc Masculino %.2f e Porc. Feminino %.2f\n",pM,pF);
}