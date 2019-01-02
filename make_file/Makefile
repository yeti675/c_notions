NAME = test  # variable qui reçoit le nom de l'executable 

SRC = source.c # variable qui accueil le/les fichier(s) a compiler si plusieurs ligne \ a la fin

all: $(NAME) # regle "name"

$(NAME):
	gcc -o $(NAME) $(SRC) # execution de règle toujours commencer par une tabulation
	
clean: # supprime tous les fichier o de la compilation
	/bin/rm -f *.o # execute la regle

fclean: clean # clean + clean executable .o + executable
	/bin/rm -f $(NAME) # execute la regle

re: fclean all # reprend tout a 0 tout es nettoyer et recompiler