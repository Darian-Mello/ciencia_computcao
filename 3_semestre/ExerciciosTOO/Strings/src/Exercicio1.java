import java.util.Scanner;

public class Exercicio1 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        StringBuilder frase = new StringBuilder();

        System.out.println("Informe uma string qualquer: ");
        frase.append(entrada.nextLine());

        System.out.println("\n\nString Informada: " + frase.toString());
        for(int i=0; i<frase.length(); i++){
            if(Character.isWhitespace(frase.charAt(i))){
                frase.deleteCharAt(i);
                i--;
            }
        }
        System.out.println("\n\nString Informada sem os os espaços em branco: " + frase.toString());
        frase.reverse();
        /* Invertendo a Sring atrvés de um laço de repetição:
        StringBuilder aux = new StringBuilder();
        for(int i=frase.length()-1; i>=0; i--){
            aux.append(frase.charAt(i));
        }
        frase = new StringBuilder();
        frase.append(aux.toString());
        */
        System.out.println("\n\nString Informada sem os os espaços em branco e ao contrário: " + frase.toString());
    }
}
