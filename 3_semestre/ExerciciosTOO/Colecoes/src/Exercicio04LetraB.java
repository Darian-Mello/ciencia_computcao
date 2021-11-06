import javax.swing.*;
import java.util.HashSet;
import java.util.Set;

public class Exercicio04LetraB {
        public static void main(String[] args) {
            Set<Cadastros> cad = new HashSet<Cadastros>();

            String menu = "Menu:\n" +
                    "\n0 - Sair;" +
                    "\n1 - Cadastrar Pessoa" +
                    "\n2 - Mostrar Cadastros" +
                    "\n3 - Mostrar Média Salarial;";
            Byte opcao = 0;
            do {
                try {
                    opcao = Byte.parseByte(JOptionPane.showInputDialog(menu));
                } catch (Exception e) {
                    JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
                }
                if (opcao == 0)
                    JOptionPane.showMessageDialog(null, "Programa finalizado");
                else if (opcao == 1) {
                    Cadastros aux = new Cadastros();
                    aux.Leitura();
                    if (cad.add(aux))
                        JOptionPane.showMessageDialog(null, "Cadastro realizado com sucesso.");
                    else
                        JOptionPane.showMessageDialog(null, "Essa pesso já pussui um cadastro.");
                } else if (opcao == 2) {
                    for (Cadastros c : cad) {
                        c.Mostra();
                    }
                } else if (opcao == 3) {
                    Double media = 0.0;
                    for (Cadastros c : cad) {
                        media += c.salario;
                    }
                    if (media != 0.0)
                        media = media / cad.size();
                    JOptionPane.showMessageDialog(null, "A média salarial dos cadastrados é: " + String.format("%.2f", media));
                } else
                    JOptionPane.showMessageDialog(null, "Essa opção não existe no menu.");
            } while (opcao != 0);
        }
}
