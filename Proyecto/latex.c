
void startBeamer(FILE * archivoPretty){
    fputs("\\documentclass{beamer}\n", archivoPretty);
    fputs("\\usepackage{pgfplots}\n", archivoPretty);

    fputs("\\usepackage{xcolor}\n", archivoPretty);
    fputs("\\usepackage{minted}\n", archivoPretty);
    fputs("\\definecolor{mGreen}{rgb}{0,0.6,0}\n", archivoPretty); 
    fputs("\\definecolor{mGray}{rgb}{0.5,0.5,0.5}\n", archivoPretty); 
    fputs("\\definecolor{mPurple}{rgb}{0.58,0,0.82}\n",archivoPretty);
    fputs("\\definecolor{backgroundColour}{rgb}{0.95,0.95,0.92}\n",archivoPretty);
/*    fputs("\\lstdefinestyle{CStyle}{\n", archivoPretty);
    fputs("  backgroundcolor=\\color{backgroundColour},\n",archivoPretty);  
    fputs("  commentstyle=\\color{mGreen},\n",archivoPretty); 
    fputs("  keywordstyle=\\color{magenta},\n",archivoPretty); 
    fputs("  numberstyle=\\tiny\\color{mGray},\n",archivoPretty);
    fputs("  stringstyle=\\color{mPurple},\n",archivoPretty); 
    fputs("  basicstyle=\\footnotesize,\n",archivoPretty); 
    fputs("  breakatwhitespace=false,\n", archivoPretty); 
    fputs("  breaklines=true,\n  captionpos=b,\n  keepspaces=true,\n", archivoPretty); 
    fputs("  numbersep=5pt,\n  showspaces=false,\n  showstringspaces=false,\n  showtabs=false,\n  tabsize=2,\n  language=C \n}\n", archivoPretty); 
*/
    fputs("\\usetheme{progressbar}\n \n \n", archivoPretty);
    fputs("\\usecolortheme{crane}\n \n \n", archivoPretty); 
    fputs("\\setbeamercolor{frametitle}{fg=brown}\n \n \n", archivoPretty);
    fputs("\\title{Analizador Sint\\'actico}\n", archivoPretty); 
    fputs("\\subtitle{Proyecto 1}\n", archivoPretty); 
    fputs("\\author{Ariana Berm\\'udez,Ximena Bola\\~nos, Dylan Rodr\\'iguez}\n", archivoPretty); 
    fputs("\\institute{Instituto Tecnol\\'ogico de Costa Rica}\n", archivoPretty); 
    fputs("\\date{\\today}\n", archivoPretty);
    fputs("\\begin{document}\n", archivoPretty);
    fputs("\\begin{frame}\n \\titlepage \n \\end{frame}", archivoPretty);
    
}


void addExplanation(FILE * archivoPretty){
    fputs("\\begin{frame}\n \\frametitle{An\\'alisis Sint\\'actico}\n  Se hizo un analizador sint\\'actico con la ayuda de la herramienta de Bison, para el lenguaje C y que corre en C, este analizador trabaja en conjunto con Flex, para tomar los tokens que este le otorga y revisar con las gram\\'aticas que les sean ingresadas. \\end{frame}",archivoPretty); 
    fputs("\\begin{frame}\n \\frametitle{Bison}\n Bison convierte de una gram\\'atica libre de contexto a un analizador sint\\'actico que emplea las tablas de Parsing LALR(1), siendo: \\begin{itemize} \\item L: Left algo \\item A: ... \\item L: ... \\item R: rightmost \\item (1): donde este uno significa que tiene como lookahead solo un s\\'imbolo. \\end{itemize} Cabe destacar que Bison es compatible con Yacc. Sirve con C, C++ y Java. \\end{frame}", archivoPretty);     
    
}



void startListing(FILE * archivoPretty, char * titulo){
    fputs("\\begin{frame}[fragile]\n\\frametitle{", archivoPretty); 
    fputs(titulo, archivoPretty); 
    fputs("}\n\\begin{minted}[fontsize=\\tiny]{c}\n", archivoPretty);
}

void endListing(FILE * archivoPretty){
    fputs("\\end{minted}\n\\end{frame}\n", archivoPretty); 
}

void endBeamer(FILE * archivoPretty){
    fputs("\\end{document}\n", archivoPretty); 
}
