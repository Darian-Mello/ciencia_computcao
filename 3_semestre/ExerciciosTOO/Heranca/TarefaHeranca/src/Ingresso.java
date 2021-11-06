import javax.swing.*;

public class Ingresso {
    Double valor;

    Ingresso(){
        valor = 0.0;
    }

    public void ImprimeValor(){
        JOptionPane.showMessageDialog(null, "O valor do ingresso é: " + String.format("%.2f", this.valor));
    }
}
