#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	int num_secreto=7;
	int adivinhe=3;
	int limite_tentativas=3;
	int tentativas;
	bool fim_tentativas=false;
	//funcao para definir um numero aleatorio
	num_secreto=rand()%10+1;
	cout<<"==================Jogo da adivinhacao================="<<endl;
	cout<<"\nRegras do jogo:Tente acertar um numero em Tres tentativas."<<endl;
	while(adivinhe != num_secreto && fim_tentativas == 0){
		if(tentativas<limite_tentativas){
			cout<<"Insira um numero:"<<endl;
	    cin>>adivinhe;
	       ++tentativas;
    	cout<<"Numero de Tentativas: "<<tentativas<<'/'<<3<<endl;
		}
		else{
			fim_tentativas=true;
	        cout<<"Voce nao tem mais tentativas :("<<endl;
           }
			}
	if(fim_tentativas){
		cout<<"Voce Perdeu, Continue tentando.";
	}else{
		cout<<"Voce ganhou,Parabens!!";
	}
	
}
