#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std; 

int main() 
{
	cout <<"Insira seu primeiro nome:\n";
	string primeiro_nome; 
	cin >> primeiro_nome; //cin é uma abreviação de Character Input
	if (primeiro_nome == "Marcus") { 
		cout << "Olá," <<  primeiro_nome << "! Bem vindo de volta\n";
	}
	else { 
		cout << "Olá," << primeiro_nome << "!\n";
		}

}