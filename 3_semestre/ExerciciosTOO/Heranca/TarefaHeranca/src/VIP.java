import javax.swing.*;

public class VIP extends Ingresso{
    Double adicional;

    VIP(){
        this.adicional = 0.0;
    }

    public void ImprimeVIP(){
        JOptionPane.showMessageDialog(null, "O valor do ingresso VIP com o adicional é: " + String.format("%.2f", (this.valor + this.adicional)));
    }
}
