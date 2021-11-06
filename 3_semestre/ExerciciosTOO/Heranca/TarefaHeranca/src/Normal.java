import javax.swing.*;

public class Normal extends Ingresso{
    Integer cadeira;

    Normal(){
        this.cadeira = 0;
    }

    public void ImprimeNORMAL(){
        JOptionPane.showMessageDialog(null, "O valor do ingresso normal é: " + String.format("%.2f", this.valor));
        JOptionPane.showMessageDialog(null, "O Número da cadeira do ingresso normal é: " + this.cadeira);
    }
}
