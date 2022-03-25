//Fonctions réalisées par l'étudiant 1 :

bool estMajeur(int age)
{
	if (age >= 18)
		return true;
	else
		return false;
}

int exposant(int nbre, int exp)
{
	return pow(nb, exp);
}

float TVA(int prix)
{
	return (prix + (prix*(19.6/100)));
}

int plusGrand(int a, int b, int c)
{
	if (a>=b && a>=c)
		return a;
	else if (b>=a && b>=c)
		return b;
	else
		return c;
}

//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb)
{
	if(nb%2 == 0)
		return true;
	else
		return false;
}

int sommeNombre(int nb)
{
	int resultat=0;
	for(i=nb; i>0;i--)
	{
		resultat+=i;
	}
	return resultat;
}

float salaireNet(int salaire)
{
	float resultat=0;
	resultat = salaire*0.77
	return resultat;
}

int plusPetit(int a, int b, int c)
{
	if (a<=b && a<=c)
		return a;
	else if (b<=a && b<=c)
		return b;
	else
		return c;
}


//Fonctions réalisées par l'étudiant 3 :

bool estImpair(int nb)
{
	if (nb%2 == 0)
		return false;
	else
		return true;
}

float moyenne(int nb1, int nb2, int nb3)
{
	return ((nb1+nb2+nb3)/3);
}

float reduction(float prix, float reduc)
{
	return (prix*(prix/100));
}

int nombreMedian(int a, int b, int c)
{
	if (a>=b && a<=c)
		return a;
	else if (b>=a && b<=c)
		return b;
	else
		return c;
}

