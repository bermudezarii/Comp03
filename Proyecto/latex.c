
void startBeamer(FILE * archivoPretty){
    fputs("\\documentclass{beamer}\n", archivoPretty);
    fputs("\\usepackage{pgfplots}\n", archivoPretty);

    fputs("\\usepackage{xcolor}\n", archivoPretty);
    fputs("\\usepackage{listings}\n", archivoPretty);
    fputs("\\definecolor{mGreen}{rgb}{0,0.6,0}\n", archivoPretty); 
    fputs("\\definecolor{mGray}{rgb}{0.5,0.5,0.5}\n", archivoPretty); 
    fputs("\\definecolor{mPurple}{rgb}{0.58,0,0.82}\n",archivoPretty);
    fputs("\\definecolor{backgroundColour}{rgb}{0.95,0.95,0.92}\n",archivoPretty);
    fputs("\\lstdefinestyle{CStyle}{\n", archivoPretty);
    fputs("  backgroundcolor=\\color{backgroundColour},\n",archivoPretty);  
    fputs("  commentstyle=\\color{mGreen},\n",archivoPretty); 
    fputs("  keywordstyle=\\color{magenta},\n",archivoPretty); 
    fputs("  numberstyle=\\tiny\\color{mGray},\n",archivoPretty);
    fputs("  stringstyle=\\color{mPurple},\n",archivoPretty); 
    fputs("  basicstyle=\\footnotesize,\n",archivoPretty); 
    fputs("  breakatwhitespace=false,\n", archivoPretty); 
    fputs("  breaklines=true,\n  captionpos=b,\n  keepspaces=true,\n  numbers=left,\n", archivoPretty); 
    fputs("  numbersep=5pt,\n  showspaces=false,\n  showstringspaces=false,\n  showtabs=false,\n  tabsize=2,\n  language=C \n}\n", archivoPretty); 

    fputs("\\usetheme{progressbar}\n \n \n", archivoPretty);
    fputs("\\usecolortheme{crane}\n \n \n", archivoPretty); 
    fputs("\\setbeamercolor{frametitle}{fg=brown}\n \n \n", archivoPretty);
    fputs("\\title{Analizador L\\'exico}\n", archivoPretty); 
    fputs("\\subtitle{Proyecto 1}\n", archivoPretty); 
    fputs("\\author{Ariana Berm\\'udez,Ximena Bola\\~nos, Dylan Rodr\\'iguez}\n", archivoPretty); 
    fputs("\\institute{Instituto Tecnol\\'ogico de Costa Rica}\n", archivoPretty); 
    fputs("\\date{\\today}\n", archivoPretty);
    fputs("\\begin{document}\n", archivoPretty);
    fputs("\\begin{frame}\n \\titlepage \n \\end{frame}", archivoPretty);
    
}


void addExplanation(FILE * archivoPretty){
    fputs("\\begin{frame}\n \\frametitle{An\\'alisis Sint\\'actico}\n  Se hizo un analizador sint\\'actico con la ayuda de la herramienta de Bison, para el lenguaje C y que corre en C, este analizador trabaja en conjunto con Flex, para tomar los tokens que este le otorga y revisar con las gram\\'aticas que les sean ingresadas.\\end{frame}",archivoPretty); 
    fputs("\\begin{frame}\n \\frametitle{Bison}\n jaajaj\\end{frame}", archivoPretty);     
    
}



void startListing(FILE * archivoPretty){
    fputs("\\begin{frame}[fragile]\n\\frametitle{C\\'odigo Analizado}\n\\begin{lstlisting}[style=CStyle]\n", archivoPretty); 
}

void endListing(FILE * archivoPretty){
    fputs("\\end{lstlisting}\n\\end{frame}\n", archivoPretty); 
}

void endBeamer(FILE * archivoPretty){
    fputs("\\end{document}\n", archivoPretty); 
}
