import javax.swing.*;

public class Exercicio03 {
    public static void main(String[] args) {
        Cidade c1 = new Cidade();
        Professor prof = new Professor();

        try {
            prof.codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código do professor: "));
            prof.nome = JOptionPane.showInputDialog("Informe o nome: ");
            prof.cargaHoraria = Integer.parseInt(JOptionPane.showInputDialog("Informe a carga horária: "));
            prof.valorHora = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor recebido por hora: "));
            prof.numeroTurmas= Integer.parseInt(JOptionPane.showInputDialog("Informe a quantidade de turmas: "));
            prof.titulacao = JOptionPane.showInputDialog("Informe a titulação: ");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getClass() + "\n" + e.getMessage());
        }
        try {
            c1.codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código da cidade do professor: "));
            c1.uf = JOptionPane.showInputDialog("Informe o UF da cidade: ");
            c1.nome = JOptionPane.showInputDialog("Informe o nome da cidade: ");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getClass() + "\n" + e.getMessage());
        }
        prof.cidade = c1;
        prof.calculaSalario();
        prof.mostraProfessor();
    }
}
