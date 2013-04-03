class personne {
	protected:
		string _nom ;
		string _prenom ;
	public:
		...
};

void personne::affiche() {
	cout << "mon nom est " << _nom <<" et mon prenom " << _prenom;
}

...

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
