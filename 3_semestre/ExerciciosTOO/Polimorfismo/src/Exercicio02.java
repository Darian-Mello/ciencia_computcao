import javax.swing.*;

public class Exercicio02 {
    public static void main(String[] args) {
        Cidade c1 = new Cidade();
        Pessoa pessoa = new Pessoa();

        try {
            pessoa.codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código da pessoa: "));
            pessoa.nome = JOptionPane.showInputDialog("Informe o nome: ");
            pessoa.cargaHoraria = Integer.parseInt(JOptionPane.showInputDialog("Informe a carga horária: "));
            pessoa.valorHora = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor recebido por hora: "));
        }catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getClass() + "\n" + e.getMessage());
        }
        try {
            c1.codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código da cidade da pessoa: "));
            c1.uf = JOptionPane.showInputDialog("Informe o UF da cidade: ");
            c1.nome = JOptionPane.showInputDialog("Informe o nome da cidade: ");
        }catch (Exception e){
            JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getClass() + "\n" + e.getMessage());
        }
        pessoa.cidade = c1;
        pessoa.calculaSalario();
        pessoa.mostraPessoa();
    }
}
