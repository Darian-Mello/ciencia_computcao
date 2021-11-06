package br.edu.ifsul.notasAlunos;

import java.io.Serializable;

public class Disciplina implements Serializable {
    private String nome;
    private Integer cargaHoraria;

    public Disciplina(){}

    public void setNome(String nome){
        this.nome = nome;
    }
    public void setCargaHoraria(Integer cargaHoraria){
        this.cargaHoraria = cargaHoraria;
    }
    public String getNome(){
        return this.nome;
    }
    public Integer getCargaHoraria(){
        return this.cargaHoraria;
    }
}
