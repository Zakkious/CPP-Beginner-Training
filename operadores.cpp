#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main() { 
	cout <<"Por favor, informe um valor em int:\n";
	int n;

	cin >> n;
	
	double z = n;
	cout <<"n == " << n
		 <<"\nn + 1 == " << n+1
		 <<"\ntriplo de n == " << n*3
		 <<"\ndobro de n == " << n*2
		 <<"\nmetade de n == " << n/2
		 <<"\nraiz quadrada de n == " << sqrt(z)
		 << endl;   	

}