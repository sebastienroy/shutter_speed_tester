# Description du projet Shutter Speed Tester (Testeur de vitesse d'obturateur)

## Introduction

Le projet consiste à réaliser un outil permettant de mesurer la vitesse d'obturation des appareils photographiques argentiques.  
Ces appareils photo, surtout lorsqu'il sont anciens, ont un obturateur qui est une pièce d'horlogerie susceptible de se dérègler. Le temps d'ouverture de l'obturateur peut alors avoir un écart important par rapport à la valeur attendue, conduisant à une sous-exposition ou une sur-exposition de la pellicule.  
La connaissance de cet écart permet au propriétaire de l'appareil photo, 
- soit de re-calibrer l'obturateur s'il en a les compétences, 
- soit de compenser l'écart constaté au moyen du règlage du diaphragme et/ou du sélecteur de vitesse.


## Niveaux de compétences requis pour ce projet

| Domaine | Niveau | Détail |
|--|--|--|
| Connaissance métier | Niveau intermédiaire| Comme dans tout projet, une bonne connaissance des besoins de l'utilisateur final est la clé de la réussite. Lorsque le client et le fournisseur ne font qu'un, forcément ça aide. Les concepts opérationnels servis par le projet sont toutefois plutôt simples à apréhender|
| Electronique | Peu complexe à moyennement complexe | - Définition des circuits : Niveau lycée. La loi d'Ohm et le principe de fonctionnement d'une LED et d'un transistor sont suffisants pour les circuits de ce projet</br>- Réalisation d'un circuit imprimé : L'expérience montre que la définition d'un circuit imprimé tel que celui de ce projet n'est au final  pas très compliqué. Sa fabrication est sous-traitée à un industriel spécialisé</br>- Assemblage des composants : L'assemblage des composants sur le circuit imprimé nécessite de réaliser quelques soudures et de sertir quelques connecteurs. Ce sont des savoir-faire qui s'apprennent très facilement après visualisation de quelques vidéos YouTube. |
| Programmation Arduino| Peu complexe à moyen | Niveau bac. Les circuits électroniques sont pilotés par le microcontroleur d'une carte Arduino. La programmation d'une telle carte est de niveau lycée. La gestion des interruptions et d'états est à peine plus complexe mais ne devrait pas présenter de difficulté particulière pour un ingénieur travaillant dans des systèmes à logiciel prépondérant |
| Modélisation 3D | Peu complexe | Définition du modèle 3D du boitier. De nombreux éléments sont à prendre en compte (taille et position des composants, trapes d'accès, etc), mais individuellement, aucun de ces éléments ne représente une difficulté majeure|
| Suite dans les idées| Niveau ingénieur d'un grand groupe industriel | Chacune des étapes du projet est individuellement très simple, et nécessite des connaissances facilement accessibles en ligne. Il a toutefois été nécessaire d'en enchainer un nombre important pour arriver au résultat attendu. L'identification et la description de ces étapes est au final l'enjeu principal d'un projet de ce type. Ce sont des activités qui sont le quotidien du Product Owner dans une organisation Scrum| 

## Outils et techniques appris ou mis en oeuvre au cours du projet
|Outil/technique|Description|
|---|---|
| Arduino IDE | Le web regorge de ressources, tutoriels, documentation, vidéos décrivant chaque aspect de la programmation Arduino. Il suffit de se pencher pour ramasser |
| Fritzing| Fritzing est un outil permettant de décrire très facilement des schémas électroniques, et notamment sous forme de plaque d'essais. Impeccable pour générer des illustrations|
| KiCAD | KiCAD est un outil Open Source de design de circuits imprimés. Il permet de décrire très précisément, avec une qualité "professionnelle", les différentes couches qui composent un circuit imprimé. Son format de fichier est directement accepté par les fabricants de circuits. KiCAD est très riche, mais seul une partie de cette richesse a été exploitée pour ce projet |
| Fer à souder | L'utilisation d'un fer à souder pour souder des composants n'est pas très compliquée mais nécessite un peu d'expérience avant d'arriver à un résultat satisfaisant. De nombreux tutoriaux et descriptifs sont disponibles en ligne |
| Pince à sertir| Pour relier les composants "externes" au circuit imprimé, on utilise des fils électriques connectés par le moyen de connecteurs. Ils nécessitent d'être sertis. On utilise pour ce faire une pince à sertir, qui demande un peu d'aprentissage pour limiter le taux de déchets|
| FreeCAD | FreeCAD est un des nombreux outils disponibles pour la modélisation 3D. Il a l'avantage d'avoir un fonctionnement paramétrique, permettant une définition ultra précise des dimensions des pièces concues. Par ailleurs de très nombreux tutoriaux et exemples sont diponibles en ligne. Une fois assimilés les principes généraux de l'outil, son utilisation est plutôt simple |
| Impression 3D| L'impression 3D proprement dite est très simple. Elle met en oeuvre un outil qui va importer le modèle 3D et le découper en tranches, les différentes couches d'impression.  |


## Les étapes du projet, pas à pas
Voici les grandes lignes du développement du projet. Les détails de chacune des parties est disponible (en anglais) sur le site de partage du projet  
> www.github.com/sebastienroy/shutter_speed_tester

### Définition du concept opérationnel
- Qui est la cible du produit ? 
- Quels besoins seront satisfaits par le produit ? (Conops)
- Comment le produit va satisfaire le besoin de l'utilisateur? (Conuse)
- Quels sont les avantages comparatifs du produit par rapport à ce qui existe déjà? 

### Design préliminaire
- Description des comportements principaux
- Définition de l'architecture du produit
- Choix des composants
- Choix des outils de développement

### Développement électronique et logiciel
- Définition du circuit comprenant les éléments requis pour implémenter le comportement attendu
- Développement du code de control des circuits électroniques et implémentant le comportement attendu
- Développement du circuit imprimé
- Production du circuit imprimé
- Assemblage des composants : soudage, sertissage des connecteurs, tests

## Design du boitier

- Design de la façade : ouvertures pour l'affichage, le bouton, la LED de control, l'interrupteur. Positionnement des plots de support à vis.
- Design du corps du boitier : positionnement de la source de lumière, du fil du capteur
- Design du dos : emplacement de la pile et de sa trappe d'accès
- Design du support de capteur : prise en compte des différents formats de film ephotographique.

### Documentation
- Manuel utilisateur
- Manuel de fabrication
- Liste des composants

## Les conseils de Sébastien


