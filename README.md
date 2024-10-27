
```markdown
# Gerenciador de Atividades Físicas

Este programa permite que os usuários registrem e gerenciem suas atividades físicas. As atividades incluem tipo, duração em minutos e calorias queimadas. Os dados são armazenados em um arquivo binário para manter um histórico persistente de atividades.

## Funcionalidades

- Registrar diferentes tipos de atividades físicas.
- Armazenar a duração e calorias queimadas para cada atividade.
- Carregar e salvar as atividades registradas em um arquivo binário.
- Exibir todas as atividades registradas.

## Arquivos

- `gerenciador_atividades_fisicas.c`: Código-fonte do programa.
- `atividades.bin`: Arquivo binário onde as atividades são armazenadas.

## Compilação e Execução

### Compilar

Para compilar o programa, execute o seguinte comando no terminal:

```bash
gcc -o gerenciador_atividades gerenciador_atividades_fisicas.c
```

### Executar

Após compilar, execute o programa com o comando:

```bash
./gerenciador_atividades
```

## Uso

1. Ao iniciar o programa, você pode registrar atividades físicas fornecendo o tipo de atividade, duração e calorias queimadas.
2. Após registrar as atividades, elas são salvas no arquivo `atividades.bin`.
3. O programa também carrega atividades previamente registradas ao ser iniciado, permitindo que você adicione mais atividades ao histórico.
4. Após finalizar as entradas, o programa exibe todas as atividades registradas.

## Limites

- O programa suporta o registro de até 100 atividades por vez.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
