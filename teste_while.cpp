#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std; 

int main() { 
	int num_palavra = 0;
	string anterior = " ";
	string atual;
	while (cin>>atual) { //while: faz um comando rodar enquanto a condição determinada dentro do parenteses for verdadeira
		++num_palavra;
		if (anterior == atual ){
			cout <<"palavra número:" << num_palavra
			<<"palavra repetida:" << atual << '\n';
		}
	anterior = atual;


	}
} 