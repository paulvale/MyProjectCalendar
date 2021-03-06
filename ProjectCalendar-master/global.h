#ifndef GLOBAL
#define GLOBAL

/*!
 * \file Global.h
 * \brief Fichier XML
 *
 * Le nom du fichier XML dans lequel nous enregistrons
 * tous nos projets et le fichier XML dans lequel
 * toutes les programmations sont gardées.
 * Ces 2 noms de fichier sont gardés en variable globale
 * a l'interieur de ce header
 *
 * \author Lucas WILLEMOT et Valentin PAUL
 * \version 0.1
 */

#include <QString>

const QString fileXML = "projets.dat";/*!< nom du fichier XML contenant les projets*/
const QString progXML = "programmations.dat";/*!< nom du fichier XML contenant les programmations pour le calendrier*/

#endif // GLOBAL



