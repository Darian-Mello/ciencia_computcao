import javax.swing.*;
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Exercicio2 {

    public static void main(String[] args) {
        Calendar data = Calendar.getInstance();
        SimpleDateFormat sdt = new SimpleDateFormat("'Olá, hoje é' EEEE, d 'de' MMMM 'de' yyyy");

        JOptionPane.showMessageDialog(null, sdt.format(data.getTime()));
    }
}
