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


