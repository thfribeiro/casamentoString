#include <stdio.h>
#include <stdlib.h>
#define MAX_1 50
#define MAX_2 150

int possui(char entrada[], char chave[])
{
    int i=0, resultado=0;
    int t1=0;
    int t2=0;

    //Atribuindo o tamanho das strings as variáveis
    for(i=0; entrada[i]!=0; i++)
    {
        t1++;
    }
    for(i=0; chave[i]!=0; i++)
    {
        t2++;
    }
    //Retirando 1 do tamanho por conta do fgets
    t1-=1;
    t2-=1;

    int n=0;
    i=0;

    do
    {
        resultado=0;
        for(i=n; i<t1; i++)
        {
            if(entrada[i]==chave[resultado])
            {
                resultado++;
                if(resultado==t2)
                {
                    return resultado;
                }
            }
            else
            {
                resultado=0;
            }
        }
        n++;
    }
    while((t1-n)>=t2);

    return resultado;
}

int comecaCom(char entrada[], char chave[])
{
    int t1=0;
    int resultado=0;
    int i;

    //Atribuindo o tamanho da string a variável
    for(i=0; chave[i]!=0; i++)
    {
        t1++;
    }
    //Retirando 1 do tamanho por conta do fgets
    t1-=1;
    for(i=0; i<t1; i++)
    {
        if(entrada[i]==chave[i])
        {
            resultado+=1;
        }
    }

    return resultado;
}


int terminaCom(char entrada[], char chave[])
{
    int t1=0;
    int t2=0;
    int resultado=0;
    int i;

    //Atribuindo o tamanho das strings as variáveis
    for(i=0; chave[i]!=0; i++)
    {
        t1++;
    }
    for(i=0; entrada[i]!=0; i++)
    {
        t2++;
    }
    //Retirando 1 do tamanho por conta do fgets
    t1-=1;
    t2-=1;

    for(i=(t1-1); i>=0; i--)
    {
        if(entrada[t2-(t1-i)]==chave[i])
        {
            resultado+=1;
        }
    }

    return resultado;
}

int main(void)
{

    char entrada[MAX_2];
    char chave[MAX_1];
    char chave2[MAX_1];
    char chave3[MAX_1];
    int opt=0,i;
    int resultado1,resultado2,resultado3;
    int t1=0,t2=0,t3=0;

    puts("Qual operacao deseja fazer:\n1-Busca Prefixo\t2-Busca Sufixo\t3-Busca Subpalavra\t");
    scanf("%i", &opt);
    fflush(stdin);
    if(opt==1)
    {
        puts("Digite o prefixo a ser buscado:");
        fgets(chave,50,stdin);
        fflush(stdin);
    }
    else if(opt==2)
    {
        puts("Digite o sufixo a ser buscado:");
        fgets(chave2,50,stdin);
        fflush(stdin);
    }
    else if(opt==3)
    {
        puts("Digite a subpalavra a ser buscado:");
        fgets(chave3,50,stdin);
        fflush(stdin);
    }
    else
    {
        system("cls");
        return main();
    }
    puts("Digite a entrada:");
    fgets(entrada,150,stdin);

    //Atribuindo o tamanho das strings as variáveis
    for(i=0; chave[i]!=0; i++)
    {
        t1++;
    }
    for(i=0; chave2[i]!=0; i++)
    {
        t2++;
    }
    for(i=0; chave3[i]!=0; i++)
    {
        t3++;
    }
    //Retirando 1 do tamanho por conta do fgets
    t1-=1;
    t2-=1;
    t3-=1;

    if(opt==1)
    {
        resultado1 = comecaCom(entrada,chave);

        if(resultado1 == t1)
        {
            puts("A entrada possui o prefixo buscado");

        }
        else
        {
            puts("A entrada nao possui o prefixo buscado");

        }
    }

    else if(opt==2)
    {
        resultado2 = terminaCom(entrada,chave2);

        if(resultado2 == t2)
        {
            puts("A entrada possui o sufixo buscado");

        }
        else
        {
            puts("A entrada nao possui o sufixo buscado");

        }
    }
    else if(opt==3)
    {
        resultado3 = possui(entrada,chave3);

        if(resultado3 == t3)
        {
            puts("A entrada possui a subpalavra digitada");

        }
        else
        {
            puts("A entrada nao possui a subpalavra digitada");

        }
    }
    return 0;
}
