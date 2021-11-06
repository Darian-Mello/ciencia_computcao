package br.edu.ifsul.notasAlunos;

import java.io.Serializable;

public class aluno implements Serializable {
    private String nome;
    private String nascimento;

    public aluno(){}

    public void setNome(String nome){
        this.nome = nome;
    }
    public void setNascimento(String nascimento){
        this.nascimento = nascimento;
    }
    public String getNome(){
        return this.nome;
    }
    public String getNascimento(){
        return this.nascimento;
    }
}
