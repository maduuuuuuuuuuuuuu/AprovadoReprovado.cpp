/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <iostream>

using namespace std;

int main() {

    float nota1, nota2, nota3, frequencia;
    
    cout << "\n Digite sua frequencia: ";
    cin >> frequencia;
    
    cout << "\n Digite a primeira nota: ";
    cin >> nota1;
    
    cout << "\n Digite a segunda nota: ";
    cin >> nota2;
    
    cout << "\n Digite a terceira nota: ";
    cin >> nota3;
    
    float media = (nota1 + nota2 + nota3) / 3;
   
    
    cout << "\n frequencia: " << frequencia << "%";
    cout << "\n media: " << media;
    
    if(media >= 7 && frequencia >= 75){
        cout << "\n Você foi aprovado. Parabéns" << endl;
    }
    else if(media >= 7 && frequencia >= 50){
        cout << "\n Você foi aprovado pelo concelho" << endl;
    }
    else{
         cout << "\n Você foi reprovado" << endl;
    }

    
    return 0;

}