import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class Exercicio1 {
    public static void main(String[] args) {

        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        try{
            sdf.setLenient(false);
            Scanner entrada = new Scanner(System.in);
            System.out.println("Informe uma data no formato \"dd/mm/aaaa\": ");
            Date d = sdf.parse(entrada.next());
            System.out.println("\nData informada: " + sdf.format(d));
            System.out.println("A data foi informada corretamente.");
        }
        catch (Exception e){
            System.out.println("\nA data informada não é válida: " + e.getMessage());
        }
    }
}
