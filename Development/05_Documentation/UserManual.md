# Shutter Speed Tester User Manual

# English

- [ ] Todo

# French

## Référence
Le Shutter Speed Tester est le produit d’un projet open source. Tous les détails de son fonctionnement, ses plans, sa fabrication, etc, sont disponibles sur le site web suivant :  
http://github.com/sebastienroy/shutter_speed_tester
## Licence
Le code de Shutter Speed Tester est distribué sous licence GPL3. Cette licence vous permet de copier, modifier, distribuer son code, à condition que ces copies soient distribuées sous la même licence.  
Pour plus de détails :  
https://www.gnu.org/licenses/gpl-3.0.fr.html
## Mode opératoire
-	placez le capteur à l'arrière de l'appareil photo, à la place de la pellicule.
-	placez le boitier en face de l'appareil photo à la bonne hauteur pour être en face du capteur
-	allumez l'appareil. La LED d'éclairage de l'appareil s'allume
-	déclenchez. L'appareil indique la vitesse mesurée.
-	pour recommencer la mesure, appuyez sur le bouton sur la façade de l'appareil.
## Spécificité de mesure selon le type d’obturateur.
On distingue principalement deux types d’obturateur : 
-	Les obturateurs centraux
-	Les obturateurs plan focal (à rideaux)  

Le Shutter Speed Tester donne une indication de vitesse d’obturateur sur un mode tout ou rien, mesuré à l’emplacement du capteur. Ce fonctionnement très simple est suffisant pour couvrir la majorité du besoin de mesure, pour lequel l’exposition est le produit de la vitesse et de l’ouverture
Il existe toutefois certains cas où cette simple valeur n’est pas suffisante pour déterminer l’exposition.
### Obturateur plan focal
L’obturateur plan focal met en œuvre deux rideaux qui se déplacent successivement, dans le même sens. L’ouverture de l’un est suivie par la fermeture de l’autre.
Si les deux rideaux se déplacent à la même vitesse sur toute la surface, l’exposition est uniforme et est donnée par la mesure du Shutter Speed Tester.  
Si les deux rideaux se déplacent à des vitesses différentes, cela donne des différences d’exposition selon les parties de la photo. Pour détecter cela, positionnez le capteur à différentes positions à l’arrière de l’appareil photo pour faire vos mesures et vérifiez que les valeurs de mesures sont identiques quel que soit l’emplacement du capteur.
### Obturateur central
L'obturateur central a pour caractéristique de fonctionner trois phases : l'ouverture, la pleine ouverture, et la fermeture.  
Lorsque la pleine ouverture dure longtemps par rapport aux phases d'ouverture et de fermeture, tout va bien.  
Lorsque ce n'est plus le cas (pour les très hautes vitesses, en pratique uniquement pour la vitesse la plus rapide de l'obturateur), vous pouvez avoir un écart entre la durée d'ouverture mesurée et l'exposition de la pellicule, puisqu'il est impossible de dire à partir de quel seuil le "chronomètre" va être mis en marche. Ce dernier fonctionne en mode "tout ou rien".  
Il existe toutefois une façon d'estimer le phénomène : Si vous placez le capteur au plus proche de l'obturateur (coté objectif, donc), vous pouvez faire des mesures au centre et des mesures en périphérie. La différence de valeur mesurée vous donnera la vitesse d'ouverture et de fermeture de l'obturateur
