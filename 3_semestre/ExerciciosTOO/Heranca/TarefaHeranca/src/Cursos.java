import javax.swing.*;
import java.util.ArrayList;

public class Cursos{
    String nome;
    Integer codigo;
    ArrayList<Disciplinas> di;

    Cursos(){
        this.nome = "Não Informado";
        this.codigo = 0;
        this.di = new ArrayList<>();
    }

    public void MostraCurso(){
        String saida = "Nome do curso: " + this.nome +
                "\nCódigo: " + this.codigo;
        JOptionPane.showMessageDialog(null, saida);

        int i = 1;
        for (Disciplinas mostra: this.di) {
            saida = "Disciplina " + i + ", do curso " + this.nome +
                    ":\n\nNome: " + mostra.nome +
                    "\nCódigo: " + mostra.codigo +
                    "\nTotal de horas: " + mostra.horas;
            JOptionPane.showMessageDialog(null, saida);
        }
    }
}
