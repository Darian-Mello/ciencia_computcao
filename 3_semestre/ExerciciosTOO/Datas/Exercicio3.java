import javax.swing.*;
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Exercicio3 {

    public static void main(String[] args) {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        Calendar data = Calendar.getInstance();

        try{
            sdf.setLenient(false);
            String entrada = JOptionPane.showInputDialog("Olá, Informe uma data: ");
            data.setTime(sdf.parse(entrada));
            JOptionPane.showMessageDialog(null, "\nData informada: " + sdf.format(data.getTime()));

            data.add(Calendar.DAY_OF_YEAR, 90);
            JOptionPane.showMessageDialog(null, "\nData após 90 dias: " + sdf.format(data.getTime()));
        }
        catch (Exception e){
            JOptionPane.showMessageDialog(null, "\nOcorreu um erro: " + e.getMessage() + "\n\n" + e.getClass());
        }
    }
}
