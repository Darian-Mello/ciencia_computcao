#ifndef _HPP_ESTRUTURAS
#define _HPP_ESTRUTURAS

struct Objeto{
    char tipo; // L = Livro ; E = Equipamento;
    string descricao;
};

struct Pessoa{
    string nomeCompleto;
    char sexo; // M = Masculino ; F = Feminino;
    string CPF;
    int idade;
    bool deficienteFisico;
    bool gestante;
};

 struct Empresa{
     string nome;
     string CNPJ;
     char tipo; // L = Livros; E = Equipamentos;
 };

 struct Ficha_Doacao{
     Pessoa dadosP;
     Objeto dadosOBJ;
 };
#endif



