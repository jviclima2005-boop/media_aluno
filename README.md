from pathlib import Path

html = '''<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>README - Média do Aluno em C</title>
  <style>
    body { font-family: Arial, sans-serif; max-width: 900px; margin: 40px auto; padding: 0 20px; line-height: 1.6; color: #1f2937; background: #f8fafc; }
    .container { background: #fff; padding: 32px; border-radius: 14px; box-shadow: 0 8px 24px rgba(0,0,0,.08); }
    h1, h2 { color: #0f172a; }
    code { background: #e2e8f0; padding: 2px 6px; border-radius: 5px; font-family: Consolas, monospace; }
    pre { background: #0f172a; color: #e2e8f0; padding: 18px; border-radius: 10px; overflow-x: auto; }
    .badge { display: inline-block; padding: 6px 10px; margin-right: 6px; border-radius: 999px; background: #dbeafe; color: #1d4ed8; font-size: 13px; font-weight: bold; }
    .note { background: #f1f5f9; border-left: 4px solid #2563eb; padding: 12px 16px; border-radius: 6px; }
  </style>
</head>
<body>
  <div class="container">
    <h1>Exercício de Média do Aluno em C</h1>
    <p>Projeto desenvolvido para praticar fundamentos da linguagem C na disciplina de Estrutura de Dados.</p>

    <p>
      <span class="badge">C</span>
      <span class="badge">Estrutura de Dados</span>
      <span class="badge">Lógica de Programação</span>
    </p>

    <h2>Objetivo</h2>
    <p>Receber os dados de um aluno, calcular a média de duas notas e informar se ele foi aprovado ou reprovado.</p>

    <h2>Funcionalidades</h2>
    <ul>
      <li>Leitura do nome com <code>fgets()</code>.</li>
      <li>Leitura da idade e das duas notas.</li>
      <li>Cálculo da média aritmética.</li>
      <li>Verificação com <code>if/else</code>.</li>
      <li>Uso de <code>strcpy()</code> para armazenar “aprovado” ou “reprovado”.</li>
      <li>Exibição dos resultados no terminal.</li>
    </ul>

    <h2>Conceitos praticados</h2>
    <ul>
      <li><code>int</code>, <code>float</code> e vetor de <code>char</code>.</li>
      <li><code>printf()</code>, <code>scanf()</code> e <code>fgets()</code>.</li>
      <li><code>if/else</code>.</li>
      <li><code>string.h</code> e <code>strcpy()</code>.</li>
    </ul>

    <h2>Código</h2>
<pre><code>#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

int main(){

    char nome[30];
    int idade;
    float nota1, nota2;
    char analise[30];

    printf("Digite seu nome:");
    fgets(nome, 30, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &amp;idade);

    printf("Digite sua nota N1:");
    scanf("%f", &amp;nota1);

    printf("Digite sua nota N2:");
    scanf("%f", &amp;nota2);

    float media = (nota1 + nota2) / 2;

    if(media &gt;= 7){
        strcpy(analise, "aprovado");
    }else{
        strcpy(analise, "reprovado");
    }

    printf("Nome: %s", nome);
    printf("Idade: %d\\n", idade);
    printf("Nota 1: %.2f\\n", nota1);
    printf("Nota 2: %.2f\\n", nota2);
    printf("Media: %.2f\\n", media);
    printf("Analise: %s", analise);

    return 0;
}</code></pre>

    <h2>Regra de aprovação</h2>
    <div class="note">Média maior ou igual a <strong>7.0</strong>: aprovado. Abaixo de 7.0: reprovado.</div>

    <h2>Como compilar</h2>
<pre><code>gcc src/media_aluno.c -o bin/media_aluno</code></pre>

    <h2>Como executar</h2>
<pre><code>bin\\media_aluno.exe</code></pre>

    <h2>Estrutura do projeto</h2>
<pre><code>projeto/
├── bin/
├── src/
│   └── media_aluno.c
├── .gitignore
└── README.html</code></pre>

    <h2>Autor</h2>
    <p>João Victor Lima de Omena</p>
  </div>
</body>
</html>'''

path = Path("/mnt/data/README.html")
path.write_text(html, encoding="utf-8")
print(path)
