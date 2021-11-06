import javax.swing.*;

public class Exercicio03 {
    public static void main(String[] args) {
        Pessoa pes = new Pessoa();
        Profissao pro = new Profissao();
        Cidade cid = new Cidade();
        boolean leu = false;

        do{
            try {
                pes.nome = JOptionPane.showInputDialog("Informe o Nome da pessoa: ");
                pes.cpf = JOptionPane.showInputDialog("Informe o CPF: ");
                pes.telefone = JOptionPane.showInputDialog("Informe o telefone: ");
                cid.nome = JOptionPane.showInputDialog("Informe o Nome da cidade: ");
                cid.estado = JOptionPane.showInputDialog("Informe o Estado onde a cidade está localizada: ");
                pro.nome = JOptionPane.showInputDialog("Informe o nome da profissão: ");
                pro.descricao = JOptionPane.showInputDialog("Informe a descricao da profissão: ");

                pes.cid = cid;
                pes.prof = pro;

                leu = true;
            } catch(Exception e){
                JOptionPane.showMessageDialog(null,
                        "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);

        pes.MostraPessoa();
    }
}
