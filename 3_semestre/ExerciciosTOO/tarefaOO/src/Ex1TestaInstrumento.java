import java.util.Scanner;

public class Ex1TestaInstrumento {
    public static void main(String[] args) {
        Instrumento gaita = new Instrumento();
        Scanner ler = new Scanner(System.in);
        String entrada;
        boolean leu = false;

        do {
            try {
                System.out.println("Informe os dados do instrumento: \nInforme o tipo: ");
                gaita.tipo = ler.nextLine();
                System.out.println("Informe o valor: ");
                entrada = ler.nextLine();
                gaita.valor = Double.parseDouble(entrada);
                System.out.println("Informe o ano de fabricação: ");
                entrada = ler.nextLine();
                gaita.fabricacao = Integer.parseInt(entrada);
                System.out.println("Informe as especificações: ");
                gaita.especificacoes = ler.nextLine();

                leu = true;
            } catch (Exception e) {
                System.out.println("Ocorreu um erro na leitura dos dados. Informe novamente, por favor. "
                        + "\n" + e.getClass() + "\n" + e.getMessage() + "\n");
            }
        }while(!leu);

        System.out.println("\n\nValores lidos: ");
        System.out.println("Tipo do instrumento: " + gaita.tipo);
        System.out.println("Valor: " + gaita.valor);
        System.out.println("Ano de fabricação: " + gaita.fabricacao);
        System.out.println("Especificações: " + gaita.especificacoes);
    }
}
