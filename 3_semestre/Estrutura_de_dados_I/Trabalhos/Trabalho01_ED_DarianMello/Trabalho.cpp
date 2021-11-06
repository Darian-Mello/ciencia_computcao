#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

#include "Fila_Pessoas.hpp"
#include "Fila_Empresas.hpp"
#include "Pilha_Doacoes.hpp"
#include "Pilha_Objetos.hpp"

void Incluir_Pessoa(FilaPessoa *FP, FilaPessoa *FNP);
void Incluir_Empresa(FilaEmpresa *FP, FilaEmpresa *FNP);
void Atender_Pessoa(FilaPessoa *FP, FilaPessoa *FNP, PilhaDoacoes *pilha, PilhaObj *l, PilhaObj *e);
void Atender_Empresa(FilaEmpresa *FP, FilaEmpresa *FNP, PilhaObj *l, PilhaObj *e);
void Inf_Pessoas(FilaPessoa *FP, FilaPessoa *FNP);
void Inf_Empresas(FilaEmpresa *FP, FilaEmpresa *FNP);
void Lista_Equi(PilhaObj *obj);
void Lista_Livros(PilhaObj *obj);
void Lista_Doacoes();
void Busca_CPF();
void Lista_Retiradas();

main(){
    setlocale(LC_ALL, "Portuguese");
    char menu;

    FilaPessoa DoacaoPrioritaria, DoacaoNaoPrioritaria;
    FilaEmpresa RetiradaPrioritaria, RetiradaNaoPrioritaria;
    PilhaDoacoes doacoes;
    PilhaObj livros, equipamentos;

    do{
        system("cls");
        cout << "-----------------------------------------------MENU-----------------------------------------------";
        cout << "\nA - Incluir pessoa na fila de doação;";
        cout << "\nB - Incluir empresa na fila de retirada;";
        cout << "\nC - Atender uma pessoa da fila (doação de equipamentos e livros);";
        cout << "\nD - Atender uma empresa da fila (retirada de equipamentos e livros);";
        cout << "\nE - Listar todas as pessoas das filas (ambas as filas), respeitando a prioridade de atendimento;";
        cout << "\nF - Listar todas as empresas das filas (ambas as filas), respeitando a prioridade de atendimento;";
        cout << "\nG - Listar informações sobre as filas de pessoas de forma unificada;";
        cout << "\nH - Listar informações sobre as filas de empresas de forma unificada;";
        cout << "\nI - Listar o estoque de equipamentos na ordem em que eles foram doados;";
        cout << "\nJ - Listar o estoque de livros na ordem em que eles foram doados;";
        cout << "\nK - Listar todas as doações já recebidas pela ONG;";
        cout << "\nL - Verificar o número de doações realizadas por um determinado CPF;";
        cout << "\nM - Listar todas as retiradas realizadas;";
        cout << "\nZ - SAIR;";
        cout << "\n--------------------------------------------------------------------------------------------------";
        cout << "\n\nInforme a sua escolha: ";
        cin >> menu;
        menu = toupper(menu);

        system("cls");
        switch(menu){
        case 'A':
            Incluir_Pessoa(&DoacaoPrioritaria, &DoacaoNaoPrioritaria);
            break;
        case 'B':
            Incluir_Empresa(&RetiradaPrioritaria, &RetiradaNaoPrioritaria);
            break;
        case 'C':
            Atender_Pessoa(&DoacaoPrioritaria, &DoacaoNaoPrioritaria, &doacoes, &livros, &equipamentos);
            break;
        case 'D':
            Atender_Empresa(&RetiradaPrioritaria, &RetiradaNaoPrioritaria,  &livros, &equipamentos);
            break;
        case 'E':
            if(!vaziaPessoa(&DoacaoPrioritaria)){
                cout << "Fila de doadores prioritarios:\n\n";
                mostraPessoa(&DoacaoPrioritaria);
            }
            else
                cout << "Não há doadores com prioridade.";
            if(!vaziaPessoa(&DoacaoNaoPrioritaria)){
                cout << "\n\nFila de doadores não prioritarios:\n\n";
                mostraPessoa(&DoacaoNaoPrioritaria);
            }
            else
                cout << "\n\nNão há doadores sem prioridade.";
            break;
        case 'F':
            if(!vaziaEmpresa(&RetiradaPrioritaria)){
                cout << "Fila de empresas prioritarias:\n\n";
                mostraEmpresa(&RetiradaPrioritaria);
            }
            else
                cout << "Não há empresas com prioridade.";
            if(!vaziaEmpresa(&RetiradaNaoPrioritaria)){
                cout << "\n\nFila de empresas não prioritarias:\n\n";
                mostraEmpresa(&RetiradaNaoPrioritaria);
            }
            else
                cout << "\n\nNão há empresas sem prioridade.";
            break;
        case 'G':
            Inf_Pessoas(&DoacaoPrioritaria, &DoacaoNaoPrioritaria);
            break;
        case 'H':
            Inf_Empresas(&RetiradaPrioritaria, &RetiradaNaoPrioritaria);
            break;
        case 'I':
            Lista_Equi(&equipamentos);
            break;
        case 'J':
            Lista_Livros(&livros);
            break;
        case 'K':
            Lista_Doacoes();
            break;
        case 'L':
            Busca_CPF();
            break;
        case 'M':
            Lista_Retiradas();
            break;
        case 'Z':
            destroiPessoa(&DoacaoPrioritaria);
            destroiPessoa(&DoacaoNaoPrioritaria);
            destroiEmpresa(&RetiradaPrioritaria);
            destroiEmpresa(&RetiradaNaoPrioritaria);
            desalocarDoacoes(&doacoes);
            desalocarObj(&livros);
            desalocarObj(&equipamentos);
            cout << "Programa finalizado.";
            break;
        default:
            cout << "\n\nA opção '" << menu << "' não está presente no menu.";
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 'Z');
}

void Incluir_Pessoa(FilaPessoa *FP, FilaPessoa *FNP){
    Pessoa p;
    int aux;

    cout << "Informe os dados do doador(a): \n\n";
    cout << "Informe o CPF: ";
    cin >> p.CPF;

    cout << "\nInforme o nome: ";
    fflush(stdin);
    getline(cin, p.nomeCompleto);

    do{
        cout << "\nInforme a idade:(Entre 10 e 100 anos): "; //decidi por um limite mínimo e máximo na idade.
        cin >> p.idade;
    }while(p.idade < 10 || p.idade > 100);

    do{
        cout << "\nInforme o sexo(F - Feminino, M - Masculino): ";
        cin >> p.sexo;
        p.sexo = toupper(p.sexo);
    }while(p.sexo != 'F' && p.sexo != 'M');

    do{
        cout << "\nPossui alguma deficiência(0 - Não, 1 - Sim)? ";
        cin >> aux;
    }while(aux != 0 && aux != 1);
    p.deficienteFisico = aux;

    if(p.sexo == 'F'){
        do{
            cout << "\nÉ gestante(0 - Não, 1 - Sim)? ";
            cin >> aux;
        }while(aux != 0 && aux != 1);
        p.gestante = aux;
    }
    else
        p.gestante = false;

    system("cls");
    if(p.gestante == true || p.deficienteFisico == true || p.idade > 65){
        if(enfileiraPessoa(FP, p))
            cout << "A pessoa foi adicionada a fila de doação prioritária.";
        else
            cout << "Não foi possível adicionar a pessoa a uma fila. Não há mais espaco.";
    }
    else{
        if(enfileiraPessoa(FNP, p))
            cout << "A pessoa foi adicionada a fila de doação não prioritária.";
        else
            cout << "Não foi possível adicionar a pessoa a uma fila. Não há mais espaco.";
    }
}

void Incluir_Empresa(FilaEmpresa *FP, FilaEmpresa *FNP){
    Empresa e;

    cout << "Informe o CNPJ da empresa: ";
    cin >> e.CNPJ;
    cout << "\nInforme o Nome da empresa: ";
    fflush(stdin);
    getline(cin, e.nome);
    do{
        cout << "\nInforme o tipo de produto que a empresa transporta(L - Livros, E - Equipamentos): ";
        cin >> e.tipo;
        e.tipo = toupper(e.tipo);
    }while(e.tipo != 'L' && e.tipo != 'E');

    system("cls");
    if(e.tipo == 'L'){
        if(enfileiraEmpresa(FP, e))
            cout << "A empresa foi adicionada a fila de retirada prioritária.";
        else
            cout << "Não foi possível adicionar a empresa a uma fila. Não há mais espaco.";
    }
    else{
        if(enfileiraEmpresa(FNP, e))
            cout << "A empresa foi adicionada a fila de retirada não prioritária.";
        else
            cout << "Não foi possível adicionar a empresa a uma fila. Não há mais espaco.";
    }
}

void Atender_Pessoa(FilaPessoa *FP, FilaPessoa *FNP,  PilhaDoacoes *pilha, PilhaObj *l, PilhaObj *e){
    Objeto d;
    Ficha_Doacao ficha;
    Pessoa doador;

    if(!vaziaPessoa(FP)){
        desenfileiraPessoa(FP, &doador);
        ficha.dadosP = doador;
    }
    else if(!vaziaPessoa(FNP)){
        desenfileiraPessoa(FNP, &doador);
        ficha.dadosP = doador;
    }
    else{
        cout << "As filas de pessoas estão vazias.";
        return;
    }

    cout << "\n\nPessoa a ser atendida: \n";
    cout << "\nNome: " << ficha.dadosP.nomeCompleto;
    cout << "\nCPF: " << ficha.dadosP.CPF;

    cout << "\n\nInforme os dados do objeto doado: ";
    do{
        cout << "\nInforme o tipo(L - Livro, E - equipamento): ";
        cin >> d.tipo;
        d.tipo = toupper(d.tipo);
    }while(d.tipo != 'L' && d.tipo != 'E');

    cout << "\nInforme a destricao do objeto doado: ";
    fflush(stdin);
    getline(cin, d.descricao);

    if(d.tipo == 'L'){
        empilharObj(l, d);
    }
    else
        empilharObj(e, d);
    ficha.dadosOBJ = d;
    empilharDoacoes(pilha, ficha);


    ofstream arquivo("doacao.txt", ios::app);

    arquivo << ficha.dadosP.nomeCompleto << "#" << ficha.dadosP.sexo << "#" << ficha.dadosP.CPF <<"#"<< ficha.dadosP.idade << "#DEF_" << ficha.dadosP.deficienteFisico << "#GEST_" << ficha.dadosP.gestante << "#OBJ_" << ficha.dadosOBJ.tipo << "#" << ficha.dadosOBJ.descricao << "\n";
    system("cls");
    cout << "Doacao efetuada com sucesso.";

    arquivo.close();
}

void Atender_Empresa(FilaEmpresa *FP, FilaEmpresa *FNP, PilhaObj *l, PilhaObj *e){
    Empresa empresa;
    Objeto obj;

    int n, cont=0;

    if(!vaziaEmpresa(FP) && !vaziaObj(l)){
        desenfileiraEmpresa(FP, &empresa);
        cout << "\n\nEmpresa a ser atendida: \n";
        cout << "\nNome: " << empresa.nome;
        cout << "\nCNPJ: " << empresa.CNPJ;
        cout << "\nTipo da carga: Livros";

        do{
            cout << "\n\nInforme a quantidade de livros que a empresa deseja retirar: ";
            cin >> n;
            if(n <= 0)
                cout << "\n\nAo menos 1 livro deve ser retirado.";
        }while(n <= 0);

        NoObj *no = l->topo;
        while(no != NULL){
            cont++;
            no = no->prox;
        }
        if(cont < n){
            n=cont;
            cout << "\n\nO número solicitado é muito grande.Serão retirados apenas " << n << " livros(s), que é o que está disponível em estoque.\n\n";
            system("Pause");
        }

        ofstream arquivo("retiradas.txt", ios::app);
        for(int i=0; i<n; i++){
            desempilharObj(l, &obj);
            cout << endl << i+1 << "º livro retirado com sucesso.";
            arquivo << "Transportadora_" << empresa.nome << "#" << empresa.CNPJ << "#TRANS_" << empresa.tipo << "#OBJ_" << obj.tipo << "#" << obj.descricao << "\n";
        }
        arquivo.close();
    }

    else if(!vaziaEmpresa(FNP)&& !vaziaObj(e)){
        desenfileiraEmpresa(FNP, &empresa);
        cout << "\n\nEmpresa a ser atendida: \n";
        cout << "\nNome: " << empresa.nome;
        cout << "\nCNPJ: " << empresa.CNPJ;
        cout << "\nTipo da carga: Equipamentos";

        do{
            cout << "\n\nInforme a quantidade de equipamentos que a empresa deseja retirar: ";
            cin >> n;
            if(n <= 0)
                cout << "\n\nAo menos 1 equipamento deve ser retirado.";
        }while(n <= 0);

        NoObj *no = e->topo;
        while(no != NULL){
            cont++;
            no = no->prox;
        }
        if(cont < n){
            n = cont;
            cout << "\n\nO número solicitado é muito grande. Serão retirados apenas " << n << " equipamentos(s), que é o que está disponível em estoque.\n\n";
            system("Pause");
        }

        ofstream arquivo("retiradas.txt", ios::app);
        for(int i=0; i<n; i++){
            desempilharObj(e, &obj);
            cout << endl << i+1 << "º equipamento retirado com sucesso.";
           arquivo << "Transportadora_" << empresa.nome << "#" << empresa.CNPJ << "#TRANS_" << empresa.tipo << "#OBJ_" << obj.tipo << "#" << obj.descricao << "\n";
        }
        arquivo.close();
    }
    else{
        cout << "Não é possível fazer uma retirada do estoque.\nAs filas de retiradas estão vazias, ou não há doações em estoque.";
    }
}

void Inf_Pessoas(FilaPessoa *FP, FilaPessoa *FNP){
    int total=0, nfem=0, nmas=0, ndef=0, ngest=0;

    NoFilaPessoa *no = FP->inicio;
    while(no){
        total++;
        if(no->dado.sexo == 'F')
            nfem++;
        else
            nmas++;

        if(no->dado.deficienteFisico)
            ndef++;

        if(no->dado.gestante)
            ngest++;

        no = no->prox;
    }

    no = FNP->inicio;
    while(no){
        total++;
        if(no->dado.sexo == 'F')
            nfem++;
        else
            nmas++;

        if(no->dado.deficienteFisico)
            ndef++;

        if(no->dado.gestante)
            ngest++;

        no = no->prox;
    }
    cout << "Total de pessoas: " << total;
    cout << "\nNúmero de pessoas do sexo feminino: " << nfem;
    cout << "\nNúmero de pessoas do sexo masculino: " << nmas;
    cout << "\nQuantidades de pessoas que possuem alguma deficiência: " << ndef;
    cout << "\nQuantidade de mulheres grávidas: " << ngest;
}

void Inf_Empresas(FilaEmpresa *FP, FilaEmpresa *FNP){
    int total=0, nl=0, ne=0;

    NoFilaEmpresa *no = FP->inicio;
    while(no){
        total++;
        if(no->dado.tipo == 'L')
            nl++;

        no = no->prox;
    }

    no = FNP->inicio;
    while(no){
        total++;
        if(no->dado.tipo == 'E')
            ne++;

        no = no->prox;
    }
    cout << "Total de empresas: " << total;
    cout << "\nNúmero de empresas especializadas na entrega de livros: " << nl;
    cout << "\nNúmero de empresas especializadas na entrega de equipamentos: " << ne;
}

void Lista_Equi(PilhaObj *obj){
    if(!vaziaObj(obj)){
        PilhaObj aux;
        Objeto o;
        int cont=0;

        while(desempilharObj(obj, &o)){
            empilharObj(&aux, o);
        }
        cout << "Equipamentos presentes no estoque:";

        while(desempilharObj(&aux, &o)){
            cont++;
            cout << "\n\n" << cont << "º equipamento:";
            cout << "\nTipo: " << o.tipo;
            cout << "\nDescricao: " << o.descricao;
            empilharObj(obj, o);
        }
        desalocarObj(&aux);
    }
    else
        cout << "Não há equipamentos no estoque.";
}

void Lista_Livros(PilhaObj *obj){
    if(!vaziaObj(obj)){
        PilhaObj aux;
        Objeto o;
        int cont=0;

        while(desempilharObj(obj, &o)){
            empilharObj(&aux, o);
        }
        cout << "Livros presentes no estoque:";

        while(desempilharObj(&aux, &o)){
            cont++;
            cout << "\n\n" << cont << "º livro:";
            cout << "\nTipo: " << o.tipo;
            cout << "\nDescricao: " << o.descricao;
            empilharObj(obj, o);
        }
        desalocarObj(&aux);
    }
    else
        cout << "Não há livros no estoque.";
}

void Lista_Doacoes(){
    ifstream arquivo("doacao.txt");

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo.";
        return;
    }
    else{
        string aux;
        Ficha_Doacao ficha;
        PilhaDoacoes pilha;
        int prioritarios=0, cont=0;
        float media=0;

        while(!arquivo.eof()){
            getline(arquivo, ficha.dadosP.nomeCompleto, '#');
            if(ficha.dadosP.nomeCompleto == "")
                break;

            getline(arquivo, aux, '#');
            ficha.dadosP.sexo = toupper(aux[0]);
            getline(arquivo,  ficha.dadosP.CPF, '#');
            getline(arquivo, aux, '#');
            ficha.dadosP.idade = stoi(aux);
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("DEF_")-1);
            aux = aux[0];
            ficha.dadosP.deficienteFisico = stoi(aux);
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("GEST_")-1);
            aux = aux[0];
            ficha.dadosP.gestante = stoi(aux);
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("OBJ_")-1);
            ficha.dadosOBJ.tipo = toupper(aux[0]);
            getline(arquivo, ficha.dadosOBJ.descricao);

            empilharDoacoes(&pilha, ficha);

            cont++;
            media += ficha.dadosP.idade;
            if(ficha.dadosP.idade > 65 || ficha.dadosP.gestante == true || ficha.dadosP.deficienteFisico == true)
                prioritarios++;

        }
        cout << "Todas as doações já recebidas pela ONG:\n";
        mostrarDoacao(&pilha);
        cout << "\n\nNúmero de pessoas com prioridade que realizaram doações para ONG: " << prioritarios;
        cout << "\nIdade média dos doadores: " << media / cont;
        desalocarDoacoes(&pilha);
        arquivo.close();
    }
}

void Busca_CPF(){
    ifstream arquivo("doacao.txt");

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo.";
        return;
    }
    else{
        string aux, cpf;
        Ficha_Doacao ficha;
        PilhaDoacoes pilha;
        int cont=0;

        cout << "Informe um CPF: ";
        cin >> cpf;

        while(!arquivo.eof()){
            getline(arquivo, ficha.dadosP.nomeCompleto, '#');
            if(ficha.dadosP.nomeCompleto == "")
                break;

            getline(arquivo, aux, '#');
            ficha.dadosP.sexo = toupper(aux[0]);
            getline(arquivo,  ficha.dadosP.CPF, '#');
            getline(arquivo, aux, '#');
            ficha.dadosP.idade = stoi(aux);
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("DEF_")-1);
            aux = aux[0];
            ficha.dadosP.deficienteFisico = stoi(aux);
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("GEST_")-1);
            aux = aux[0];
            ficha.dadosP.gestante = stoi(aux);
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("OBJ_")-1);
            ficha.dadosOBJ.tipo = toupper(aux[0]);
            getline(arquivo, ficha.dadosOBJ.descricao);

            if(cpf == ficha.dadosP.CPF){
                cont++;
                empilharDoacoes(&pilha, ficha);
            }
        }
        cout << "\nO CPF informado realizou " << cont << " doacoes;\n\n";
        mostrarDoacao(&pilha);
        desalocarDoacoes(&pilha);
        arquivo.close();
    }
}

void Lista_Retiradas(){
    ifstream arquivo("retiradas.txt");

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo.";
        return;
    }
    else{
        string aux;
        Empresa emp;
        Objeto obj;
        int cont=0;

        cout << "Todas as retiradas já realizadas:\n\n";
        while(!arquivo.eof()){
            getline(arquivo, emp.nome, '#');
            if(emp.nome == "")
                break;
            emp.nome.erase(0, sizeof("Transportadora_")-1);
            cout << "\nNome da empresa: " << emp.nome ;
            getline(arquivo, emp.CNPJ, '#');
            cout << "\nCNPJ: " << emp.CNPJ;
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("Trans_")-1);
            emp.tipo = aux[0];
            cout << "\nTipo de transporte: ";
            if(emp.tipo == 'L')
                cout << "Livros";
            else
                cout << "Equipamentos";
            getline(arquivo, aux, '#');
            aux.erase(0, sizeof("OBJ_")-1);
            obj.tipo = aux[0];
            cout << "\nObjeto transportado: ";
            if(obj.tipo == 'L')
                cout << "Livro";
            else
                cout << "Equipamento";
            getline(arquivo, obj.descricao);
            cout << "\nDescricao do objeto: " << obj.descricao;
            cout << "\n\n-----------------------------------------------------\n";
        }
    }
}

