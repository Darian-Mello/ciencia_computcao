package br.edu.ifsul.modelo;

import java.io.Serializable;

public class Empreiteira implements Serializable {
    private Integer codigo;
    private String nome;

    public Empreiteira(){}

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Integer getCodigo() {
        return codigo;
    }

    public String getNome() {
        return nome;
    }
}
