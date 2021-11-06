import javax.swing.*;
import java.util.ArrayList;

public class TesteArrayListNumero {
    public static final int TAM = 10;

    public static void main(String[] args) {
        ArrayList<Integer> lista = new ArrayList<>();
        boolean correto, acertou = false;

        JOptionPane.showMessageDialog(null, "Informe 10 números!!");

        for(int i=0; i<TAM; i++){
            correto = false;
            do{
                try{
                    lista.add(Integer.parseInt(JOptionPane.showInputDialog("Informe o " + (i+1)+ "º número: ")));
                    correto = true;
                }
                catch (Exception e){
                    JOptionPane.showMessageDialog(null, "Houve um erro:\n" +
                    e.getMessage() + "\n" + e.getClass());
                }
            }while(!correto);
        }
        for(int i=0; i<TAM; i++){
            if(lista.get(i) == 10 || lista.get(i) == 100 || lista.get(i) == 1000){
                acertou = true;
                break;
            }
        }
        if(acertou)
            JOptionPane.showMessageDialog(null, "Você informou um número premiado e gnhou R$50,00. Parabéns!!!");
        else
            JOptionPane.showMessageDialog(null, "Você não informou um número premiado. Tente novamente!");
    }
}
