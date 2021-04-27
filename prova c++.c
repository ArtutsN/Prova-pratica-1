//Nome:Arthur Neves Tavares   Matricula:uc21105900   Curso:Engenharia de software
#include<stdlib.h>//Implementa funções para diversas operações, incluindo conversão,  alocação de memória, controle de processo, funções de busca e ordenação.
#include<ctype.h>//Funções para conversão de maiúsculas, minúsculas e outros tratamentos de caracteres.
#include<string.h>//Tratamento de  strings.
#include<stdio.h>//Tratamento de entrada/saída.
int main(){//inicio do algoritmo
	int QPessoas, Idade, Sessoes, NPessoas, F, M, Idoso, Adulto, Adolescente, Crianca, NF, NM;//variaveis do codigo
	char Sexo,Filme[20];//variaveis de nome
	
	do{//complementado com while	
	printf("Escolha quantas sessoes quer assistir:\n");//imprime um texto/numero no compilador
	scanf("%d",&Sessoes);
	if(Sessoes!=2){//declaracão de condição
		printf("numero invalido!\n");
		printf("Maximo 2 sessoes\n");
}
	}

    while(Sessoes!=2);//enquanto essa condição for comprida

    system("cls");//limpa a tela do compilador

    do{//complemetado com while
    	
    printf("escolha um filme:\n");
    fgets(Filme,20,stdin);//serve ultilizar espaços na hora de escrever o nome do filme
    fflush(stdin);//limpeza de dados
    (Filme[strlen(Filme)-1]='\0');
    	
	}
    
    while(strlen(Filme)==0);//enquanto essa condição for comprida
    
    system("cls");//limpa a tela
    
	do{
	printf("Quantas pessoas assistirao ao filme:\n");
	fflush(stdin);//limpeza de dados
	scanf("%d",&QPessoas);

	if(QPessoas<10)//condição para qualquer valor abaixo de 10
		printf("minimo de 10 pessoas!\n");
		
	 else if(QPessoas>100)//condição para qualquer valor acima de 100
	    printf("maximo de 100 pessoas!\n");
	    
}

    while((QPessoas<10)||(QPessoas>100));//enquanto for cumprido:...
    for(NPessoas=1;NPessoas<=QPessoas;NPessoas++){//declaração de repetição
    do{//complementado por while
    printf("informe a idade de todos os individuos:\n");
    scanf("%d",&Idade);
    fflush(stdin);//limpeza de dados
        if(Idade<3||Idade>100)//condição para qualquer valor entre 3 e 100
        printf("apenas pessoas entre 3 e 100 anos sao permitidas");
}
    while((Idade<3)||(Idade>100));//enquanto essa condição for comprida:...
    
    do{
    printf("informe o sexo das pessoas:\n");	
    scanf("%c",&Sexo);
    fflush(stdin);//limpeza de dados
    	if(Sexo!='M'&& Sexo!='F'&& Sexo!='m'&& Sexo!='f'){//condição que so permite o uso de 'M' ou 'F'
    	printf("opcao invalida!\n");
		}
	}
    
    while(Sexo!='M'&& Sexo!='F'&& Sexo!='m'&& Sexo!='f');//enquanto essa condição for comprida:...
    
    if(Sexo=='M'&&Sexo=='m'&&Idade>=18&&Idade<=100)
    M=M+1;
    
    if(Sexo=='F'&&Sexo=='f'&&Idade>=18&&Idade<=100)
    F=F+1;
    
    if(Idade>=3&&Idade<=13)
    Crianca++;
    if(Idade>=14&&Idade<=17)
    Adolescente++;
    if(Idade>=18&&Idade<=64)
    Adulto++;
    if(Idade>=65&&Idade<=100)
    Idoso++;
    if(Sexo=='M'&&Idade>=18){
    	NM++;
    	M++;
	}
    else if(Sexo=='M'){
    M++;}
    
    if(Sexo=='F'){
    	NF++;
    	F++;
	}
	else if(Sexo=='F'){
		F++;
	}
}
	system("pause");
	system("cls");//limpeza da tela
	fflush(stdin);//limpeza de dados

	printf("Nome do filme:%s\n",Filme);
	printf("Homens que assistiram o filme:%d\n",M);
	printf("Mulheres que assistiram o filme:%d\n",F);
	printf("Numero de Criancas:%d\n",Crianca);
	printf("Numero de Adolescentes:%d\n",Adolescente);
	printf("Adulto:%d\n",Adulto);
	printf("QuantidadeIdoso:%d\n",Idoso);
	
	system("pause");
	system("cls");//limpa a tela
	
	printf("Quantidade de pessoas do sexo masculino acima de 18 anos:%d\n",NM);
	printf("Quantidade de pessoas do sexo feminino acima de 18 anos:%d\n",NF);
	
	return 0;
}
