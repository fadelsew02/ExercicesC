#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("$$$BIENVNUE SUR NOTRE PLATEFORME ALGORITHMIQUE!$$$\n");
    printf("\n");
    printf("Ce programme vous permet de calculer la quantité de matériaux nécessaire pour tout type de construction.\n");
    printf("\n");
    printf("NB:Les unités utilisées par ce programme sont:\n");
    printf("Pour l'unité de longueur, veuillez entrez vos valeurs en centimètre (cm);\n");
    printf("Pour l'unité de masse, veuillez entrez vos valeurs en kilogramme (kg);\n");
    printf("Pour l'unité de surface, veuillez entrez vos valeurs en mètre carré (m^2);\n");
    printf("Pour l'unité de volume, veuillez entrez vos valeurs en mètre cube (m^3);\n");
    printf("Pour l'unité du poids volumique, veuillez entrez vos valeurs en kilogramme par mètre cube (kg/m^3).\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("***SURFACE DU MUR EN ELEVATION***\n");
    printf("\n");

    int NbreCotationHorizontale;
    int NbreCotationVerticale;
    int NbreCotationOblique;
    int NbreCotationCourbe;
    int NC;
    int ReponseCotatObliq;
    int ReponseCotatCourbe;
    double Cotation;
    double LongDevHor;
    double LongDevVer;
    double LongDevObl;
    double LongDevCurv;
    double LongDev;
    double HautSousPlancher;
    double SurfaceDev;
    int Reponse;
    int NbreFenetre;
    int NF;
    int TypeFenetre;
    int TF;
    double SectionFenetre;
    double SectionTotaleFenetre;
    double SurfaceTotaleFenetre;
    double Length;
    double Width;
    double Side;
    double Diameter;
    double const Pi=3.14;
    double Base;
    double Height;
    int SectionForm;
    int NbrePorte;
    int NP;
    int TypePorte;
    int TP;
    double SectionPorte;
    double SectionTotalePorte;
    double SurfaceTotalePorte;
    double SurfMur;
    int NAA;
    int NbreAggloA;
    int NAB;
    int NbreAggloB;
    int NPA;
    int NbrePaquetA;
    int NPB;
    int NbrePaquetB;
    int NTA;
    int NbreTonneA;
    int NTB;
    int NbreTonneB;
    int NbreParpaings;
    double DosageSable;
    double DosageGravier;
    double DosageCimentBF;
    double DosageCimentBP;
    double DosageCimentCHB;
    double DosageCimentPoteau;
    double DosageCimentFD;
    double VolumeTotaleBeton;
    double QuantTotalCiment;
    double QuantTotalSable;
    double QuantTotalGravier;
    int NbreBrutTonne;
    int NbreTonne;
    int NbreBrutPaquet;
    int NbrePaquet;
    double HautPoteau;
    double LongPoteau;
    double LargPoteau;
    double CotePoteau;
    double BasePoteau;
    double LongTotale;
    double HauteurBasePoteau;
    double DiametrePoteau;
    double SectionPoteau;
    int FormeSectionPoteau;
    double HautAmorcePoteau;
    double LongAmorcePoteau;
    double HauteurPoteauAmorce;
    double VolumeBrutPoteau;
    double VolumeBetonPoteau;
    int NbrePoteau;
    double QuantCimentPoteau;
    double QuantSablePoteau;
    double QuantGravierPoteau;
    double EpaisseurBF;
    double LongFondation;
    double LargFondation;
    double CoteFondation;
    double BaseFondation;
    double HauteurBaseFondation;
    double DiametreFondation;
    double SectionFondation;
    int FormeSectionFondation;
    double VolumeBrutFondation;
    double VolumeBetonFondation;
    int NbreFondation;
    double QuantCimentBF;
    double QuantSableBF;
    double QuantGravierBF;
    double EpaisseurBP;
    double LongProprete;
    double LargProprete;
    double CoteProprete;
    double BaseProprete;
    double HauteurBaseProprete;
    double DiametreProprete;
    double SectionProprete;
    int FormeSectionProprete;
    double VolumeBrutProprete;
    double VolumeBetonProprete;
    int NbreProprete;
    double QuantCimentBP;
    double QuantSableBP;
    double QuantGravierBP;
    double EpaisseurCHB;
    double HauteurCHB;
    double VolumeBrutCHB;
    double VolumeBetonCHB;
    int FormeSectionCHB;
    int NbreCHB;
    double QuantCimentCHB;
    double QuantSableCHB;
    double QuantGravierCHB;
    double Long;
    double Larg;
    double HauteurTrAn;
    double HauteurTrHV;
    double HauteurDroite;
    double HauteurIncl;
    double SurfTrAn;
    double SurfTrHV;
    double SurfRect;
    double EpaisseurFD;
    double VolumeBetonFD;
    double QuantCimentFD;
    double QuantSableFD;
    double QuantGravierFD;
    int NbreTrAn;
    int NbreTrHV;
    double SurfaceSoub;
    int NBA;
    int NbreAggloBA;
    int NBB;
    int NbreAggloBB;
    int NPBA;
    int NbrePaquetBA;
    int NPBB;
    int NbrePaquetBB;
    int NTBA;
    int NbreTonneBA;
    int NTBB;
    int NbreTonneBB;
    double LongLambrequin;
    double SurfacePeinture;
    double SurfaceToiture;
    int ChoixX;
    int ChoixY;
    double SurfCercle;
    double GrandAxe;
    double PetitAxe;
    double SurfEllipse;
    double Hauteur;
    double SurfTriangle;
    double Cote;
    double SurfCarre;
    double SurfRectangle;
    double PetiteBase;
    double GrandeBase;
    double SurfTrapeze;
    double ValCote;
    double SurfPentagone;
    double SurfHexagone;
    double SurfHeptagone;
    double SurfOctogone;
    double SurfEnneagone;
    double SurfDecagone;
    int ChoixA;
    int ChoixB;
    double SurfTt;
    double SurfCc;
    double SurfEll;
    double SurfTri;
    double SurfCr;
    double SurfTrp;
    double SurfPtg;
    double SurfHex;
    double SurfHep;
    double SurfOct;
    double SurfEnn;
    double SurfDcg;

for
    printf("Combien y a-t-il de cotation horizontale sur votre dessin: ");
    scanf("%d", &NbreCotationHorizontale);
    LongDevHor<-0;
    for(NC=1; NC<=NbreCotationHorizontale; NC++)
    {
        printf("Donnez une cotation: ");
        scanf("%lf", &Cotation);
        LongDevHor=LongDevHor+Cotation;
    }

    printf("Combien y a-t-il de cotation verticale sur votre dessin: ");
    scanf("%d", &NbreCotationVerticale);
    LongDevVer<-0;
    for(NC=1; NC<=NbreCotationVerticale; NC++)
    {
        printf("Donnez une cotation: ");
        scanf("%lf", &Cotation);
        LongDevVer=LongDevVer+Cotation;
    }

    printf("Y a-t-il des cotations obliques (entrez 0 si NON; entrez 1 pour OUI):  ");
    scanf("%d", &ReponseCotatObliq);
    if (ReponseCotatObliq==0)
    {
        LongDevObl=0;
        printf("C'est noté! La longueur développée des cotations oblique est donc nulle.\n");
    }
    else if (ReponseCotatObliq==1)
    {
        printf("Combien y a-t-il de cotation oblique: ");
        scanf("%d", &NbreCotationOblique);
        LongDevObl<-0;
        for (NC=1; NC<=NbreCotationOblique; NC++)
        {
            printf("Donnez une cotation: ");
            scanf("%lf", &Cotation);
            LongDevObl=LongDevObl+Cotation;
        }
    }

    printf("Y a-t-il des cotations de courbes (entrez 0 si NON; entrez 1 pour OUI):  ");
    scanf("%d", &ReponseCotatCourbe);
    if (ReponseCotatCourbe==0)
    {
        LongDevCurv=0;
        printf("C'est noté! La longueur développée des cotations courbe est donc nulle.\n");
    }
    else if (ReponseCotatCourbe==1)
    {
        printf("Combien y a-t-il de cotation courbe: ");
        scanf("%d", &NbreCotationCourbe);
        LongDevCurv<-0;
        for (NC=1; NC<=NbreCotationCourbe; NC++)
        {
            printf("Donnez une cotation: ");
            scanf("%lf", &Cotation);
            LongDevCurv=LongDevCurv+Cotation;
        }
    }

    LongDev=LongDevHor+LongDevVer+LongDevObl+LongDevCurv;
    printf("La longueur développée du batiment est %lf m.\n", LongDev);
    printf("Donnez la hauteur sous plancher: ");
    scanf("%lf", &HautSousPlancher);
    SurfaceDev=LongDev*HautSousPlancher;
    printf("La surface développée du batiment est %lf m^2.\n", SurfaceDev);
    printf("\n");

    printf("Y a-t-il des fenetres (entrez 0 pour NON; entrez 1 pour OUI): ");
    scanf("%d", &Reponse);
    if (Reponse==1)
    {
        printf("Y a-t-il des fenetres de mesures différentes (entrez 0 pour NON; entrez 1 pour OUI): ");
        scanf("%d", &Reponse);
        if (Reponse==0)
        {
            printf("Les formes de fenetres disponibles dans ce programme sont:\n");
            printf("Enter 1 if it's a rectangle;\n");
            printf("Enter 2 if it's a square;\n");
            printf("Enter 3 if it's a circle;\n");
            printf("Enter 4 if it's a triangle;\n");
            printf("Quelle est la forme de votre fenetre: ");
            scanf("%d", &SectionForm);
            if (SectionForm==1)
            {
                printf("Donnez sa longueur: ");
                scanf("%lf", &Length);
                printf("Donnez sa largeur: ");
                scanf("%lf", &Width);
                SectionFenetre=Length*Width;
                printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                printf("Combien y a-t-il de fenetres: ");
                scanf("%d", &NbreFenetre);
                SurfaceTotaleFenetre=SectionFenetre*NbreFenetre;
                printf("La section totale des fenetres est %lf m^2.\n", SurfaceTotaleFenetre);
                printf("\n");
            }
            else if (SectionForm==2)
            {
                printf("Donnez le coté de la fenetre: ");
                scanf("%lf", &Side);
                SectionFenetre=Side*Side;
                printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                printf("Combien y a-t-il de fenetres: ");
                scanf("%d", &NbreFenetre);
                SurfaceTotaleFenetre=SectionFenetre*NbreFenetre;
                printf("La section totale des fenetres est %lf m^2.\n", SurfaceTotaleFenetre);
                printf("\n");
            }
            else if (SectionForm==3)
            {
                printf("Donnez le diamètre de la fenetre: ");
                scanf("%lf", &Diameter);
                SectionForm=3.14*Diameter*Diameter/4;
                printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                printf("Combien y a-t-il de fenetres: ");
                scanf("%d", &NbreFenetre);
                SurfaceTotaleFenetre=SectionFenetre*NbreFenetre;
                printf("La section totale des fenetres est %lf m^2.\n", SurfaceTotaleFenetre);
                printf("\n");
            }
            else if (SectionForm==4)
            {
                printf("Donnez la base de la fenetre: ");
                scanf("%lf", &Base);
                printf("Donnez la hauteur de la fenetre: ");
                scanf("%lf", &Height);
                SectionFenetre=Base*Height/2;
                printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                printf("Combien y a-t-il de fenetres: ");
                scanf("%d", &NbreFenetre);
                SurfaceTotaleFenetre=SectionFenetre*NbreFenetre;
                printf("La section totale des fenetres est %lf m^2.\n", SurfaceTotaleFenetre);
                printf("\n");
            }
            else
            {
                printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
                printf("Quelle est la forme de votre fenetre: ");
                scanf("%d", &SectionForm);
            }
        }
        else if (Reponse==1)
        {
            printf("Combien y a-t-il de type de fenetre: ");
            scanf("%d", &TypeFenetre);
            SurfaceTotaleFenetre<-0;
            for (NF=1; NF<=TypeFenetre; NF++)
            {
                printf("Les formes de fenetres disponibles dans ce programme sont:\n");
                printf("Enter 1 if it's a rectangle;\n");
                printf("Enter 2 if it's a square;\n");
                printf("Enter 3 if it's a circle;\n");
                printf("Enter 4 if it's a triangle;\n");
                printf("Quelle est la forme de votre fenetre: ");
                scanf("%d", &SectionForm);
                if (SectionForm==1)
                {
                    printf("Donnez sa longueur: ");
                    scanf("%lf", &Length);
                    printf("Donnez sa largeur: ");
                    scanf("%lf", &Width);
                    SectionFenetre=Length*Width;
                    printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                    printf("Combien y a-t-il de fenetres: ");
                    scanf("%d", &NbreFenetre);
                    SectionTotaleFenetre=SectionFenetre*NbreFenetre;
                    printf("La section totale des fenetres est %lf m^2.\n", SectionTotaleFenetre);
                    SurfaceTotaleFenetre=SurfaceTotaleFenetre+SectionTotaleFenetre;
                    printf("\n");
                }
                else if (SectionForm==2)
                {
                    printf("Donnez le coté de la fenetre: ");
                    scanf("%lf", &Side);
                    SectionFenetre=Side*Side;
                    printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                    printf("Combien y a-t-il de fenetres: ");
                    scanf("%d", &NbreFenetre);
                    SectionTotaleFenetre=SectionFenetre*NbreFenetre;
                    printf("La section totale des fenetres est %lf m^2.\n", SectionTotaleFenetre);
                    SurfaceTotaleFenetre=SurfaceTotaleFenetre+SectionTotaleFenetre;
                    printf("\n");
                }
                else if (SectionForm==3)
                {
                    printf("Donnez le diamètre de la fenetre: ");
                    scanf("%lf", &Diameter);
                    SectionForm=3.14*Diameter*Diameter/4;
                    printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                    printf("Combien y a-t-il de fenetres: ");
                    scanf("%d", &NbreFenetre);
                    SectionTotaleFenetre=SectionFenetre*NbreFenetre;
                    printf("La section totale des fenetres est %lf m^2.\n", SectionTotaleFenetre);
                    SurfaceTotaleFenetre=SurfaceTotaleFenetre+SectionTotaleFenetre;
                    printf("\n");
                }
                else if (SectionForm==4)
                {
                    printf("Donnez la base de la fenetre: ");
                    scanf("%lf", &Base);
                    printf("Donnez la hauteur de la fenetre: ");
                    scanf("%lf", &Height);
                    SectionFenetre=Base*Height/2;
                    printf("La section d'une fenetre est %lf m^2.\n", SectionFenetre);
                    printf("Combien y a-t-il de fenetres: ");
                    scanf("%d", &NbreFenetre);
                    SectionTotaleFenetre=SectionFenetre*NbreFenetre;
                    printf("La section totale des fenetres est %lf m^2.\n", SectionTotaleFenetre);
                    SurfaceTotaleFenetre=SurfaceTotaleFenetre+SectionTotaleFenetre;
                    printf("\n");
                }
                else
                {
                    printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
                    printf("Quelle est la forme de votre fenetre: ");
                    scanf("%d", &SectionForm);
                }
            }
            printf("La section totale de toutes les fenetres de différentes dimensions est %lf m^2.\n", SurfaceTotaleFenetre);
            printf("\n");
        }
    }
    else if (Reponse==0)
    {
        printf("Fin de cette section. Merci d'etre passer sur notre plateforme.\n");
    }
    else
    {
        printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
        printf("Y a-t-il des fenetres: ");
        scanf("%d", &Reponse);
    }

    printf("Y a-t-il des portes (entrez 0 pour NON; entrez 1 pour OUI): ");
    scanf("%d", &Reponse);
    if (Reponse==1)
    {
        printf("Y a-t-il des portes de mesures différentes (entrez 0 pour NON; entrez 1 pour OUI): ");
        scanf("%d", &Reponse);
        if (Reponse==0)
        {
            printf("Les formes de portes disponibles dans ce programme sont:\n");
            printf("Enter 1 if it's a rectangle;\n");
            printf("Enter 2 if it's a square;\n");
            printf("Enter 3 if it's a circle;\n");
            printf("Enter 4 if it's a triangle;\n");
            printf("Quelle est la forme de votre porte: ");
            scanf("%d", &SectionForm);
            if (SectionForm==1)
            {
                printf("Donnez sa longueur: ");
                scanf("%lf", &Length);
                printf("Donnez sa largeur: ");
                scanf("%lf", &Width);
                SectionPorte=Length*Width;
                printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                printf("Combien y a-t-il de portes: ");
                scanf("%d", &NbrePorte);
                SurfaceTotalePorte=SectionPorte*NbrePorte;
                printf("La section totale des portes est %lf m^2.\n", SurfaceTotalePorte);
                printf("\n");
            }
            else if (SectionForm==2)
            {
                printf("Donnez le coté de la porte: ");
                scanf("%lf", &Side);
                SectionPorte=Side*Side;
                printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                printf("Combien y a-t-il de fenetres: ");
                scanf("%d", &NbrePorte);
                SurfaceTotalePorte=SectionPorte*NbrePorte;
                printf("La section totale des portes est %lf m^2.\n", SurfaceTotalePorte);
                printf("\n");
            }
            else if (SectionForm==3)
            {
                printf("Donnez le diamètre de la porte: ");
                scanf("%lf", &Diameter);
                SectionForm=3.14*Diameter*Diameter/4;
                printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                printf("Combien y a-t-il de porte: ");
                scanf("%d", &NbrePorte);
                SurfaceTotalePorte=SectionPorte*NbrePorte;
                printf("La section totale des portes est %lf m^2.\n", SurfaceTotalePorte);
                printf("\n");
            }
            else if (SectionForm==4)
            {
                printf("Donnez la base de la porte: ");
                scanf("%lf", &Base);
                printf("Donnez la hauteur de la porte: ");
                scanf("%lf", &Height);
                SectionPorte=Base*Height/2;
                printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                printf("Combien y a-t-il de portes: ");
                scanf("%d", &NbrePorte);
                SurfaceTotalePorte=SectionPorte*NbrePorte;
                printf("La section totale des portes est %lf m^2.\n", SurfaceTotalePorte);
                printf("\n");
            }
            else
            {
                printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
                printf("Quelle est la forme de votre porte: ");
                scanf("%d", &SectionForm);
            }
        }
        else if (Reponse==1)
        {
            SurfaceTotalePorte<-0;
            printf("Combien y a-t-il de type de porte: ");
            scanf("%d", &TypePorte);
            for (NF=1; NF<=TypePorte; NF++)
            {
                printf("Les formes de portes disponibles dans ce programme sont:\n");
                printf("Enter 1 if it's a rectangle;\n");
                printf("Enter 2 if it's a square;\n");
                printf("Enter 3 if it's a circle;\n");
                printf("Enter 4 if it's a triangle;\n");
                printf("Quelle est la forme de votre porte: ");
                scanf("%d", &SectionForm);
                if (SectionForm==1)
                {
                    printf("Donnez sa longueur: ");
                    scanf("%lf", &Length);
                    printf("Donnez sa largeur: ");
                    scanf("%lf", &Width);
                    SectionPorte=Length*Width;
                    printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                    printf("Combien y a-t-il de porte: ");
                    scanf("%d", &NbrePorte);
                    SectionTotalePorte=SectionPorte*NbrePorte;
                    printf("La section totale des fenetres est %lf m^2.\n", SectionTotalePorte);
                    SurfaceTotalePorte=SurfaceTotalePorte+SectionTotalePorte;
                    printf("\n");
                }
                else if (SectionForm==2)
                {
                    printf("Donnez le coté de la porte: ");
                    scanf("%lf", &Side);
                    SectionPorte=Side*Side;
                    printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                    printf("Combien y a-t-il de porte: ");
                    scanf("%d", &NbrePorte);
                    SectionTotalePorte=SectionPorte*NbrePorte;
                    printf("La section totale des portes est %lf m^2.\n", SectionTotalePorte);
                    SurfaceTotalePorte=SurfaceTotalePorte+SectionTotalePorte;
                    printf("\n");
                }
                else if (SectionForm==3)
                {
                    printf("Donnez le diamètre de la porte: ");
                    scanf("%lf", &Diameter);
                    SectionForm=3.14*Diameter*Diameter/4;
                    printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                    printf("Combien y a-t-il de porte: ");
                    scanf("%d", &NbrePorte);
                    SectionTotalePorte=SectionPorte*NbrePorte;
                    printf("La section totale des portes est %lf m^2.\n", SectionTotalePorte);
                    SurfaceTotalePorte=SurfaceTotalePorte+SectionTotalePorte;
                    printf("\n");
                }
                else if (SectionForm==4)
                {
                    printf("Donnez la base de la porte: ");
                    scanf("%lf", &Base);
                    printf("Donnez la hauteur de la porte: ");
                    scanf("%lf", &Height);
                    SectionPorte=Base*Height/2;
                    printf("La section d'une porte est %lf m^2.\n", SectionPorte);
                    printf("Combien y a-t-il de porte: ");
                    scanf("%d", &NbrePorte);
                    SectionTotalePorte=SectionPorte*NbrePorte;
                    printf("La section totale des portes est %lf m^2.\n", SectionTotalePorte);
                    SurfaceTotalePorte=SurfaceTotalePorte+SectionTotalePorte;
                    printf("\n");
                }
                else
                {
                    printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
                    printf("Quelle est la forme de votre porte: ");
                    scanf("%d", &SectionForm);
                }
            }
            printf("La section totale de toutes les portes de différentes dimensions est %lf m^2.\n", SurfaceTotalePorte);
            printf("\n");
        }
        else
        {
            printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
            printf("Y a-t-il des portes de mesures différentes (entrez 0 pour NON; entrez 1 pour OUI): ");
            scanf("%d", &Reponse);
        }
    }
     else if (Reponse==0)
    {
        printf("Fin de cette section. Merci d'etre passer sur notre plateforme.\n");
    }
    else
    {
        printf("Veuillez enrez un nombre en tenant compte des informations qui vous ont été données plus haut.\n");
        printf("Y a-t-il des portes: ");
        scanf("%d", &Reponse);
    }

    SurfMur=SurfaceDev-SurfaceTotaleFenetre-SurfaceTotalePorte;
    printf("La surface réel du mur est %lf m^2.\n", SurfMur);
    printf("\n");
    printf("\n");

    printf("***NOMBRE DE PARPAINGS/AGGLOS NECESSAIRE***\n");
    printf("\n");

    printf("Nombre d'agglos pratique (12.5 agglos/m^2) : ");
    NAA=12.5*SurfMur/1;
    NbreAggloA=NAA+1;
    printf("le nombre d'agglos pratique est %d.\n", NbreAggloA);
    printf("Nombre d'agglos théorique (13 agglos/m^2) : ");
    NAB=13*SurfMur/1;
    NbreAggloB=NAB+1;
    printf("le nombre d'agglos théorique est %d.\n", NbreAggloB);
    printf("\n");
    printf("\n");

    printf("***NOMBRE DE PAQUETS ET DE TONNES DE CIMENT***\n");
    printf("\n");

    printf("Combien d'agglos voulez vous par paquet: ");
    scanf("%d", &NbreParpaings);

    printf("Nombre de paquet pratique (en considérant 12.5 agglos/m^2): ");
    NPA=NbreAggloA/NbreParpaings;
    NbrePaquetA=NPA+1;
    printf("le nombre de paquet de ciment pratique est %d;\n", NbrePaquetA);
    NTA=NbrePaquetA/20;
    NbreTonneA=NTA+1;
    printf("le nombre de tonnes de ciment pratique est %d.\n", NbreTonneA);

    printf("Nombre de paquet théorique (en considérant 13 agglos/m^2): ");
    NPB=NbreAggloB/NbreParpaings;
    NbrePaquetB=NPB+1;
    printf("le nombre de paquet de ciment théorique est %d; \n", NbrePaquetB);
    NTB=NbrePaquetB/20;
    NbreTonneB=NTB+1;
    printf("le nombre de tonnes de ciment pratique est %d.\n", NbreTonneB);
    printf("\n");
    printf("\n");

    printf("***QUANTITES DES MATERIAUX***\n");
    printf("\n");

    printf("Donnez le dosage de sable pour les éléments à calculer: ");
    scanf("%lf", &DosageSable);
    printf("Donnez le dosage de gravier pour les éléments à calculer: ");
    scanf("%lf", &DosageGravier);
    printf("\n");

    printf("QUANTITE DES MATERIAUX: BETON DE PROPRETE\n");
    printf("\n");
    printf("Les formes du béton de propreté disponible dans ce programme sont:\n");
    printf("1: Rectangle;\n");
    printf("2: Carré;\n");
    printf("3: Cercle;\n");
    printf("4: Triangle;\n");
    printf("Choisissez la forme du béton de propreté: ");
    scanf("%d", &FormeSectionProprete);
    if (FormeSectionProprete==1)
    {
        printf("Donnez la longueur: ");
        scanf("%lf", &LongProprete);
        printf("Donnez la largeur: ");
        scanf("%lf", &LargProprete);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBP);
        VolumeBrutProprete=LongProprete*LargProprete*EpaisseurBP;
        printf("Donnez le nombre de béton de propreté: ");
        scanf("%d", &NbreProprete);
        VolumeBetonProprete=VolumeBrutProprete*NbreProprete;
        printf("Le volume de béton de propreté est %lf m^3.\n", VolumeBetonProprete);
        printf("\n");
    }
    else if (FormeSectionProprete==2)
    {
        printf("Donnez son coté: ");
        scanf("%lf", &CoteProprete);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBP);
        VolumeBrutProprete=CoteProprete*CoteProprete*EpaisseurBP;
        printf("Donnez le nombre de béton de propreté: ");
        scanf("%d", &NbreProprete);
        VolumeBetonProprete=VolumeBrutProprete*NbreProprete;
        printf("Le volume de béton de propreté est %lf m^3.\n", VolumeBetonProprete);
        printf("\n");
    }
    else if (FormeSectionProprete==3)
    {
        printf("Donnez son diamètre: ");
        scanf("%lf", &DiametreProprete);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBP);
        VolumeBrutProprete=3.14*DiametreProprete*DiametreProprete*EpaisseurBP/4;
        printf("Donnez le nombre de béton de propreté: ");
        scanf("%d", &NbreProprete);
        VolumeBetonProprete=VolumeBrutProprete*NbreProprete;
        printf("Le volume de béton de propreté est %lf m^3.\n", VolumeBetonProprete);
        printf("\n");
    }
    else if (FormeSectionProprete==4)
    {
        printf("Donnez la base du triangle: ");
        scanf("%lf", &BaseProprete);
        printf("Donnez la hauteur du triangle: ");
        scanf("%lf", &HauteurBaseProprete);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBP);
        VolumeBrutProprete=BaseProprete*HauteurBaseProprete*EpaisseurBP/2;
        printf("Donnez le nombre de béton de propreté: ");
        scanf("%d", &NbreProprete);
        VolumeBetonProprete=VolumeBrutProprete*NbreProprete;
        printf("Le volume de béton de propreté est %lf m^3.\n", VolumeBetonProprete);
        printf("\n");
    }
    else
    {
        printf("Veuillez changer vos données.\n");
        printf("Choisissez la forme du béton de propreté: ");
        scanf("%d", &FormeSectionProprete);
    }

    printf("Donnez le dosage de ciment pour le béton de propreté: ");
    scanf("%lf", &DosageCimentBP);
    QuantCimentBP=VolumeBetonProprete*DosageCimentBP;
    printf("La quantité de ciment pour le béton de propreté est %lf kg/m^3.\n", QuantCimentBP);
    printf("\n");

    QuantSableBP=VolumeBetonProprete*DosageSable;
    printf("La quantité de sable pour le béton de propreté est %lf m^3.\n", QuantSableBP);
    printf("\n");

    QuantGravierBP=VolumeBetonProprete*DosageGravier;
    printf("La quantité de gravier pour le béton de propreté est %lf m^3.\n", QuantGravierBP);
    printf("\n");
    printf("\n");

    printf("QUANTITE DES MATERIAUX: BETON DE FONDATION\n");
    printf("\n");
    printf("Les formes du béton de fondation disponible dans ce programme sont:\n");
    printf("1: Rectangle;\n");
    printf("2: Carré;\n");
    printf("3: Cercle;\n");
    printf("4: Triangle;\n");
    printf("Choisissez la forme du béton de fondation: ");
    scanf("%d", &FormeSectionFondation);
    if (FormeSectionFondation==1)
    {
        printf("Donnez la longueur: ");
        scanf("%lf", &LongFondation);
        printf("Donnez la largeur: ");
        scanf("%lf", &LargFondation);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBF);
        VolumeBrutFondation=LongFondation*LargFondation*EpaisseurBF;
        printf("Donnez le nombre de béton de fondation: ");
        scanf("%d", &NbreFondation);
        VolumeBetonFondation=VolumeBrutFondation*NbreFondation;
        printf("Le volume de béton de fondation est %lf m^3.\n", VolumeBetonFondation);
        printf("\n");
    }
    else if (FormeSectionFondation==2)
    {
        printf("Donnez son coté: ");
        scanf("%lf", &CoteFondation);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBF);
        VolumeBrutFondation=CoteFondation*CoteFondation*EpaisseurBF;
        printf("Donnez le nombre de béton de fondation: ");
        scanf("%d", &NbreFondation);
        VolumeBetonFondation=VolumeBrutFondation*NbreFondation;
        printf("Le volume de béton de fondation est %lf m^3.\n", VolumeBetonFondation);
        printf("\n");
    }
    else if (FormeSectionProprete==3)
    {
        printf("Donnez son diamètre: ");
        scanf("%lf", &DiametreFondation);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBF);
        VolumeBrutFondation=3.14*DiametreFondation*DiametreFondation*EpaisseurBF/4;
        printf("Donnez le nombre de béton de fondation: ");
        scanf("%d", &NbreFondation);
        VolumeBetonFondation=VolumeBrutFondation*NbreFondation;
        printf("Le volume de béton de fondation est %lf m^3.\n", VolumeBetonFondation);
        printf("\n");
    }
    else if (FormeSectionProprete==4)
    {
        printf("Donnez la base du triangle: ");
        scanf("%lf", &BaseFondation);
        printf("Donnez la hauteur du triangle: ");
        scanf("%lf", &HauteurBaseFondation);
        printf("Donnez son épaisseur: ");
        scanf("%lf", &EpaisseurBF);
        VolumeBrutFondation=BaseFondation*HauteurBaseFondation*EpaisseurBF/2;
        printf("Donnez le nombre de béton de fondation: ");
        scanf("%d", &NbreFondation);
        VolumeBetonFondation=VolumeBrutFondation*NbreFondation;
        printf("Le volume de béton de fondation est %lf m^3.\n", VolumeBetonFondation);
        printf("\n");
    }
    else
    {
        printf("Veuillez changer vos données.\n");
        printf("Choisissez la forme de la fondation: ");
        scanf("%d", &FormeSectionFondation);
    }

    printf("Donnez le dosage de ciment pour le béton de fondation: ");
    scanf("%lf", &DosageCimentBF);
    QuantCimentBF=VolumeBetonFondation*DosageCimentBP;
    printf("La quantité de ciment pour le béton de fondation est %lf kg/m^3.\n", QuantCimentBF);
    printf("\n");

    QuantSableBF=VolumeBetonFondation*DosageSable;
    printf("La quantité de sable pour le béton de fondation est %lf m^3.\n", QuantSableBF);
    printf("\n");

    QuantGravierBF=VolumeBetonFondation*DosageGravier;
    printf("La quantité de gravier pour le béton de fondation est %lf m^3.\n", QuantGravierBF);
    printf("\n");
    printf("\n");

    printf("QUANTITE DE MATERIAUX: CHAINAGE BAS-CHAINAGE HAUT\n");
    printf("\n");
    printf("Les formes des chainages disponible dans ce programme sont:\n");
    printf("1: Rectangle;\n");
    printf("2: Carré;\n");
    printf("3: Cercle;\n");
    printf("4: Triangle;\n");
    printf("Choisissez la forme des chainages: ");
    scanf("%d", &FormeSectionCHB);
    if ((FormeSectionCHB==1)||(FormeSectionCHB==2))
    {
        printf("Donnez l'épaisseur du chainage: ");
        scanf("%lf", &EpaisseurCHB);
        printf("Donnez la hauteur d'un chainage: ");
        scanf("%lf", &HauteurCHB);
        VolumeBrutCHB=LongDev*EpaisseurCHB*HauteurCHB;
        printf("Donnez le nombre chainage que compte votre batiment: ");
        scanf("%d", &NbreCHB);
        VolumeBetonCHB=VolumeBrutCHB*NbreCHB;
        printf("Le volume de béton nécessaire pour réaliser les chainages de votre batiment est %lf m^3.^\n", VolumeBetonCHB);
        printf("\n");
    }
    else if (FormeSectionCHB==3)
    {
        printf("Donnez l'épaisseur du chainage: ");
        scanf("%lf", &EpaisseurCHB);
        printf("Donnez la hauteur d'un chainage: ");
        scanf("%lf", &HauteurCHB);
        VolumeBrutCHB=3.14*LongDev*LongDev*EpaisseurCHB*HauteurCHB/4;
        printf("Donnez le nombre chainage que compte votre batiment: ");
        scanf("%d", &NbreCHB);
        VolumeBetonCHB=VolumeBrutCHB*NbreCHB;
        printf("Le volume de béton nécessaire pour réaliser les chainages de votre batiment est %lf m^3.^\n", VolumeBetonCHB);
        printf("\n");
    }
    else if (FormeSectionCHB==4)
    {
        printf("Donnez l'épaisseur du chainage: ");
        scanf("%lf", &EpaisseurCHB);
        printf("Donnez la hauteur d'un chainage: ");
        scanf("%lf", &HauteurCHB);
        VolumeBrutCHB=LongDev*EpaisseurCHB*HauteurCHB/2;
        printf("Donnez le nombre chainage que compte votre batiment: ");
        scanf("%d", &NbreCHB);
        VolumeBetonCHB=VolumeBrutCHB*NbreCHB;
        printf("Le volume de béton nécessaire pour réaliser les chainages de votre batiment est %lf m^3.^\n", VolumeBetonCHB);
        printf("\n");
    }
    else
    {
        printf("Veuillez changer vos données.\n");
        printf("Choisissez la forme des chainages: ");
        scanf("%d", &FormeSectionCHB);
    }

    printf("Donnez le dosage de ciment pour les chainages: ");
    scanf("%lf", &DosageCimentCHB);
    QuantCimentCHB=VolumeBetonCHB*DosageCimentCHB;
    printf("La quantité de ciment pour les chainages est %lf kg/m^3.\n", QuantCimentCHB);
    printf("\n");

    QuantSableCHB=VolumeBetonCHB*DosageSable;
    printf("La quantité de sable pour les chainages est %lf m^3.\n", QuantSableCHB);
    printf("\n");

    QuantGravierCHB=VolumeBetonCHB*DosageGravier;
    printf("La quantité de gravier pour les chainages est %lf m^3.\n", QuantGravierCHB);
    printf("\n");
    printf("\n");

    printf("QUANTITE DE MATERIAUX: POTEAUX ET AMORCES POTEAUX\n");
    printf("\n");
    printf("Les formes de poteaux disponible dans ce programme sont:\n");
    printf("1: Rectangle;\n");
    printf("2: Carré;\n");
    printf("3: Cercle;\n");
    printf("4: Triangle;\n");
    printf("Choisissez la forme de poteaux: ");
    scanf("%d", &FormeSectionPoteau);
    if (FormeSectionPoteau==1)
    {
        printf("Donnez la longueur de l'ensemble: ");
        scanf("%lf", &LongTotale);
        printf("Donnez la largeur de l'ensemble: ");
        scanf("%lf", &LargPoteau);
        printf("Donnez la hauteur de l'ensemble: ");
        scanf("%lf", &HauteurPoteauAmorce);
        VolumeBrutPoteau=LongTotale*LargPoteau*HauteurPoteauAmorce;
        VolumeBetonPoteau=VolumeBrutPoteau*NbreFondation;
        printf("Le volume de béton nécessaire pour la réalisation des poteaux ");
        printf("et de leurs amorces est %lf kg/m^3.\n", VolumeBetonPoteau);
        printf("\n");
    }
    else if (FormeSectionPoteau==2)
    {
        printf("Donnez le coté du poteau: ");
        scanf("%lf", &CotePoteau);
        printf("Donnez la hauteur de l'ensemble: ");
        scanf("%lf", &HauteurPoteauAmorce);
        VolumeBrutPoteau=CotePoteau*CotePoteau*HauteurPoteauAmorce;
        VolumeBetonPoteau=VolumeBrutPoteau*NbreFondation;
        printf("Le volume de béton nécessaire pour la réalisation des poteaux ");
        printf("et de leurs amorces est %lf kg/m^3.\n", VolumeBetonPoteau);
        printf("\n");
    }
    else if (FormeSectionPoteau==3)
    {
        printf("Donnez le diamètre du poteau: ");
        scanf("%lf", &DiametrePoteau);
        printf("Donnez la hauteur de l'ensemble: ");
        scanf("%lf", &HauteurPoteauAmorce);
        VolumeBrutPoteau=3.14*DiametreProprete*DiametrePoteau*HauteurPoteauAmorce/4;
        VolumeBetonPoteau=VolumeBrutPoteau*NbreFondation;
        printf("Le volume de béton nécessaire pour la réalisation des poteaux ");
        printf("et de leurs amorces est %lf kg/m^3.\n", VolumeBetonPoteau);
        printf("\n");
    }
    else if (FormeSectionPoteau==4)
    {
        printf("Donnez la base du poteau: ");
        scanf("%lf", &BasePoteau);
        printf("Donnez la hauteur de la base du poteau: ");
        scanf("%lf", &HauteurBasePoteau);
        printf("Donnez la hauteur de l'ensemble: ");
        scanf("%lf", &HauteurPoteauAmorce);
        VolumeBrutPoteau=BasePoteau*HauteurBasePoteau*HauteurPoteauAmorce/2;
        VolumeBetonPoteau=VolumeBrutPoteau*NbreFondation;
        printf("Le volume de béton nécessaire pour la réalisation des poteaux ");
        printf("et de leurs amorces est %lf kg/m^3.\n", VolumeBetonPoteau);
        printf("\n");
    }
    else
    {
        printf("Veuillez changer vos données. ");
        printf("Choisissez la forme de poteaux: ");
        scanf("%d", &FormeSectionPoteau);
    }

    printf("Donnez le dosage de ciment pour les poteaux et amorces: ");
    scanf("%lf", &DosageCimentPoteau);
    QuantCimentPoteau=VolumeBetonPoteau*DosageCimentPoteau;
    printf("La quantité de ciment pour les poteaux et amorces est %lf kg/m^3.\n", QuantCimentPoteau);
    printf("\n");

    QuantSablePoteau=VolumeBetonPoteau*DosageSable;
    printf("La quantité de sable pour les poteaux et amorces est %lf m^3.\n", QuantSablePoteau);
    printf("\n");

    QuantGravierPoteau=VolumeBetonPoteau*DosageGravier;
    printf("La quantité de gravier pour les poteaux et amorces est %lf m^3.\n", QuantGravierPoteau);
    printf("\n");
    printf("\n");

    printf("QUANTITE DE MATERIAUX: FORME DALLAGE\n");
    printf("\n");

    printf("Pour cette section, cet algorithme fonctionne suivant deux modèles de forme dallage:\n");
    printf("1: FORME REGULIERE;\n");
    printf("2: MULTI-FORME REGULIERE.\n");
    printf("Faites votre choix: ");
    scanf("%d", &ChoixX);
    if (ChoixX==1)
    {
        printf("Pour ce modèle, nous travaillons avec les formes suivantes:\n");
        printf("1: CERCLE;\n");
        printf("2: ELLIPSE;\n");
        printf("3: TRIANGLE;\n");
        printf("4: CARRE;\n");
        printf("5: RECTANGLE;\n");
        printf("6: TRAPEZE;\n");
        printf("7: PENTAGONE;\n");
        printf("8: HEXAGONE;\n");
        printf("9: HEPTAGONE;\n");
        printf("10: OCTOGONE;\n");
        printf("11: ENNEAGONE;\n");
        printf("12: DECAGONE;\n");
        printf("Faites un choix: ");
        scanf("%d", &ChoixY);
        if (ChoixY==1)
        {
            printf("Vous avez choisi une forme dallage circulaire.\n");
            printf("Donnez le diamètre de la forme dallage: ");
            scanf("%%lf", &Diameter);
            SurfCercle=3.14*Diameter*Diameter/4;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
        }
        else if (ChoixY==2)
        {
            printf("Vous avez choisis une forme dallage elliptique.\n");
            printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
            scanf("%lf", &GrandAxe);
            printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
            scanf("%lf", &PetitAxe);
            SurfEllipse=3.14*GrandAxe*PetitAxe;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
        }
        else if (ChoixY==3)
        {
            printf("Vous avez choisi une forme dallage triangulaire.\n");
            printf("Donnez la valeur de la base: ");
            scanf("%lf", &Base);
            printf("Donnez la hauteur: ");
            scanf("%lf", &Hauteur);
            SurfTriangle=Base*Hauteur/2;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
        }
        else if (ChoixY==4)
        {
            printf("Vous avez choisi une forme dallage carré.\n");
            printf("Donnez le coté: ");
            scanf("%lf", &Cote);
            SurfCarre=Cote*Cote;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
        }
        else if (ChoixY==5)
        {
            printf("Vous avez choisi une forme dallage rectangulaire.\n");
            printf("Donnez la longueur: ");
            scanf("%lf", &Long);
            printf("Donnez la largeur: ");
            scanf("%lf", &Larg);
            SurfRectangle=Long*Larg;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
        }
        else if (ChoixY==6)
        {
            printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
            printf("Donnez la valeur de la grande base: ");
            scanf("%lf", &GrandeBase);
            printf("Donnez la valeur de la petite base: ");
            scanf("%lf", &PetiteBase);
            printf("Donnez sa hauteur: ");
            scanf("%lf", &Hauteur);
            SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
        }
        else if (ChoixY==7)
        {
            printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfPentagone=5*ValCote*(Hauteur/2)/2;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
        }
        else if (ChoixY==8)
        {
            printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfHexagone=6*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
        }
        else if (ChoixY==9)
        {
            printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfHeptagone=7*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
        }
        else if (ChoixY==10)
        {
            printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfOctogone=8*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
        }
        else if (ChoixY==11)
        {
            printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfEnneagone=9*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
        }
        else if (ChoixY==12)
        {
            printf("Vous avez choisi une forme dallage en forme de décagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfDecagone=10*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
        }
        else
        {
            printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
            printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
            scanf("%d", &ChoixY);
        }
    }
    else if (ChoixX==2)
    {
        SurfTt=0;
        printf("NB: Cet algorithme effectue une combinaison de deux formes régulières. Veuillez bien en tenir compte da la suite.\n");
        printf("Pour le choix des formes, respectez les exigences suivantes:\n");
        printf("1: CERCLE;\n");
        printf("2: ELLIPSE;\n");
        printf("3: TRIANGLE;\n");
        printf("4: CARRE;\n");
        printf("5: RECTANGLE;\n");
        printf("6: TRAPEZE;\n");
        printf("7: PENTAGONE;\n");
        printf("8: HEXAGONE;\n");
        printf("9: HEPTAGONE;\n");
        printf("10: OCTOGONE;\n");
        printf("11: ENNEAGONE;\n");
        printf("12: DECAGONE;\n");
        printf("Faites un choix pour la première forme: ");
        scanf("%d", &ChoixA);
        if (ChoixA==1)
        {
            printf("Vous avez choisi une forme dallage circulaire.\n");
            printf("Donnez le diamètre de la forme dallage: ");
            scanf("%%lf", &Diameter);
            SurfCercle=3.14*Diameter*Diameter/4;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCc);
                 SurfTt=SurfCercle+SurfCc;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfCercle+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfCercle+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfCercle+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfCercle+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfCercle+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfCercle+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfCercle+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfCercle+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfCercle+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfCercle+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfCercle+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==2)
        {
            printf("Vous avez choisis une forme dallage elliptique.\n");
            printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
            scanf("%lf", &GrandAxe);
            printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
            scanf("%lf", &PetitAxe);
            SurfEllipse=3.14*GrandAxe*PetitAxe;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfEllipse+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEll);
                 SurfTt=SurfCercle+SurfEll;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfEllipse+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfEllipse+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfEllipse+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfEllipse+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfEllipse+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfEllipse+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfEllipse+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfEllipse+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfEllipse+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfEllipse+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==3)
        {
            printf("Vous avez choisi une forme dallage triangulaire.\n");
            printf("Donnez la valeur de la base: ");
            scanf("%lf", &Base);
            printf("Donnez la hauteur: ");
            scanf("%lf", &Hauteur);
            SurfTriangle=Base*Hauteur/2;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfEllipse+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfTriangle+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTri);
                 SurfTt=SurfTriangle+SurfTri;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfTriangle+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfTriangle+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfTriangle+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfTriangle+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfTriangle+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfTriangle+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfTriangle+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfTriangle+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfTriangle+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==4)
        {
            printf("Vous avez choisi une forme dallage carré.\n");
            printf("Donnez le coté: ");
            scanf("%lf", &Cote);
            SurfCarre=Cote*Cote;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfCarre+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfCarre+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfCarre+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCr);
                 SurfTt=SurfCarre+SurfCr;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfCarre+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfCarre+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfCarre+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfCarre+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfCarre+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfCarre+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfCarre+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfCarre+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==5)
        {
            printf("Vous avez choisi une forme dallage rectangulaire.\n");
            printf("Donnez la longueur: ");
            scanf("%lf", &Long);
            printf("Donnez la largeur: ");
            scanf("%lf", &Larg);
            SurfRectangle=Long*Larg;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfRectangle+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfRectangle+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfRectangle+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfRectangle+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRect);
                 SurfTt=SurfRectangle+SurfRect;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfRectangle+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfRectangle+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfRectangle+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfRectangle+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfRectangle+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfRectangle+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfRectangle+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==6)
        {
            printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
            printf("Donnez la valeur de la grande base: ");
            scanf("%lf", &GrandeBase);
            printf("Donnez la valeur de la petite base: ");
            scanf("%lf", &PetiteBase);
            printf("Donnez sa hauteur: ");
            scanf("%lf", &Hauteur);
            SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfTrapeze+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfTrapeze+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfTrapeze+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfTrapeze+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfTrapeze+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrp);
                SurfTt=SurfTrapeze+SurfTrp;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfTrapeze+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfTrapeze+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfTrapeze+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfTrapeze+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfTrapeze+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfTrapeze+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==7)
        {
            printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfPentagone=5*ValCote*(Hauteur/2)/2;
            printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
             printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfPentagone+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfPentagone+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfPentagone+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfPentagone+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfPentagone+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfPentagone+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPtg);
                SurfTt=SurfPentagone+SurfPtg;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfPentagone+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfPentagone+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfPentagone+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfPentagone+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfPentagone+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==8)
        {
            printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfHexagone=6*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfHexagone+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfHexagone+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfHexagone+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfHexagone+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfHexagone+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfHexagone+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfHexagone+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHex);
                SurfTt=SurfHexagone+SurfHex;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfHexagone+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfHexagone+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfHexagone+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfHexagone+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==9)
        {
            printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfHeptagone=7*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfHeptagone+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfHeptagone+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfHeptagone+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfHeptagone+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfHeptagone+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfHeptagone+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfHeptagone+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfHeptagone+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHep);
                SurfTt=SurfHeptagone+SurfHep;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfHeptagone+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfHeptagone+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfHeptagone+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==10)
        {
            printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfOctogone=8*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfOctogone+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfOctogone+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfOctogone+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfOctogone+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfOctogone+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfOctogone+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfOctogone+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfOctogone+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfOctogone+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOct);
                SurfTt=SurfOctogone+SurfOct;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfOctogone+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfOctogone+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==11)
        {
            printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfEnneagone=9*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfEnneagone+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfEnneagone+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfEnneagone+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfEnneagone+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfEnneagone+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfEnneagone+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfEnneagone+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfEnneagone+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfEnneagone+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfEnneagone+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnn);
                SurfTt=SurfEnneagone+SurfEnn;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
                SurfTt=SurfEnneagone+SurfDecagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else if (ChoixA==12)
        {
            printf("Vous avez choisi une forme dallage en forme de décagone.\n");
            printf("Donnez la valeur d'un coté: ");
            scanf("%lf", &ValCote);
            printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
            scanf("%lf", &Hauteur);
            SurfDecagone=10*ValCote*(Hauteur/2)/2;
            printf("La surface de forme dallage est %lf cm^2.\n", SurfDecagone);
            printf("Faites un choix pour la seconde forme (toujours en fonction des informations données plus haut): ");
            scanf("%d", &ChoixB);
            if (ChoixB==1)
            {
                 printf("Vous avez choisi une forme dallage circulaire.\n");
                 printf("Donnez le diamètre de la forme dallage: ");
                 scanf("%%lf", &Diameter);
                 SurfCercle=3.14*Diameter*Diameter/4;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCercle);
                 SurfTt=SurfDecagone+SurfCercle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==2)
            {
                 printf("Vous avez choisis une forme dallage elliptique.\n");
                 printf("Donnez la valeur du demi-grand axe(rayon du grand axe): ");
                 scanf("%lf", &GrandAxe);
                 printf("Donnez la valeur du demi-petit axe(rayon du petit axe): ");
                 scanf("%lf", &PetitAxe);
                 SurfEllipse=3.14*GrandAxe*PetitAxe;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfEllipse);
                 SurfTt=SurfDecagone+SurfEllipse;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==3)
            {
                 printf("Vous avez choisi une forme dallage triangulaire.\n");
                 printf("Donnez la valeur de la base: ");
                 scanf("%lf", &Base);
                 printf("Donnez la hauteur: ");
                 scanf("%lf", &Hauteur);
                 SurfTriangle=Base*Hauteur/2;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTriangle);
                 SurfTt=SurfDecagone+SurfTriangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==4)
            {
                 printf("Vous avez choisi une forme dallage carré.\n");
                 printf("Donnez le coté: ");
                 scanf("%lf", &Cote);
                 SurfCarre=Cote*Cote;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfCarre);
                 SurfTt=SurfDecagone+SurfCarre;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==5)
            {
                 printf("Vous avez choisi une forme dallage rectangulaire.\n");
                 printf("Donnez la longueur: ");
                 scanf("%lf", &Long);
                 printf("Donnez la largeur: ");
                 scanf("%lf", &Larg);
                 SurfRectangle=Long*Larg;
                 printf("La surface de votre forme dallage est %lf cm^2.\n", SurfRectangle);
                 SurfTt=SurfDecagone+SurfRectangle;
                 printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==6)
            {
                printf("Vous avez choisis une forme dallage en forme de trapèze.\n");
                printf("Donnez la valeur de la grande base: ");
                scanf("%lf", &GrandeBase);
                printf("Donnez la valeur de la petite base: ");
                scanf("%lf", &PetiteBase);
                printf("Donnez sa hauteur: ");
                scanf("%lf", &Hauteur);
                SurfTrapeze=(GrandeBase+PetiteBase)*Hauteur/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfTrapeze);
                SurfTt=SurfDecagone+SurfTrapeze;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==7)
            {
                printf("Vous avez choisi une forme dallage en forme de pentagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfPentagone=5*ValCote*(Hauteur/2)/2;
                printf("La surface de votre forme dallage est %lf cm^2.\n", SurfPentagone);
                SurfTt=SurfDecagone+SurfPentagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==8)
            {
                printf("Vous avez choisi une forme allage en forme d'hexagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHexagone=6*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHexagone);
                SurfTt=SurfDecagone+SurfHexagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==9)
            {
                printf("Vous avez choisi une forme dallage en forme d'heptagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfHeptagone=7*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfHeptagone);
                SurfTt=SurfDecagone+SurfHeptagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==10)
            {
                printf("Vous avez choisi une forme dallage en forme d'octogone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfOctogone=8*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfOctogone);
                SurfTt=SurfDecagone+SurfOctogone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==11)
            {
                printf("Vous avez choisi une forme dallage en forme d'ennéagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfEnneagone=9*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfEnneagone);
                SurfTt=SurfDecagone+SurfEnneagone;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else if (ChoixB==12)
            {
                printf("Vous avez choisi une forme dallage en forme de décagone.\n");
                printf("Donnez la valeur d'un coté: ");
                scanf("%lf", &ValCote);
                printf("Donnez la hauteur (hauteur d'un coté vers le coté opposé): ");
                scanf("%lf", &Hauteur);
                SurfDecagone=10*ValCote*(Hauteur/2)/2;
                printf("La surface de forme dallage est %lf cm^2.\n", SurfDcg);
                SurfTt=SurfDecagone+SurfDcg;
                printf("La surface totale est %lf cm^2.\n", SurfTt);
            }
            else
            {
                printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
                printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
                scanf("%d", &ChoixB);
            }
        }
        else
        {
             printf("Veuillez entrer un choix conforme aux exigences de l'algorithme.\n");
             printf("Faites un choix de forme régulière (si vous voulez consulter la banque des formes, veuilez aller plus haut): ");
             scanf("%d", &ChoixA);
        }
    }
    VolumeBetonFD=SurfTt*EpaisseurFD;
    printf("Le volume de béton nécessaire à cette forme dallage est %lf m^3.\n", VolumeBetonFD);
    printf("\n");

    printf("Donnez le dosage de ciment pour la forme dallage: ");
    scanf("%lf", &DosageCimentFD);
    QuantCimentFD=VolumeBetonFD*DosageCimentFD;
    printf("La quantité de ciment pour la forme dallage est %lf kg/m^3.\n", QuantCimentFD);
    printf("\n");

    QuantSableFD=VolumeBetonFD*DosageSable;
    printf("La quantité de sable pour la forme dallage est %lf m^3.\n", QuantSableFD);
    printf("\n");

    QuantGravierFD=VolumeBetonFD*DosageGravier;
    printf("La quantité de gravier pour la forme dallage est %lf m^3.\n", QuantGravierFD);
    printf("\n");
    printf("\n");

    printf("BILAN DE LA QUANTITE DES MATERIAUX\n");
    printf("\n");

    VolumeTotaleBeton=VolumeBetonCHB+VolumeBetonFD+VolumeBetonFondation+VolumeBetonPoteau+VolumeBetonProprete;
    printf("Le volume totale de béton à utiliser est %lf m^3.\n", VolumeTotaleBeton);
    printf("\n");

    QuantTotalCiment=QuantCimentCHB+QuantCimentFD+QuantCimentBF+QuantCimentBP+QuantCimentPoteau;
    printf("La quantité totale de ciment est %lf kg.\n", QuantTotalCiment);
    NbreBrutPaquet=QuantTotalCiment/50;
    NbrePaquet=NbreBrutPaquet+1;
    printf("La quantité totale de ciment équivaut à %d de paquets.\n", NbrePaquet);
    NbreBrutTonne=NbrePaquet/20;
    NbreTonne=NbreBrutTonne+1;
    printf("La quantité totale de ciment équivaut à %d tonnes.\n", NbreTonne);
    printf("\n");

    QuantTotalGravier=QuantGravierBF+QuantGravierBP+QuantGravierCHB+QuantGravierFD+QuantGravierPoteau;
    printf("La quantité totale de gravier est %lf m^3.\n", QuantTotalGravier);
    printf("\n");

    QuantTotalSable=QuantSableBF+QuantSableBP+QuantSableCHB+QuantSableFD+QuantSablePoteau;
    printf("la quantité totale de sable est %lf m^3.\n", QuantTotalSable);
    printf("\n");
    printf("\n");

    printf("MUR DE SOUBASSEMENT\n");
    printf("\n");

    printf("Donnez la hauteur des amorces de poteaux: ");
    scanf("%lf", &HautAmorcePoteau);
    SurfaceSoub=LongDev*HautAmorcePoteau;
    printf("La surface du mur de soubassement à remplir d'agglos est %lf m^2.\n", SurfaceSoub);
    printf("\n");

    printf("Nombre d'agglos pratique(12.5 agglos/m^2) : ");
    NBA=12.5*SurfaceSoub/1;
    NbreAggloBA=NBA+1;
    printf("le nombre d'agglos pratique est %d.\n", NbreAggloBA);
    printf("Nombre d'agglos théorique(13 agglos/m^2) : ");
    NBB=13*SurfaceSoub/1;
    NbreAggloBB=NBB+1;
    printf("le nombre d'agglos théorique est %d.\n", NbreAggloBB);
    printf("\n");
    printf("\n");

    printf("***NOMBRE DE PAQUETS ET DE TONNES DE CIMENT***\n");
    printf("\n");

    printf("Nombre de paquet pratique(en considérant 12.5 agglos/m^2): ");
    NPBA=NbreAggloBA/NbreParpaings;
    NbrePaquetBA=NPBA+1;
    printf("le nombre de paquet de ciment pratique est %d;\n", NbrePaquetBA);
    NTBA=NbrePaquetBA/20;
    NbreTonneBA=NTBA+1;
    printf("le nombre de tonnes de ciment pratique est %d.\n", NbreTonneBA);
    printf("\n");

    printf("Nombre de paquet théorique(en considérant 13 agglos/m^2): ");
    NPBB=NbreAggloBB/NbreParpaings;
    NbrePaquetBB=NPBB+1;
    printf("le nombre de paquet de ciment théorique est %d; \n", NbrePaquetBB);
    NTBB=NbrePaquetBB/20;
    NbreTonneBB=NTBB+1;
    printf("le nombre de tonnes de ciment pratique est %d.\n", NbreTonneBB);
    printf("\n");
    printf("\n");

    printf("LAMBREQUIN\n");
    printf("\n");

    LongLambrequin=LongDev;
    printf("La longueur des lambrequins est %lf ML.\n", LongLambrequin);
    printf("\n");
    printf("\n");

    printf("TOITURE\n");
    printf("\n");

    SurfaceToiture=SurfTt;
    printf("La surface à recouvrir de tuiles est estimée à %lf m^2.\n", SurfaceToiture);
    printf("\n");
    printf("\n");

    printf("PEINTURE FOM SUR ENDUITS INTERIEUR ET EXTERIEUR\n");
    printf("\n");

    SurfacePeinture=SurfMur*2;
    printf("La surface à peindre est estimée à %lf m^2.\n", SurfacePeinture);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("MERCI D'AVOIR PRIS PAR NOTRE PLATEFORME ALGORITHMIQUE!\n");

    return 0;
}
