import javax.swing.*;

public class Exercicio02 {
    public static void main(String[] args) {
        Cursos curso = new Cursos();
        Disciplinas dis;
        boolean leu = false;
        int n=0;

        do{
            try {
                curso.nome = JOptionPane.showInputDialog("Informe o Nome do curso: ");
                curso.codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código: "));
                n = Integer.parseInt(JOptionPane.showInputDialog("Informe a quantidade de diciplinas que o curso tem: "));

                for(int i=0; i<n; i++){
                    dis = new Disciplinas();
                    dis.nome = JOptionPane.showInputDialog("Informe o nome da " + (i+1) + "ª disciplina: ");
                    dis.codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o código da " + (i+1) + "ª disciplina: "));
                    dis.horas = Integer.parseInt(JOptionPane.showInputDialog("Informe o total de horas " + (i+1) + "ª disciplina: "));

                    curso.di.add(dis);
                }

                leu = true;
            } catch(Exception e){
                JOptionPane.showMessageDialog(null,
                        "Houve um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);
        curso.MostraCurso();
    }
}
