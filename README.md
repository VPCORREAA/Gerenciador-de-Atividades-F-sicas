# Gerenciador de Atividades Físicas

## Descrição

Este projeto é um gerenciador de atividades físicas em C, que permite ao usuário registrar e visualizar informações sobre suas atividades físicas, como tipo, duração e calorias queimadas. O programa é uma base para futuras melhorias, incluindo a funcionalidade de armazenamento em arquivos binários.

## Funcionalidades

- **Registro de Atividades**: O usuário pode inserir informações sobre diferentes atividades físicas, incluindo:
  - Tipo de atividade (ex: corrida, ciclismo, etc.)
  - Duração da atividade em minutos
  - Calorias queimadas durante a atividade

- **Exibição de Atividades**: Após o registro, o programa exibe todas as atividades registradas pelo usuário.

## Estrutura do Código

- **Estruturas de Dados**: Utiliza uma struct `Atividade` para armazenar as informações de cada atividade.
- **Entrada de Dados**: Coleta as informações através do console, permitindo múltiplas entradas até que o usuário decida parar.
- **Exibição**: Mostra uma lista das atividades registradas no final.

## Tecnologias Utilizadas

- Linguagem de Programação: C

## Como Executar

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/seu-usuario/gerenciador-atividades-fisicas.git
   ```

2. **Compile o código**:
   ```bash
   gcc -o gerenciador atividades_fisicas.c
   ```

3. **Execute o programa**:
   ```bash
   ./gerenciador
   ```

## Futuras Melhorias
- Interface
- Implementar o armazenamento das atividades em um arquivo binário.
- Adicionar funcionalidades de edição e remoção de atividades.
- Criar um relatório de atividades em formato de texto.
- rotas
## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).

---
