import javax.swing.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Objects;

public class Cadastros {
    DateTimeFormatter formato = DateTimeFormatter.ofPattern("dd/MM/yyyy");
    String Nome;
    String CPF;
    LocalDate DataNescimento;
    Double salario;

    Cadastros(){
        this.Nome = "Não informado";
        this.CPF = "Não informado";
        this.DataNescimento = LocalDate.now();
        this.salario = 0.0;
    }

    public void Leitura(){
        boolean leu = false;
        do{
            try {
                this.Nome = JOptionPane.showInputDialog("Informe o nome: ");
                this.CPF = JOptionPane.showInputDialog("Informe o CPF: ");
                this.salario = Double.parseDouble(JOptionPane.showInputDialog("Informe o salário: "));
                this.DataNescimento = LocalDate.parse(JOptionPane.showInputDialog("Informe a dta de nascimento no formato \"dd/mm/aaaa\": "), formato);
                leu = true;
            }
            catch (Exception e){
                JOptionPane.showMessageDialog(null, "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);
    }

    public void Mostra() {
        String s = "Nome: " + this.Nome
        + "\nCPF: " + this.CPF
        + "\nSalário: " + String.format("%.2f", this.salario)
        + "\nData de nascimento : " + this.DataNescimento.format(formato);

        JOptionPane.showMessageDialog(null, "Cadastro: \n\n" + s);
    }

    @Override
    public boolean equals(Object o){
        if(this == o)
            return true;
        if (o != null || getClass() != o.getClass())
            return false;
        Cadastros c = (Cadastros) o;
        return Objects.equals(CPF, c.CPF);
    }

    @Override
    public int hashCode(){
        return Objects.hash(CPF);
    }
}
