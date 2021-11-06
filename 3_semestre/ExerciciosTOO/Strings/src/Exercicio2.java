import java.util.Scanner;

public class Exercicio2 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        StringBuilder frase = new StringBuilder();

        System.out.println("Informe uma frase qualquer: ");
        frase.append(entrada.nextLine());

        int sexo = frase.indexOf("sexo");
        int sexual = frase.indexOf("sexual");

        if(sexo != -1 || sexual != -1)
            System.out.println("Conteúdo impróprio");
        else
            System.out.println("Conteúdo liberado");
    }
}
