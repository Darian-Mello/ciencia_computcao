package br.edu.ifsul.modelo;

import java.io.Serializable;

public class Proprietario implements Serializable {
    private Integer codigo;
    private String nome;
    private String cpf;

    public Proprietario(){}

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public Integer getCodigo() {
        return codigo;
    }

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }
}
