import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Exercicio4LetraB {
    public static final int TAM = 10;

    public static void main(String[] args) {
        Set<String> lista = new HashSet<String>();
        boolean correto;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Informe 10 nomes!!");

        for(int i=0; i<TAM; i++){
            correto = false;
            do{
                try{
                    System.out.println("Informe o " + (i+1)+ "º nome: ");
                    lista.add(entrada.nextLine());
                    correto = true;
                }
                catch (Exception e){
                    System.out.println("Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
                }
            }while(!correto);
        }
        System.out.println("\n\nNomes informados:\n");
        for (String s : lista) {
            System.out.println(s +"\n");
        }
    }
}
