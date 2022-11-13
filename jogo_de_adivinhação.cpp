#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){	
	int adivinhe{0};//variavel em que o usuario tentara adivinhar o numero secreto(num_secreto).
	
	int limite_tentativas=3;//quantidade maxima de tentativas
	
	bool fim_tentativas=false;//iniciando o valor como falso para usa-lo posteriormente como gatilho do loop
	
	char confirmar;

	cout<<"==================Jogo da adivinhacao================="<<endl;
	cout<<"\nRegras do jogo:Tente acertar um numero em Tres tentativas."<<endl;
	
	//iniciando um loop while para reiniciar a contagem de tentativas.
       while(!fim_tentativas){
    //todas variaveis inicializadas nesse bloco while serão reinicializadas,apartir do input de continuidade do usuario.
	int tentativas=0;//reinicializando a quantidade de iniciativas.
	srand(time(NULL));//seed para funcao Srand.
	int num_secreto=rand() % 10+1;//variavel com a funcao Rand para definir um numero aleatorio entre 1 e 10,apartir de uma seed(srand).
	
	do{
		if(tentativas<limite_tentativas){
		cout<<"Insira um numero de 0 a 10:"<<endl;
	    cin>>adivinhe;
	       ++tentativas;//iterando o valor das tentativas a cada input do usuario e encerrando o programa caso passe de 3 inputs.
    	cout<<"Numero de Tentativas: "<<tentativas<<'/'<<3<<endl;
		}
		if(tentativas==limite_tentativas||adivinhe==num_secreto){
			
			//expressao condicional,usada apenas caso o usuario tenha atingido o limite de tentativas,e nao tenha acertado o numero.
			cout<<((tentativas>=limite_tentativas&&adivinhe!=num_secreto) ? "Suas tentativas acabaram.\n":" ");
			//output caso o usuario tenha acertado o numero secreto.
	    	cout <<((adivinhe==num_secreto) ? "\nVoce ganhou,Parabens!!" : "Voce perdeu :(")<<endl;
	    	cout<<"\nQuer continuar tentando?(S/N): ";
       		cin>>confirmar;
       		if(confirmar=='s'||confirmar=='S'){
       		system("cls");
           	break;//sai do bloco
		    }else{
		    	fim_tentativas=true;//caso o usuario dê um input diferente de 's',encerra o programa.
			}
           }
	  	}while (adivinhe != num_secreto&&!fim_tentativas);
	  }
		if(fim_tentativas)//acionado apartir do encerramento do bloco while.
			cout<<"\nAte a proxima!!!.";
}
