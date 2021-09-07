@echo off
for %%f in (../tex/exemplos_programas/*.agrvai) do Agoravai.exe ../tex/exemplos_programas/%%f > ../tex/exemplos_programas/%%f.out
cd ../tex/
pdflatex --quiet --interaction=nonstopmode main.tex