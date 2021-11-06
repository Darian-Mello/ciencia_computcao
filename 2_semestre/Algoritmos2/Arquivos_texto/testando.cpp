#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

int calculateNumbersQuantityInFile();
void handleFloatNumbers(int float_numbers_quantity);

main() {

    int float_numbers_quantity = calculateNumbersQuantityInFile();
    if(float_numbers_quantity == -1)
        return 0;

    handleFloatNumbers(float_numbers_quantity);
}

int calculateNumbersQuantityInFile() {
    ifstream file;
    char character;
    int float_numbers_quantity = 0;

    file.open("ex002.txt",ios::in);
    if(file.is_open()){

        while (file.get(character)){
            if(character == ';')
                float_numbers_quantity ++;
        }
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
        return -1;
    }

    file.close();

    return float_numbers_quantity;
}

void handleFloatNumbers(int float_numbers_quantity) {
    ifstream file;
    string number_string;
    char character;
    float number, sum, mid, biggest, smallest;
    int line_idx = 0;

    float_numbers_quantity -= 1;

    float *parray = new float[float_numbers_quantity];

    file.open("ex002.txt",ios::in);
    if(file.is_open()){

        while (file.get(character)){
            if ( !isalpha(character) && character != ';' && character != ' ' && character != '\t' && character != '\r' && character != '\n' && character != '\x0b'){
                number_string += character;

                number = stof(number_string);
            }

            if(character == ';'){
                number_string = "";
                *(parray + line_idx) = number;
                line_idx ++;
            }
        }

        // Calcula soma
        for(int i = 0; i <= float_numbers_quantity; i++){
            sum += *(parray + i);
        }

        // Calcula média
        mid = sum / float_numbers_quantity;

        for(int i = 0; i <= float_numbers_quantity; i++){
            if(i == 0) {
                biggest = *(parray + i);
                smallest = *(parray + i);
            } else {
                if(*(parray + i) > biggest)
                    biggest = *(parray + i);
                if(*(parray + i) < smallest)
                    smallest = *(parray + i);
            }

        }

        cout << "Soma dos números do arquivo: " << sum << endl;
        cout << "Média dos números do arquivo: " << mid << endl;
        cout << "Maior número do arquivo: " << biggest << endl;
        cout << "Menor número do arquivo: " << smallest << endl;

    } else
        cout << "Erro ao abrir o arquivo." << endl;

    file.close();
}
