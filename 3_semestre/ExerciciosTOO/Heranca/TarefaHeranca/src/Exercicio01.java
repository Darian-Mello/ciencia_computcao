import javax.swing.*;

public class Exercicio01 {
    public static void main(String[] args) {
        VIP vip = new VIP();
        Normal norm = new Normal();
        boolean leu = false;

        do{
            try {
                norm.valor = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor do ingresso: "));
                vip.valor = norm.valor;
                vip.adicional = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor do adicional VIP: "));
                norm.cadeira = Integer.parseInt(JOptionPane.showInputDialog("Informe o número da cadeira do ingresso normal: "));

                leu = true;
            } catch(Exception e){
                JOptionPane.showMessageDialog(null,
                        "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);
        vip.ImprimeVIP();
        norm.ImprimeNORMAL();
    }
}
