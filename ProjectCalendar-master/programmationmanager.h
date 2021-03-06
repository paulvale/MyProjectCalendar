#ifndef PROGRAMMATIONMANAGER_H
#define PROGRAMMATIONMANAGER_H

/*!
 * \file ProgrammationManager.h
 * \brief Singleton permettant de s'occuper de la programmation des taches
 * \author Lucas WILLEMOT et Valentin PAUL
 * \version 0.1
 */

#include "calendarexception.h"
#include "tache.h"
#include "programmation.h"
#include "global.h"
#include <QTime>
#include <QDate>

/*! \class ProgrammationManager
   * \brief Classe Singleton Programmation Manager
   *
   *  La classe Programmation Manager s'occupe de gerer
   *  les programmations des taches dans l'agenda de
   *  l'utilisateur.
   */
class ProgrammationManager {
private:
    std::vector<Programmation*> programmations;/*!< Vector des programmations enregistrées*/

    /*!
         *  \brief addItem
         *
         *  Ajout d'une programmation
         *
         *  \param t : la programmation que l'on veut ajouter au vector
         */
    void addItem(Programmation* t);

    /*!
         *  \brief trouverProgrammation
         *
         *  Permet de retrouver la programmation d'une tache particuliere
         *
         *  \param t : la tache dont on voudrait retrouver la programmation
         */
    Programmation* trouverProgrammation(const Tache& t) const;

    /*!
         *  \brief ajoutPossible
         *
         *  Verification ajout d'une programmation possible
         *
         *  \param t : la programmation que l'on veut ajouter au vector
         *  \param d : date de la programmation souhaitée
         *  \param h : heure de la programmation souhaitée
         *  \param dur : durée de la programmation souhaitée
         */
    bool ajoutPossible(const Tache& t, const QDate& d, const QTime& h, const QTime& dur);



    /*! \class Handler
       * \brief Classe encapsulant l'instance unique du ProgrammationManager
       *
       *  La classe Handler permet de s'occuper automatiquement
       *  de l'instance unique du programmationManager.
       *  Ainsi, lors de la fermeture du programme, le destructeur de Handler
       *  sera appele et celui ci lancera alors la sauvegarde des modifications
       *  dans le fichier XML.
       */
    struct Handler{
        ProgrammationManager* instance;/*!< Instance unique du projet manager*/

        /*!
             *  \brief Constructeur
             *
             *  Constructeur de la classe Handler
             */
        Handler():instance(0){}
        // destructeur appelé à la fin du programme

        /*!
             *  \brief Destructeur
             *
             *  Destructeur de la classe Handler
             */
        ~Handler(){ if (instance) delete instance; }
    };
    static Handler handler;/*!< Handler statique permettant notamment la sauvegarde automatique*/

    /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe ProgrammationManager
         */
    ProgrammationManager();

    /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe ProgrammationManager
         */
    ~ProgrammationManager();

    /*!
         *  \brief Constructeur de recopie
         *
         *  Constructeur de recopie de la classe ProgrammationManager
         *
         *  \param um : ProgrammationManager a recopie
         */
    ProgrammationManager(const ProgrammationManager& um);

    /*!
         *  \brief Operateur d'affectation
         *
         *  Operateur d'affectation de la classe ProgrammationManager
         *
         *  \param um : ProgrammationManager a recopie
         */
    ProgrammationManager& operator=(const ProgrammationManager& um);



public:
        void supprimerProgrammation(const Tache& t);

    /*!
         *  \brief ajouterProgrammation
         *
         *  Fonction permettant d'ajouter une tache dans les programmations
         *
         *  \param t : la tache a ajoute dans la programmation
         *  \param d : la date de programmation de cette tache
         *  \param h : l'heure de programmation de cette tache
         *  \param duree : duree de la programmation de cette tache
         */
    void ajouterProgrammation(const Projet& p, const Tache& t, const QDate& d, const QTime& h, const QTime& duree);

    /*!
         *  \brief getInstance
         *
         *  Fonction statique permettant d'avoir l'instance unique du projet
         *  a n'importe quel endroit du code.
         */
    static ProgrammationManager& getInstance();

    /*!
         *  \brief libererInstanceProjet
         *
         *  Fonction statique permettant de liberer l'instance du projet en cours.
         */
    static void libererInstance();

    /*!
         *  \brief writeProgrammation
         *
         *  Fonction permettant d'ecrire la programmation
         *
         *  \param p : la programmation a ecrire
         *  \param dom : l'arborescence de nos programmations
         */
    QDomElement& writeProgrammation(Programmation* p, QDomDocument* dom);

    /*!
         *  \brief save
         *
         *  Fonction permettant d'enregistrer les programmations dans un fichier XML, à partir du
         *  vector de programmations
         */
    void save();

    /*!
         *  \brief exportWeekXML
         *
         *  Fonction permettant l'export d'une semaine dans un fichier XML
         *
         *  \param dateDebut : date du debut de la semaine
         *  \param dateFin : date de la fin de la semaine
         *  \param filename : nom du fichier XML
         */
    void exportWeekXML(const QDate& dateDebut, const QDate& dateFin, const QString& filename);

    /*!
         *  \brief exportProjectXML
         *
         *  Fonction permettant l'export des programmatiosn d'un projet
         *
         *  \param dateDebut : date du debut de la semaine
         *  \param dateFin : date de la fin de la semaine
         *  \param filename : nom du fichier XML
         */
    void exportProjectXML(const QString& projectname, const QString& filename);

    /*!
         *  \brief load
         *
         *  Fonction permettant de charger les programmations à partir d'un fichier XML dans le vector
         *  de programmations
         */
    void load();

    /*!
         *  \brief begin
         *
         *  Permet d'itérer sur le vector de programmations en dehors de la tache
         * ProgrammationManager
         */
    std::vector<Programmation*>::iterator begin(){return programmations.begin();}

    /*!
         *  \brief end
         *
         *  Permet d'itérer sur le vector de programmations en dehors de la tache
         * ProgrammationManager
         */
    std::vector<Programmation*>::iterator end(){return programmations.end();}
};

#endif // PROGRAMMATIONMANAGER_H
