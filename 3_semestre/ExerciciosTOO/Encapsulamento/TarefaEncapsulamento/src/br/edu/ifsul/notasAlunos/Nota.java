package br.edu.ifsul.notasAlunos;

import javax.swing.*;
import java.io.Serializable;

public class Nota implements Serializable {
    private aluno pessoa;
    private Disciplina disc;
    private Double notaProva;
    private Double notaTrabalho;

    public Nota(){}

    public void setPessoa(aluno pessoa) {
        this.pessoa = pessoa;
    }
    public void setDisc(Disciplina disc) {
        this.disc = disc;
    }
    public void setNotaProva(Double notaProva) {
        while(notaProva < 0 || notaProva > 6){
            notaProva = Double.parseDouble(JOptionPane.showInputDialog("Não foi possível atribuir a nota da prova. O valor é inválido.\nInforme a nota da prova: "));
        }
        this.notaProva = notaProva;
    }
    public void setNotaTrabalho(Double notaTrabalho) {
        while(notaTrabalho < 0 || notaTrabalho > 4){
            notaTrabalho = Double.parseDouble(JOptionPane.showInputDialog("Não foi possível atribuir a nota da prova. O valor é inválido.\nInforme a nota da prova: "));
        }
        this.notaTrabalho = notaTrabalho;
    }
    public aluno getPessoa() {
        return pessoa;
    }
    public Disciplina getDisc() {
        return disc;
    }
    public Double getNotaProva() {
        return notaProva;
    }
    public Double getNotaTrabalho() {
        return notaTrabalho;
    }

    public Double notaFinal(){
        return (this.notaProva + this.notaTrabalho);
    }
}