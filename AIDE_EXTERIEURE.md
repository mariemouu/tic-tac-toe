## Claude : 

1. “Je dois réaliser un jeu de morpion en langage C pour mon cours, comment savoir si l’utilisateur a saisi un nombre ou des lettres avec scanf ?”
-> Claude m’a expliqué que scanf() renvoie une valeur (1, 0 ou EOF) permettant de savoir si la lecture a réussi 


2. Question : « Comment faire en sorte que le programme ne plante pas si jamais le joueur quitte pendant la partie ? »

-> Il m’a expliqué le fonctionnement de la constante EOF, qui permet de détecter la fin de l’entrée standard. Je l’ai utilisée dans les fonctions read_number() et clear_input() pour permettre au programme de se terminer correctement lorsque l’utilisateur envoie une fin d’entrée

3. Je lui ai envoyé un screen de mon jeu qui bug en m’affichant en boucle « À toi de jouer (X). Choisis une case de 0 à 8 : » après avoir saisi des lettres pour vérifier que la détection d’erreur fonctionne.
-> Il m’a expliqué que getchar() permet de lire les caractères un par un et de supprimer les caractères incorrects restés dans le tampon après une saisie invalide. J’ai donc utilisé cette méthode dans la fonction clear_input().

4. « Comment rendre l’ordinateur plus intelligent en le poussant à essayer davantage de gagner et de bloquer le joueur s’il voit qu’il a une chance de gagner ? »
-> Il m’a expliqué le principe de la simulation d’un coup : l’ordinateur place temporairement son symbole dans une case vide, vérifie si cela permet de gagner ou de bloquer une victoire adverse, puis annule ce coup si nécessaire. J’ai utilisé cette technique dans la fonction computer_wins() pour permettre à l’ordinateur de choisir un coup plus intelligent.


## Chatgpt

Je lui expliquais à chaque fois le rôle que je voulais donner à une fonction ou ce que représentait une variable, puis je lui demandais de me proposer un nom en anglais correspondant, afin de respecter les conventions et les bonnes pratiques de programmation (et ameliorer mon anglais par la meme occasion :)

## Mon mari (data scientist de profession et dev par passion)

idée du guide des numéros de cases, affiché sous le plateau sans le remplir (Fonction print_positions) et m'a aidé à la mettre en place.