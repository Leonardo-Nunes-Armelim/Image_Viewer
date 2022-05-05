# Image Viewer

![Image Viewer](https://raw.githubusercontent.com/Leonardo-Nunes-Armelim/Image_Viewer/master/images/Image%20Viewer.png)

## Relatório

***>>>Optei pelo uso do formato .png<<<***

- ***Método Utilizado:***

A metodologia que eu utilizei foi o Agile, onde em cada sprint adicionei uma nova funcionalidade.

- ***Dificuldades Encontradas:***

1 – Quando o zoom é aplicado, a imagem perde um pouco de resolução. Pesquisei outras alternativas para solucionar esse problema, mas não identifique nenhuma solução para isso.

2 – Ao aplicar zoom, mover a imagem com um dos botões (Up, Left, Right e Down) e posteriormente rotacionar a imagem para qualquer um dos lados o ponto focal da imagem visualizada muda, e consequentemente não temos a imagem desejada rotacionada, mas sim um outro ponto da imagem que é exibida rotacionada.

3 – Pesquisei como fazer o brilho da imagem ser alterado, mas não encontrei uma solução para o QLabel utilizando o QPixmap. Somente para outras soluções como uma imagem binária e outros tipos de exibição de imagens, no qual não consegui converter a imagem QPixmap nesses outros formatos.

4 – A mesma explicação do item 3 serve para o contraste.

- ***Técnicas Aplicadas***

Para o desenvolvimento da ferramenta utilizei C++ com a ferramenta Qt.

Procurei desenvolver a solução focando os requisitos obrigatórios e as funcionalidades citadas. Na sequência procurei agregar os demais requisitos “Bônus”.

- ***Possíveis Melhorias Futuras***

Futuramente seria interessante corrigir os bugs encontrados item “Dificuldades Encontradas”. Além disso poderia ser acrescentadas mais funcionalidades como fazer um zoom da imagem, rotacionar, selecionar a tela desejada, fazer a aplicação de brilho e contraste e por fim salvar a imagem final em um novo arquivo, como por exemplo .png.

- ***Minha Avaliação do Resultado***

Eu aprendi bastante construindo essa solução, mesmo consumindo 12 horas de desenvolvimento no total. Ainda não estou muito satisfeito com algumas funcionalidades como demonstradas no item “Dificuldades Encontradas”, mas fiquei feliz de ter desenvolvido uma ferramenta GUI (Graphical User Interface) de visualizar imagens em C++.

- ***Como Usar a Ferramenta***

1 – Colocar o caminho da imagem de dentro do seu computador (Path), na caixa de texto superior da tela da solução ou selecionar o arquivo .png no botão “Search File”.

2 – Após ter o link completo do local da imagem, clicar no botão “Load”. Isso fará com que o link da imagem seja armazenada na barra de rolagem, na parte inferior da ferramenta, onde está escrito “Select Image Here:”

3 – Selecione a imagem desejada na barra de rolagem.

4 – Para visualizar a imagem selecionada na barra de rolagem clique no botão “View / Reset View”.

5 – Depois é só utilizar os demais botões para ter uma melhor visão da imagem.

