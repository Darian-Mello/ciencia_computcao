package br.edu.ifsul.modelo;

import java.io.Serializable;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;

public class Obra implements Serializable {
    private Integer codigo;
    private String nome;
    private String descricao;
    private Calendar dataEntrega;
    private Double orcamento;
    private Double custoTotal;
    private Empreiteira empreiteira;
    private List<Terreno> terrenos = new ArrayList();

    public Obra(){}

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public void setDataEntrega(Calendar dataEntrega) {
        this.dataEntrega = dataEntrega;
    }

    public void setOrcamento(Double orcamento) {
        this.orcamento = orcamento;
    }

    public void setCustoTotal(Double custoTotal) {
        this.custoTotal = custoTotal;
    }

    public void setEmpreiteira(Empreiteira empreiteira) {
        this.empreiteira = empreiteira;
    }

    public void setTerrenos(List<Terreno> terrenos) {
        this.terrenos = terrenos;
    }

    public Integer getCodigo() {
        return codigo;
    }

    public String getNome() {
        return nome;
    }

    public String getDescricao() {
        return descricao;
    }

    public Calendar getDataEntrega() {
        return dataEntrega;
    }

    public Double getOrcamento() {
        return orcamento;
    }

    public Double getCustoTotal() {
        return custoTotal;
    }

    public Empreiteira getEmpreiteira() {
        return empreiteira;
    }

    public List<Terreno> getTerrenos() {
        return terrenos;
    }

    public Double calcularMetragemTotal(){
        Double total = 0.0;
        for (Terreno t: this.terrenos) {
            total += t.getMetrosQuadrados();
        }
        return total;
    }

    public void exibirDados(){
        SimpleDateFormat formato = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println("\nDados da Obra: " +
                "\n\nC??digo: " + getCodigo() +
                "\nNome: " + getNome() +
                "\nDescricao: " + getDescricao() +
                "\nData de entrega: " + formato.format(getDataEntrega().getTime()) +
                "\nOr??amento: " + String.format("%.2f", getOrcamento()) +
                "\nCusto total: " + String.format("%.2f", getCustoTotal())
        );
        System.out.println("\nEmpreiteira: " +
                "\nC??digo: " + getEmpreiteira().getCodigo() +
                "\nNome: " + getEmpreiteira().getNome()
        );
        System.out.println("\nTerrenos e propriet??rios: ");
        int i=1;
        for (Terreno t: this.terrenos) {
            System.out.println("\nC??digo do " + i + "?? terreno: " + t.getCodigo() +
                    "\nLargura do " + i + "?? terreno: " + String.format("%.2f", t.getLargura()) +
                    "\nComprimento do " + i + "?? terreno: " + String.format("%.2f", t.getComprimento()) +
                    "\nMetros quadrados do " + i + "?? terreno: " + String.format("%.2f", t.getMetrosQuadrados()) +
                    "\nC??digo do propriet??rio do " + i + "?? terreno: " + t.getProprietario().getCodigo() +
                    "\nCPF do propriet??ario do " + i + "?? terreno: " + t.getProprietario().getCpf() +
                    "\nNome do propriet??rio do " + i + "?? terreno: " + t.getProprietario().getNome()
            );
            i++;
        }
        System.out.println("\nMetragem total dos terrenos: " + String.format("%.2f", calcularMetragemTotal()) + "\n\n");
    }
}
