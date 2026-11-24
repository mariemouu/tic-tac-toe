# Tic-tac-toe en C

Un jeu de morpion en ligne de commande, où l'on joue contre l'ordinateur. Projet réalisé pendant ma 1re année du Bachelor Développement Full Stack à Coda Orléans.

```
 X | O |   
-----------
   | X |   
-----------
   |   | O 

Numéros des cases :
 0 | 1 | 2 
 3 | 4 | 5 
 6 | 7 | 8 

À toi de jouer (X). Choisis une case de 0 à 8 :
```

## Fonctionnalités

- **Partie contre l'ordinateur** : le joueur joue les `X`, l'ordinateur les `O`.
- **Une IA simple mais efficace** : à chaque tour, l'ordinateur
  1. joue le coup gagnant s'il en existe un ;
  2. sinon, bloque le coup gagnant du joueur ;
  3. sinon, prend la case du centre si elle est libre ;
  4. sinon, joue la première case libre.
- **Saisie robuste** : le programme refuse les lettres, les numéros hors du plateau et les cases déjà prises, avec un message clair à chaque fois, sans planter ni boucler.
- **Sortie propre** : si le joueur quitte en cours de partie (`Ctrl + D`), le programme se termine correctement.
- **Guide des cases** affiché sous le plateau pour savoir quel numéro taper.
- **Détection de fin de partie** : victoire, défaite ou match nul.

## Lancer le jeu

Prérequis : `gcc` et `make`, sous Linux ou macOS.

```bash
git clone https://github.com/mariemouu/tic-tac-toe.git
cd tic-tac-toe
make            # compile le jeu
./tic-tac-toe   # lance une partie
```

Autres commandes :

```bash
make fclean     # supprime l'exécutable
make re         # recompile depuis zéro
```

## Organisation du code

| Fichier | Rôle |
|---|---|
| `main.c` | Boucle principale du jeu : affichage, tour du joueur, tour de l'ordinateur, fin de partie |
| `tic-tac-toe.c` | Toute la logique : affichage du plateau, lecture et validation des saisies, détection des victoires, IA de l'ordinateur |
| `tic-tac-toe.h` | Déclaration des fonctions |
| `Makefile` | Compilation avec `gcc -Wall -Wextra` |

## Ce que j'ai appris

- Découper un programme en plusieurs fichiers (`.c` / `.h`) et le compiler avec un `Makefile`
- Sécuriser les saisies utilisateur en C : valeur de retour de `scanf()`, gestion de `EOF`, vidage du tampon avec `getchar()`
- Simuler un coup pour qu'une IA choisisse le meilleur : jouer temporairement, vérifier, puis annuler
- Choisir des noms de fonctions et de variables clairs, en anglais

## Aide extérieure

Pour être transparente sur ce que j'ai fait seule et avec de l'aide, le fichier [`AIDE_EXTERIEURE.md`](AIDE_EXTERIEURE.md) détaille les questions posées à des outils d'IA et les conseils reçus.
