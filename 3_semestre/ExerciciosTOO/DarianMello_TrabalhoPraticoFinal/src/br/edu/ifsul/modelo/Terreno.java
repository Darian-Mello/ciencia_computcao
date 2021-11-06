package br.edu.ifsul.modelo;

import java.io.Serializable;

public class Terreno implements Serializable {
    private Integer codigo;
    private Double metrosQuadrados;
    private Double largura;
    private Double comprimento;
    private Proprietario proprietario;

    public Terreno(){}

    public Proprietario getProprietario() {
        return proprietario;
    }

    public Integer getCodigo() {
        return codigo;
    }

    public Double getMetrosQuadrados() {
        return metrosQuadrados;
    }

    public Double getLargura() {
        return largura;
    }

    public Double getComprimento() {
        return comprimento;
    }

    public void setProprietario(Proprietario proprietario) {
        this.proprietario = proprietario;
    }

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
    }

    public void setMetrosQuadrados(Double metrosQuadrados) {
        this.metrosQuadrados = metrosQuadrados;
    }

    public void setLargura(Double largura) {
        this.largura = largura;
    }

    public void setComprimento(Double comprimento) {
        this.comprimento = comprimento;
    }
}
