import javax.swing.*;

public class Exeicicio01 {
    public static void main(String[] args) {
        Cidade c1 = new Cidade();
        String nome="", uf="";
        Integer codigo= 0;

        try {
            codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código da cidade: "));
            uf = JOptionPane.showInputDialog("Informe o UF da cidade: ");
            nome = JOptionPane.showInputDialog("Informe o nome da cidade: ");
        }catch (Exception e){
            JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getClass() + "\n" + e.getMessage());
        }

        c1.mostraCidade();
        c1 = new Cidade(codigo, nome, uf);
        c1.mostraCidade();
    }
}
