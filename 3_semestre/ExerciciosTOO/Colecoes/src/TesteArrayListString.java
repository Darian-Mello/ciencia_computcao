import java.util.ArrayList;
import java.util.Scanner;

public class TesteArrayListString {
    public static final int TAM = 10;

    public static void main(String[] args) {
        ArrayList<String> lista = new ArrayList<>();
        boolean correto;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Informe 10 frases!!");

        for(int i=0; i<TAM; i++){
            correto = false;
            do{
                try{
                    System.out.println("Informe a " + (i+1)+ "ª frase: ");
                    lista.add(entrada.nextLine());
                    correto = true;
                }
                catch (Exception e){
                    System.out.println("Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
                }
            }while(!correto);
        }
        System.out.println("\n\nFrases informadas:\n");
        for (String s : lista) {
            System.out.println(s +"\n");
        }
        lista.remove(2);
        lista.remove(4);
        System.out.println("Foram removidas duas frases da lista(Na posição 2 e 4);");
        System.out.println("A quantidade de elementos na lista agora é de: "+ (lista.size()));
    }
}
