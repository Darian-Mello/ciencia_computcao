import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Scanner;

public class Exercicio5 {
    public static final int TAM = 5;

    public static void main(String[] args) {
        String codigo[] = new String[TAM];
        String nome[] = new String[TAM];
        Calendar dataNscimento[] = new Calendar[TAM];
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        Double salario[] = new Double[TAM];
        int reajuste;
        Double aux;

        Scanner entrada = new Scanner(System.in);

        for(int i=0; i<TAM; i++){
            System.out.println("\n\nInforme a data de nascimento do " + (i+1) + "º cliente: ");
            dataNscimento[i] =  Calendar.getInstance();
            try{
                sdf.setLenient(false);
                dataNscimento[i].setTime(sdf.parse(entrada.next()));
            }
            catch (Exception e){
                System.out.println( "\nOcorreu um erro: " + e.getMessage() + "\n\n" + e.getClass());
                i--;
                continue;
            }
            System.out.println("Informe o codigo do " + (i+1) + "º cliente: ");
            codigo[i] = entrada.next();
            System.out.println("Informe o nome do " + (i+1) + "º cliente: ");
            nome[i] = entrada.next();
            System.out.println("Informe o salário do " + (i+1) + "º cliente: ");
            salario[i] = entrada.nextDouble();
        }

        System.out.println("\n\nInforme a porcentagem de reajuste dos funcionários: ");
        reajuste = entrada.nextInt();

        for(int i=0; i<TAM; i++){
            aux = (salario[i] * reajuste) / 100;
            salario[i] += aux;
        }

        for(int i=0; i<TAM; i++){
            System.out.println("\n\nNome: " + nome[i]);
            System.out.println("Codigo: " + codigo[i]);
            System.out.println("Data de Nascimento: " + sdf.format(dataNscimento[i].getTime()));
            System.out.println("Salário com o reajuste: " + salario[i]);
        }
    }
}