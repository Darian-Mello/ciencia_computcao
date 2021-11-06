import javax.swing.*;
import java.time.LocalDate;
import java.time.Month;
import java.time.Period;

public class Exercicio4 {

    public static void main(String[] args) {
        LocalDate hoje = LocalDate.now();
        LocalDate prova = LocalDate.of(2021, Month.AUGUST, 18);

        Period periodo = Period.between(hoje, prova);

        JOptionPane.showMessageDialog(null, "Olá! A prova ocorre no dia " + prova);
        JOptionPane.showMessageDialog(null, "Faltam " + periodo.getDays() + " dias para a prova");
    }
}
