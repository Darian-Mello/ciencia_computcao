import java.util.Scanner;

public class Exercicio4 {

    public static final int TAM = 10;
    public static void main(String[] args) {
        int a[] = new int[TAM], b[] = new int[TAM];
        int c[] = new int[TAM], s;

        System.out.println("Informe o vetor A: ");
        leitura(a);
        System.out.println("\n\nInforme o vetor B: ");
        leitura(b);

        s = calculaS(a, b);
        calculaC(a, b, c);

        System.out.println("\n\nValores de A: ");
        for(int i=0; i<TAM; i++){
            System.out.println(a[i]);
        }
        System.out.println("\n\nValores de B: ");
        for(int i=0; i<TAM; i++){
            System.out.println(b[i]);
        }
        System.out.println("\n\nValores de C: ");
        for(int i=0; i<TAM; i++){
            System.out.println(c[i]);
        }
        System.out.println("\n\nValor de S: " + s);
    }

    public static void leitura(int a[]){
            Scanner entrada = new Scanner(System.in);

            for(int i=0; i<TAM; i++){
                try{
                    System.out.println("Informe o " + (i+1) + "º valor: ");
                    String massa = entrada.next();
                    a[i] = Integer.parseInt(massa);
                }
                catch (Exception e){
                    System.out.println("Houve um erro:  " + e.getMessage() +"\n"+ e.getClass() + "\n\n");
                    i--;
                }
            }
    }

    public static int calculaS(int a[], int b[]){
        int s = 0;
        for(int i=0, j=(TAM-1); i<TAM; i++, j--){
            s += a[i] * b[j];
        }
        return s;
    }

    public static void calculaC(int a[], int b[], int c[]){
        for(int i=0; i<TAM; i++){
            c[i] = a[i] / b[i];
        }
    }
}
