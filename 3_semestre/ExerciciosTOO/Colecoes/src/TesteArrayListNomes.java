import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class TesteArrayListNomes {
    public static final int TAM = 10;

    public static void main(String[] args) {
        ArrayList<String> lista = new ArrayList<>();
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
        Collections.sort(lista);
        System.out.println("\n\nNomes informados em ordem alfabética:\n");
        lista.stream().forEach(elemento -> System.out.println(elemento + "\n"));
    }
}
