/**
 * \file GrapheHexPlus.h
 * \brief Fichier header supplémentaire pour le type GrapheHex
 * \author Pierre POMERET-COQUOT
 * \version 1.0
 * \date 25 avril 2017
 *
 */


# ifndef __GRAPHEHEXPLUS__
# define __GRAPHEHEXPLUS__

# include "GrapheHex.h"

# include <stdio.h>
# include <stdlib.h>
# include <assert.h>



/**
 * \brief   Trouve les noeuds accessibles en n coups
 * \param   g      Le graphe à fouiller
 * \param   noeud  Le noeud depuis lequel on cherche
 * \param   n      Le nombre de coups pour atteindre les cases
 * \param   j      Le joueur qui cherche à poser ses pions
 * \param   ponts  La taille des ponts à prendre en compte
 * \return  Une LDC de (n+1) LDC de noeuds, où :
 *            - la 0ème contient le noeud passé en argument
 *            - les ièmes contiennent les noeuds joignables en i coup minimum
 */
LDC GrapheHex_noeudsAccessiblesEnNCoups(GrapheHex g, GrapheNoeud noeud, int n, Joueur j, int ponts);

/**
 * \brief    Fusionne deux noeuds en prenant soin du métagraphe
 */
GrapheHex GrapheHex_fusionnerNoeuds(GrapheHex g, GrapheNoeud n1, GrapheNoeud n2);

/**
 * \brief   Donne les noeuds d'un joueur
 * \note    La gestion de la mémoire de la LDC renvoyée est à votre charge.
 */
LDC GrapheHex_groupes(GrapheHex g, Joueur j);

/**
 * \brief    Simplifie tout le graphe (regroupe les J1 contigus, et les J2)
 */
GrapheHex GrapheHex_simplifier(GrapheHex g);

/**
 * \brief    Donne le(s) plus court(s) chemin(s) pour aller des points d'entrée A vers B
 * \note     La fonction renvoie une LDC de LDC (LDC à deux dimensions). Sa désallocation mémoire est à votre charge.
 */
LDC GrapheHex_plusCourtsChemins(GrapheHex g, GrapheNoeud depart, GrapheNoeud arrivee, Joueur j);





/** @} */



# endif