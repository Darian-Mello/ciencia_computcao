package br.edu.ifsul.testaNotas;

import br.edu.ifsul.notasAlunos.Disciplina;
import br.edu.ifsul.notasAlunos.Nota;
import br.edu.ifsul.notasAlunos.aluno;

import javax.swing.*;
import java.time.format.DateTimeFormatter;

public class tarefaEncapsulamento {
    public static void main(String[] args) {
        Disciplina disc = new Disciplina();
        Nota nota[] = new Nota[5];
        boolean rodou = false;

        DateTimeFormatter formato = DateTimeFormatter.ofPattern("dd/MM/yyyy");

        do{
            try{
                String entrada = JOptionPane.showInputDialog("Informe o nome da Disciplina: ");
                disc.setNome(entrada);
                Integer hora = Integer.parseInt(JOptionPane.showInputDialog("Informe a carga horária da Disciplina: "));
                disc.setCargaHoraria(hora);
                rodou = true;
            } catch (Exception e){
                JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!rodou);

        for(int i=0; i<5; i++) {
            rodou = false;
            do {
                try {
                    nota[i] = new Nota();
                    aluno alunos = new aluno();
                    String entrada = JOptionPane.showInputDialog("Informe o nome do " + (i + 1) + "º aluno: ");
                    alunos.setNome(entrada);
                    entrada = JOptionPane.showInputDialog("Informe a data de nascimento do " + (i + 1) + "º aluno: ");
                    alunos.setNascimento(entrada);
                    Double notas = Double.parseDouble(JOptionPane.showInputDialog("Informe a nota da prova do " + (i + 1) + "º aluno: "));
                    nota[i].setNotaProva(notas);
                    notas = Double.parseDouble(JOptionPane.showInputDialog("Informe a nota do trabalho do " + (i + 1) + "º aluno: "));
                    nota[i].setNotaTrabalho(notas);

                    nota[i].setPessoa(alunos);
                    nota[i].setDisc(disc);
                    rodou = true;
                } catch (Exception e) {
                    JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
                }
            } while (!rodou);
        }

        for(int i=0; i<5; i++) {
            String saida = "Informcões sobre o " + i + "º aluno: \n\n" +
                    "Nome; " + nota[i].getPessoa().getNome() +
                    "\nData de nascimento: " + nota[i].getPessoa().getNascimento() +
                    "\nDisciplina: " + nota[i].getDisc().getNome() +
                    "\nCarga horária da disciplina: " + nota[i].getDisc().getCargaHoraria() +
                    "\nNota do trabalho: " + nota[i].getNotaTrabalho() +
                    "\nNota da prova: " + nota[i].getNotaProva() +
                    "\nNota final: " + nota[i].notaFinal();
            JOptionPane.showMessageDialog(null, saida);
        }
    }
}
