#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>

using namespace std;


int main(){

    ifstream arq("/home/wagner/CLionProjects/2022_1/procurar_palavra_arquivo/teste.txt");

    if (! arq.is_open()) {
        perror("Ao abrir /etc/hosts");
        return errno;
    }

    string linha, algo="ou" ;

    while(getline(arq, linha)){
        if (linha.find(algo)!= string::npos){
            cout << linha << endl;
        }

    }

}
