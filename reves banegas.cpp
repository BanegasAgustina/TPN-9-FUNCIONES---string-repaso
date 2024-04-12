#include <bits/stdc++.h>
using namespace std;

string DarVuelta(int i ,int f , string frase);

int main(){
	string frase;
	int i,f;
	
	cout<<"ingrese frase:  ";
	getline(cin,frase);
	cout<<"ingrese inicio :  ";
	cin>>i;
	cout<<"ingrese fin :  ";
	cin>>f;
	
	cout<<DarVuelta(i , f , frase);
	return 0;
}

string DarVuelta(int i ,int f , string frase){
	string aux;
	for(int j = i; j <= f && j < frase.size(); j++){
		aux += frase[j];
	}
	
	reverse(aux.begin(), aux.end()); 
	 
	string aux2;
	return aux2 = frase.substr(0, i) + aux + frase.substr(f);
}
