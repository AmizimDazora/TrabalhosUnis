public class Perfil {
    private Usuario user;
    private String id;
    private String nome;
    private String dataNacimento;
    private String peso;
    private String genero;
    private Preferencia preferencias;
    private String proficao;
    private String hobby;
    private Localisacao local;

    public Preferencia getPreferencias() {
        return preferencias;
    }
    public void setDataNacimento(String dataNacimento) {
        this.dataNacimento = dataNacimento;
    }
    public String getDataNacimento() {
        return dataNacimento;
    }
    public void setGenero(String genero) {
        this.genero = genero;
    }
    public String getGenero() {
        return genero;
    }
    public void setHobby(String hobby) {
        this.hobby = hobby;
    }public String getHobby() {
        return hobby;
    }public void setId(String id) {
        this.id = id;
    }public String getId() {
        return id;
    }public void setNome(String nome) {
        this.nome = nome;
    }public String getNome() {
        return nome;
    }public void setPeso(String peso) {
        this.peso = peso;
    }public String getPeso() {
        return peso;
    }public void setPreferencias(Preferencia preferencias) {
        this.preferencias = preferencias;
    }public String getProficao() {
        return proficao;
    }public void setProficao(String proficao) {
        this.proficao = proficao;
    }public Usuario getUser() {
        return user;
    }public void setUser(Usuario user) {
        this.user = user;
    }
    public Localisacao getLocal() {
        return local;
    }public void setLocal(Localisacao local) {
        this.local = local;
    }
}
