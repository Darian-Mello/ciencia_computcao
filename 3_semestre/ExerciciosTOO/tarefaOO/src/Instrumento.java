import javax.swing.*;

public class Instrumento {
    String tipo;
    String especificacoes;
    Double valor;
    Integer fabricacao;

    public Instrumento(){
        this.tipo = "Não informado";
        this.especificacoes = "Não informado";
        this.valor = 0.0;
        this.fabricacao = 0;
    }

    public void leitura(){
        String entrada;
        boolean leu = false;

        do {
            try {
                this.tipo = JOptionPane.showInputDialog("Informe os dados do instrumento:\nInforme o tipo:");
                this.valor = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor:"));
                this.fabricacao = Integer.parseInt(JOptionPane.showInputDialog("Informe o ano de fabricação:"));
                this.especificacoes = JOptionPane.showInputDialog("Informe as especificações:");
                leu = true;
            } catch (Exception e) {
                JOptionPane.showMessageDialog(null, "Ocorreu um erro na leitura dos dados. Informe novamente, por favor. "
                        + "\n" + e.getClass() + "\n" + e.getMessage() + "\n");
            }
        }while(!leu);
    }
    public void exibe(){
        String saida = "Tipo do instrumento: " + this.tipo;
        saida += "\nValor: " + this.valor;
        saida += "\nAno de fabricação: " + this.fabricacao;
        saida += "\nEspecificações: " + this.especificacoes;
        JOptionPane.showMessageDialog(null, "Dados do instrumento:\n\n" + saida);
    }
}
