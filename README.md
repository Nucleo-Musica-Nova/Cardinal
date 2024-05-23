# DISTRHO Cardinal

*Cardinal, the Rack!*

Nesse repositório temos alguns Projetos/WebSites usados pelo Núcleo Música Nova para produzir material didático voltado a sintetizadores modulares e fazer-los acessíveis através de WebSites. Esse tipo de projeto só é possível graças ao trabalho dos desenvolvedores do [Cardinal](https://cardinal.kx.studio/).  

# Como Compilar os Projetos

Esses cada patch está em um branch diferente. Para compilar basta instalar o emscripten, ativar o ambiente emscripten e rodar `emmake make USE_GLES2=true`. 

O ChatGPT pode ser ajudar com essa configuração, mas bascimente temos os seguintes comandos para Linux e Mac (para Windows é necessário fazer uma pesquisa ou usar o WSL2).

```
git clone https://github.com/nucleomusicanova/Cardinal
cd Cardinal
git submodule update --init --recursive
```

Após esses passos, siga o tutorinal nesse [link](https://emscripten.org/docs/getting_started/downloads.html) para baixar e ativar o ambiente `emscripten`.

Após ativado, compile usando:

```
emmake make USE_GLES2=true
```

Se tudo estiver certo, será criada uma pasta chamada `bin`, e dentro de `bin` haverá uma página html chamada `CardinalNative.html`, esse é o patch compilado.

# Criar WebSites com outros Patches

Para colocar seus `patches` em websites basta substituir o arquivo `welcome-wasm.vcv` dentro da pasta patches pelo seu `patch`.

--- 
> [!NOTE]
> Retiramos quase todos os módulos extra para deixar o site mais leve. Caso seja necessário adicionar algum módulo vocês podem nos contactar via esse [link](https://github.com/nucleomusicanova/Cardinal/discussions/categories/q-a).

