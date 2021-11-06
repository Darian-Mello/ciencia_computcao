import java.util.Scanner;

public class Exercicio3 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        StringBuilder frase = new StringBuilder();

        System.out.println("Informe uma frase qualquer: ");
        frase.append(entrada.nextLine());

        int sexo;
        int sexual;

        do{
            sexo = frase.indexOf("sexo");
            if(sexo != -1) {
                frase.delete(sexo, sexo + 4);
                frase.insert(sexo, "CENSURADO");
            }
            sexual = frase.indexOf("sexual");
            if(sexual != -1) {
                frase.delete(sexual, sexual + 6);
                frase.insert(sexual, "CENSURADO");
            }
        }while(sexo != -1 || sexual != -1);

        System.out.println("\nFrase informada: " + frase);
    }
}
