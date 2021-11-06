import javax.swing.*;

public class Exercicio2 {
    public static void main(String[] args) {
        double valores[] = new double[10], media=0;
        String saida="";

        JOptionPane.showMessageDialog(null, "Informe 10 números inteiros: ");
        for(int i=0; i<10; i++){
            try{
                valores[i] = Integer.parseInt(JOptionPane.showInputDialog("Informe o " + (i+1) + "º valor: "));
                media += valores[i];
            }
            catch (Exception e){
                JOptionPane.showMessageDialog(null, "Ocorreu um erro:  "
                        + e.getMessage() + "\n\n" + e.getClass());
                i--;
            }
        }
        media = media / 10;
        JOptionPane.showMessageDialog(null, "A média dos valores digitados é igual a: " + media);
        saida += "Exibindo os valores acima da média(" + media + "):\n\n";
        for(int i=0; i<10; i++){
            if(valores[i] > media)
                saida += valores[i] + "\n";
        }
        JOptionPane.showMessageDialog(null, saida);
        saida = "Exibindo os valores abaixo da média(" + media + "):\n\n";
        for(int i=0; i<10; i++){
            if(valores[i] < media)
                saida += valores[i] + "\n";
        }
        JOptionPane.showMessageDialog(null, saida);
    }
}
