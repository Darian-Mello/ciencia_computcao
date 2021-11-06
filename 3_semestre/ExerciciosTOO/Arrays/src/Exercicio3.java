import javax.swing.*;
import java.util.Locale;

public class Exercicio3 {
    public static void main(String[] args) {
        String entrada, nomes[] = new String[10];
        boolean existe=false;
        int segue=0;

        JOptionPane.showMessageDialog(null, "Informe 10 nomes: ");
        for(int i=0; i<10; i++){
            try{
                nomes[i] = JOptionPane.showInputDialog("Informe o " + (i+1) + "º nome: ");
            }
            catch (Exception e){
                JOptionPane.showMessageDialog(null, "Ocorreu um erro:  "
                        + e.getMessage() + "\n\n" + e.getClass());
                i--;
            }
        }
        do{
            try{
                entrada = JOptionPane.showInputDialog("Informe um nome para verificar se esta presente no vetor: ");
                for(int i=0; i<10; i++) {
                    if (entrada.toUpperCase().equals(nomes[i].toUpperCase()))
                        existe = true;
                }
                if(existe)
                    JOptionPane.showMessageDialog(null, "O nome informado existe no vetor!!");
                else
                    JOptionPane.showMessageDialog(null, "O nome informado NÃO existe no vetor!!");
            }
            catch (Exception e){
                JOptionPane.showMessageDialog(null, "Ocorreu um erro:  "
                        + e.getMessage() + "\n\n" + e.getClass());
            }

            existe = false;
            segue = JOptionPane.showConfirmDialog(null, "Deseja pesquisar a existência de outro nome?");
        }while(segue == JOptionPane.YES_OPTION);
    }
}
