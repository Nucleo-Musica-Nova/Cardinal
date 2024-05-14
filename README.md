# DISTRHO Cardinal - Versão Personalizada

Versão do cardinal personalizado para o uso no site https://nucleomusicanova.github.io. 

Através desse repositório você consegue compilar o Cardinal para WebAssembly de modo a utilizar poucos módulos e assim também reduzir o tamalhos de alguns arquivos (visto que sites `.github.io`, suportam no máximo 100Mb).


## Como commpilar

O processo de compilação é simples.:

1. Baixe e instale o Git: https://git-scm.com/downloads
2. Baixe e instale o emscripten: https://emscripten.org/docs/getting_started/downloads.html
3. Faça o download desse repositório e desse branch utilizando o comando:

```
git clone --branch NMN-Cardinal-P1Partch --single-branch https://github.com/Nucleo-Musica-Nova/Cardinal.git --recursive
```
4. Ative o emscripten utilizando `source "PATH/PARA/emsdk/emsdk_env.sh"`;
5. Compile utilizando `emake make`.

Todos os arquivos estarão dentro da pasta `bin` após a compilação.
