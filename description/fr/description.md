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
| Connaissance métier | Niveau intermédiaire| Comme dans tout projet, une bonne connaissance des besoins de l'utilisateur final est la clé de la réussite. Lorsque le client et le fournisseur ne font qu'un, forcément ça aide. Les concepts opérationnels servis par le projet sont toutefois plutôt simples|
| Electronique : définition des circuits| Peu complexe | Niveau lycée. La loi d'Ohm et le principe de fonctionnement d'une LED et d'un transistor sont suffisants pour les circuits de ce projet |
| Programmation Arduino| Peu complexe | Niveau bac. Les circuits électroniques sont pilotés par le microcontroleur d'une carte Arduino. La programmation d'une telle carte est de niveau lycée. La gestion des interruptions et d'états est à peine plus complexe mais ne devrait pas présenter de difficulté particulière pour un ingénieur travaillant dans des systèmes à logiciel prépondérant |
| Electronique : Réalisation d'un circuit imprimé | Peu complexe | L'expérience montre que la définition d'un circuit imprimé tel que celui de ce projet est au final très simple. Sa fabrication est sous-traitée à un industriel spécialisé |
| Electronique : assemblage des composants| Peu complexe| L'assemblage des composants sur le cicuit imprimé nécessite de réaliser quelques soudures et de sertir quelques connecteurs. Après visualisation de quelques vidéos YouTube, ce sont des opérations qui s'apprennent très facilement|
| Modélisation 3D | Peu complexe | Définition du modèle 3D du boitier. De nombreux éléments sont à prendre en compte (taille et position des composants, trapes d'accès, etc), mais individuellement, aucun de ces éléments ne représente une difficulté majeure|
| Suite dans les idées| Niveau ingénieur d'un grand groupe industriel | Chacune des étapes du projet est très simple, et nécessite des connaissances facilement accessibles en ligne. L'identification et la description de ces étapes est au final l'enjeu principal d'un projet de ce type. Ce sont des activités qui sont le quotidien du Product Owner dans une organisation Scrum| 

## Outils et techniques apprises ou mis en oeuvre au cours du projet
|Outil/technique|Description|
|---|---|
| Programmation Arduino | Le web regorge de ressources, tutoriels, documentation, vidéos décrivant chaque aspect de la programmation Arduino. Il suffit de se pencher pour ramasser. |
| Fritzing| Fritzing est un outil permettant de décrire très facilement des schémas électroniques, et notamment sous forme de plaque d'essais. Impéccable pour générer des illustrations|
| KiCAD | KiCAD est un outil Open Source de design de circuits imprimés. Il permet de décrire très précisément, avec une qualité "professionnelle", les différentes couches qui composent un circuit imprimé. Son format de fichier est directement accepté par les fabricants de circuits. |
| Fer à souder | L'utilisation d'un fer à souder pour souder des composants n'est pas très compliquée mais nécessite un peu d'expérience avant d'arriver à un résultat satisfaisant. De nombreux tutoriaux et descriptifs sont disponibles en ligne |
| Pince à sertir| Pour relier les composants "externes" au circuit imprimé, on utilise des fils électriques connectés par le moyen de connecteurs. Ils nécessitent d'être sertis. On utilise pour ce faire une pince à sertir, qui demande un peu d'aprentissage pour limiter le taux de déchets|
| FreeCAD | FreeCAD est un des nombreux outils disponibles pour la modélisation 3D. Il a l'avantage d'avoir un fonctionnement paramétrique, permettant une définition ultra précise des dimensions des pièces concues. Par ailleurs de très nombreux tutoriaux et exemples sont diponibles en ligne. Une fois assimilés les principes généraux de l'outil, sont utilisation est plutôt simple |
| Impression 3D| L'impression 3D proprement dite est très simple. Elle met en oeuvre un outil qui va importer le modèle 3D et le découper en tranches, les différentes couches d'impression.  |
