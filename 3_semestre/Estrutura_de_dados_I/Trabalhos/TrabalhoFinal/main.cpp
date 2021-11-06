#include <iostream>
using namespace std;

#include <cstring>
#include <fstream>
#include "lista.hpp"

void addUsuario(Lista *listaUsuariosRede, Usuario *novo){
    ofstream arq("saida.txt", ios::app);
    No *n = buscaL(listaUsuariosRede, novo->ID);
    if(!n){
        insereOrdenadoL(&listaUsuariosRede->inicio, novo);
        arq << "O usu�rio " << novo->nome << " (" << novo->ID << ")" << " foi adicionado na rede.\n";
        listaUsuariosRede->tamanho++;
    }
    else{
        arq << "Erro ao adicionar o usu�rio " << novo->nome << " (" << novo->ID << ")" << ". O ID " << novo->ID << " j� existe!\n";
    }
    arq.close();
}

void mostraUsuario(Lista *listaUsuariosRede){
    ofstream arq("saida.txt", ios::app);
    if(listaUsuariosRede->inicio)
        arq << "Usu�rios da rede: " << listaUsuariosRede << endl;
    else
        arq << "N�o h� usu�rios cadastrados na rede. " << endl;

    arq.close();
}

void addAmigo(Lista * listaUsuariosRede, int ID1, int ID2){
    ofstream arq("saida.txt", ios::app);
    No *n1 = buscaL(listaUsuariosRede, ID1);
    No *n2 = buscaL(listaUsuariosRede, ID2);
    if(ID1 == ID2){
        arq << "Erro ao criar amizade dos usu�rios com IDs " << ID1 <<  " e " << ID2 << "! � o mesmo usu�rio.\n";
    }
    else if(!n1 || !n2){
        arq << "Erro ao criar amizade dos usu�rios com IDs " << ID1 <<  " e " << ID2 << "! Inexist�ncia de um usu�rio.\n";
    }
    else{
        No *n3 = buscaL(n1->dado->amigos, ID2);
        if(n3){
            arq << "Erro ao criar amizade dos usu�rios com IDs " << ID1 <<  " e " << ID2 << "! Os usu�rios j� s�o amigos.\n";
        }
        else{
            insereOrdenadoL(&(n1->dado->amigos->inicio), n2->dado);
            insereOrdenadoL(&(n2->dado->amigos->inicio), n1->dado);
            n1->dado->amigos->tamanho++;
            n2->dado->amigos->tamanho++;
            arq << "Os usu�rios " << n1->dado->nome << " (" << n1->dado->ID << ") e " << n2->dado->nome << " (" << n2->dado->ID << ") se tornaram amigos.\n";
        }
    }
    arq.close();
}

void mostraAmigo(Lista * listaUsuariosRede, int ID){
    ofstream arq("saida.txt", ios::app);
    No *n = buscaL(listaUsuariosRede, ID);
    if(!n){
        arq << "Erro ao imprimir amigos do usu�rio com ID " << ID << ". O usu�rio n�o existe!\n";
    }
    else{
        arq << "Amigos de " << n->dado->nome << " (" << n->dado->ID << "): " << n->dado->amigos << endl;
    }
    arq.close();
}

void imprimirMediaIdadeAmigos(Lista * listaUsuariosRede, int ID){
    ofstream arq("saida.txt", ios::app);
    No *n = buscaL(listaUsuariosRede, ID);
    if(!n){
        arq << "Erro ao imprimir a m�dia de idade dos amigos do usu�rio com ID " << ID << "!\n";
    }
    else{
        float media = 0;
        No *a = n->dado->amigos->inicio;
        while(a){
            media += a->dado->idade;
            a = a->prox;
        }
        media = media / (n->dado->amigos->tamanho);
        if(!(n->dado->amigos->inicio))
            arq << "M�dia de idade dos amigos de " << n->dado->nome << " (" << n->dado->ID << "): " << endl;
        else
            arq << "M�dia de idade dos amigos de " << n->dado->nome << " (" << n->dado->ID << "): " <<  media << endl;
    }
    arq.close();
}

void imprimirAmigosEmComum(Lista *listaUsuariosRede, int ID1, int ID2, int sexo){
    ofstream arq("saida.txt", ios::app);
    No *n1 = buscaL(listaUsuariosRede, ID1);
    No *n2 = buscaL(listaUsuariosRede, ID2);
    if(!n1 || !n2){
        arq << "Erro ao imprimir amigos em comum dos usu�rios com IDs " << ID1 << " e " << ID2 << "!\n";
        arq.close();
        return;
    }

    if(sexo == 0){
        arq << "Amigos em comum entre " << n1->dado->nome << " (" << n1->dado->ID << ") e " << n2->dado->nome << " (" << n2->dado->ID << ") (sexo masculino): ";

        No *a1 = n1->dado->amigos->inicio;
        bool leu = false;

        while(a1){
            No* a2 = n2->dado->amigos->inicio;
            while(a2){
                if(a1->dado->ID == a2->dado->ID && a1->dado->sexo == 0){
                    if(leu){
                        arq << ", ";
                    }
                    arq << a1->dado->nome << "(" << a1->dado->ID << ")";
                    leu = true;
                    break;
                }
                a2 = a2->prox;
            }
            a1 = a1->prox;
        }
        arq << endl;
    }

    else if(sexo == 1){
        arq << "Amigos em comum entre " << n1->dado->nome << " (" << n1->dado->ID << ") e " << n2->dado->nome << " (" << n2->dado->ID << ") (sexo feminino): ";

        No *a1 = n1->dado->amigos->inicio;
        bool leu = false;

        while(a1){
            No* a2 = n2->dado->amigos->inicio;
            while(a2){
                if(a1->dado->ID == a2->dado->ID && a1->dado->sexo == 1){
                    if(leu){
                        arq << ", ";
                    }
                    arq << a1->dado->nome << "(" << a1->dado->ID << ")";
                    leu = true;
                    break;
                }
                a2 = a2->prox;
            }
            a1 = a1->prox;
        }
        arq << endl;
    }

    else if(sexo == 2){
        arq << "Amigos em comum entre " << n1->dado->nome << " (" << n1->dado->ID << ") e " << n2->dado->nome << " (" << n2->dado->ID << ") (todos os sexos): ";

        No *a1 = n1->dado->amigos->inicio;
        bool leu = false;

        while(a1){
            No* a2 = n2->dado->amigos->inicio;
            while(a2){
                if(a1->dado->ID == a2->dado->ID){
                    if(leu){
                        arq << ", ";
                    }
                    arq << a1->dado->nome << "(" << a1->dado->ID << ")";
                    leu = true;
                    break;
                }

                a2 = a2->prox;
            }
            a1 = a1->prox;
        }
        arq << endl;
    }
    arq.close();
}

void removerAmigo(Lista *listaUsuariosRede, int ID1, int ID2){
    ofstream arq("saida.txt", ios::app);
    No *n1 = buscaL(listaUsuariosRede, ID1);
    No *n2 = buscaL(listaUsuariosRede, ID2);

    if(!n1 || !n2){
        arq << "Erro ao remover a amizade entre os usu�rios com IDs " << ID1 << " e " << ID2 << "! Inexist�ncia de um usu�rio.\n";
        arq.close();
        return;
    }

    if(removeL(&(n1->dado->amigos->inicio), ID2) && removeL(&(n2->dado->amigos->inicio), ID1)){
       arq << "Os usu�rios " << n1->dado->nome << "(" << n1->dado->ID << ") e " << n2->dado->nome << "(" << n2->dado->ID << ") n�o s�o mais amigos\n";
       n1->dado->amigos->tamanho--;
       n2->dado->amigos->tamanho--;
    }
    else{
        arq << "Erro ao remover a amizade. N�o existe amizade entre os usu�rios com IDs  " << ID1 << " e " << ID2 << "!\n";
    }
    arq.close();
}

void removerTodasAmizades(Lista *listaUsuarioRede, No *n1){
    No *amigo = n1->dado->amigos->inicio;
    while(amigo){
        No *a = amigo;

        amigo = amigo->prox;

       removeL(&(n1->dado->amigos->inicio), a->dado->ID) && removeL(&(a->dado->amigos->inicio), n1->dado->ID);
       n1->dado->amigos->tamanho--;
       a->dado->amigos->tamanho--;
    }
}

void removerUsuarioRede(Lista *listaUsuariosRede, int ID1){
    ofstream arq("saida.txt", ios::app);
    No *n1 = buscaL(listaUsuariosRede, ID1);

    if(!n1){
        arq << "Erro ao excluir o usu�rio com ID " << ID1 << ". O usu�rio n�o existe!\n";
        arq.close();
        return;
    }

    removerTodasAmizades(listaUsuariosRede, n1);

    arq << "O usu�rio " << n1->dado->nome << " (" << n1->dado->ID << ") foi exclu�do da rede.\n";
    removeL(&(listaUsuariosRede->inicio), ID1);
    delete (n1->dado);
    listaUsuariosRede->tamanho--;

    arq.close();
}

void removerTodosUsariosRede(Lista * listaUsuariosRede){
    No *n = listaUsuariosRede->inicio;
    while(n){
        No *a = n;

        n = n->prox;

       removeL(&(listaUsuariosRede->inicio), a->dado->ID);
       listaUsuariosRede->tamanho--;
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
    ifstream arq("entrada.txt");

    if(!arq.is_open()){
        cout << "Erro ao abrir o arquivo!\n";
        return 0;
    }

    Lista *listaUsuariosRede = new Lista();

    while(!arq.eof()){
        string codigo;
        arq >> codigo;
        if(codigo == "addUsuario"){
            int ID;
            int idade;
            int sexo;
            string nome;
            arq >> ID;
            arq >> idade;
            arq >> sexo;
            arq >> nome;
            Usuario *novo = new Usuario(ID, idade, sexo, nome);

            addUsuario(listaUsuariosRede, novo);
        }
        else if(codigo == "imprimirUsuarios"){
            mostraUsuario(listaUsuariosRede);
        }
        else if(codigo == "addAmigo"){
            int ID1;
            int ID2;
            arq >> ID1;
            arq >> ID2;
            addAmigo(listaUsuariosRede, ID1, ID2);
        }
        else if(codigo == "imprimirAmigos"){
            int ID;
            arq >> ID;
            mostraAmigo(listaUsuariosRede, ID);
        }
        else if(codigo == "imprimirMediaIdadeAmigos"){
            int ID;
            arq >> ID;
            imprimirMediaIdadeAmigos(listaUsuariosRede, ID);
        }
        else if(codigo == "imprimirAmigosEmComum"){
            int ID1;
            int ID2;
            int sexo;
            arq >> ID1;
            arq >> ID2;
            arq >> sexo;
            imprimirAmigosEmComum(listaUsuariosRede, ID1, ID2, sexo);
        }
        else if(codigo == "removerAmigo"){
            int ID1;
            int ID2;
            arq >> ID1;
            arq >> ID2;
            removerAmigo(listaUsuariosRede, ID1, ID2);
        }
        else if(codigo == "removerUsuario"){
            int ID1;
            arq >> ID1;
            removerUsuarioRede(listaUsuariosRede, ID1);
        }
    }

    cout << "Programa executado com sucesso!\n";
    arq.close();
    removerTodosUsariosRede(listaUsuariosRede);
    delete listaUsuariosRede;
    return EXIT_SUCCESS;
}


