#include "personne.h"

class etudiant : public personne {
	private :
		// donnees specifiques a etudiant
		string _branche;
		string _filiere;

	public :
		...
    		void affiche(void);
...
};
