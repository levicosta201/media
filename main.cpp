// Example program
#include <iostream>

using namespace std;

class Notas {
	//instancia as variaveis como publica
	public:
		int nota1;
		int nota2;
		int nota3;
		int nota4;
		int media;
};

//cria template que calcular a media das notas
template <class T>
T GetMedia (T nota1, T nota2, T nota3, T nota4) {
  T result;
  //calcula a media e armazena o valor
  result = (nota1 + nota2 + nota3 + nota4) / 4;
  return (result);
};

int main()
{
	//instacia classe notas
    Notas notas;
    
    //solicita o usuario a nota
    std::cout << "Insira a nota 1: ";
    cin >> notas.nota1;
    std::cout << "Nota 1 setada: " << notas.nota1 << "!\n";

    //solicita o usuario a nota
    std::cout << "Insira a nota 2: ";
    cin >> notas.nota2;
    std::cout << "Nota 2 setada: " << notas.nota2 << "!\n";

    //solicita o usuario a nota
    std::cout << "Insira a nota 3: ";
    cin >> notas.nota3;
    std::cout << "Nota 3 setada: " << notas.nota3 << "!\n";

    //solicita o usuario a nota
    std::cout << "Insira a nota 4: ";
    cin >> notas.nota4;
    std::cout << "Nota 4 setada: " << notas.nota4 << "!\n";

    //calcula a media dos usuarios e armazena
    notas.media = GetMedia<int>(notas.nota1, notas.nota2, notas.nota3, notas.nota4);

    //exibe pro usuario qual foi a media calculada
    std::cout << "A media foi de: " << notas.media << "!\n";
}