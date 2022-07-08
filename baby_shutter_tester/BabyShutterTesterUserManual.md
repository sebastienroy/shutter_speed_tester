# Baby Shutter Tester

Le baby shutter tester est un appareil destiné à mesurer la vitesse d’obturation des appareils photographiques argentiques.  
Cet appareil a été conçu et fabriqué en France. Son assemblage est fait selon un processus artisanal.  

Sa conception est issue du projet open source Shutter Speed Tester (github.com/sebastienroy/shutter_speed_tester). Il en reprend les principes, mais ses composants et sa fabrication ont été optimisés pour permettre un format plus réduit.

# Mise en service

Le Baby shutter tester est constitué d’un boitier principal et d'un capteur reliés par un fil.  

Le boitier principal comporte  
- Un interrupteur on/off
- Un bouton de réinitialisation et de sélection de mode
- Un écran d'affichage
- Une LED d'éclairage (sur le côté droit)
- Un port micro USB (sur le côté gauche)
- Une trappe à pile LR03(AAA) (à l’arrière)  
  
Le capteur comporte 
- Un support au format 35 mm
- Un phototransistor
- Un adaptateur moyen format

L'appareil peut être alimenté électriquement soit par un câble micro USB, soit par deux piles LR03 (AAA). Ces dernières se mettent en place à l’arrière de l’appareil, en ouvrant la trappe plastique qui recouvre leur logement.  
Il est nécessaire d'enlever les piles  
- Lorsque vous n'utilisez pas l'appareil pendant une durée prolongée
- Lorsque vous connectez l'appareil sur le port USB  
  
# Condition d’utilisation et de stockage  

Le Baby Shutter Tester doit être maintenu à l’abri de l’humidité et des sources de chaleur.  
Il est prévu pour fonctionner sur une plage de température de 5 à 40°C.

# Mode opératoire

Ouvrez le dos de votre appareil photo.  
Placez le capteur à l’arrière de l’appareil photo, à la place de la pellicule. Pour les appareils moyen format, utilisez l’adaptateur fournit. Veillez à centrer le capteur, et maintenez-le à l’aide d’un élastique ou de tout autre dispositif.  
Placez le boitier en face de votre appareil photo, en le rehaussant éventuellement, afin que la LED d’illumination de l’appareil soit bien en face du capteur. La LED du Baby Shutter Tester a un cône d’éclairage de 20°. Il est nécessaire pour réaliser les mesures que le capteur soit situé dans ce cône d’éclairage, et à une distance maximum de 6cm de la LED.  
- Allumez le baby Shutter Tester. Le boitier affiche "Ready" et la LED d'éclairage est allumée
- Pour vous assurer que le boitier du Baby Shutter Tester et son capteur sont bien positionnés, utilisez le mode Test (voir chapitre suivant)
- Sélectionnez la vitesse que vous voulez mesurer sur votre appareil photo
- Déclenchez l’obturateur de votre appareil photo. Durant la phase d'ouverture de l'obturateur, le Baby Shutter Tester affiche un soleil pour indiquer qu'il détecte de la lumière. Cette phase peut être très brève, en fonction de la vitesse choisie sur l'appareil photo. Une fois l'obturateur refermé, la valeur de vitesse mesurée est affichée sur l'écran
- Comparez la valeur mesurée avec la valeur choisie sur le sélecteur de vitesse de votre appareil photo
- Pour effectuer une nouvelle mesure, appuyez sur le bouton de réinitialisation.

Les mesures du Baby Shutter Tester sont précises au 20 000e de seconde

# Mode Test

Lorsque le Baby Shutter Tester affiche "Ready", un appui long (supérieur à deux secondes) sur le bouton de réinitialisation permet de passer en mode Test.
Dans ce mode, l'appareil n'effectue pas de mesure, mais garde la LED d'éclairage allumée et affiche un soleil lorsque le capteur détecte de la lumière.  
Ce mode vous permet de positionner correctement le capteur à l'arrière de l'appareil photo, et la LED du boitier en face et à la bonne hauteur par rapport à celui-ci. Utilisez par exemple des livres de la bonne épaisseur pour surélever de façon stable et à la hauteur voulue le Baby Shutter Tester.  
Lorsque vous pensez avoir correctement positionné l'ensemble, sélectionnez une vitesse lente ou la pause B sur votre appareil photo et déclenchez. Si un soleil apparait sur le testeur, c'est que l'ensemble est correctement positionné.

Une fois le positionnement effectué, un appui bref sur le bouton de réinitialisation vous permettra de vous retrouver dans le mode de mesure.

Un appui long depuis le mode Test permet d'afficher des informations sur votre boitier.

# Spécificité de mesure selon le type d’obturateur.

On distingue principalement deux types d’obturateur :  
- Les obturateurs centraux
- Les obturateurs plan focal (à rideaux)  

Le Shutter Speed Tester donne une indication de vitesse d’obturateur sur un mode tout ou rien, mesuré à l’emplacement du capteur. Ce fonctionnement très simple est suffisant pour couvrir la majorité du besoin de mesure, pour lequel l’exposition est le produit de la vitesse et de l’ouverture.  
Il existe toutefois certains cas où cette simple valeur n’est pas suffisante pour déterminer l’exposition.  
## Obturateur plan focal
L’obturateur plan focal met en œuvre deux rideaux qui se déplacent successivement, dans le même sens. L’ouverture de l’un est suivie par la fermeture de l’autre. Si les deux rideaux se déplacent à la même vitesse sur toute la surface, l’exposition est uniforme et est donnée par la mesure du Shutter Speed Tester.  
Si les deux rideaux se déplacent à des vitesses différentes, cela donne des différences d’exposition selon les parties de la photo. Pour détecter un tel phénomène, positionnez le capteur à différentes positions à l’arrière de l’appareil photo pour faire vos mesures et vérifiez que les valeurs de mesures sont identiques quel que soit l’emplacement du capteur.  
## Obturateur central
L'obturateur central a pour caractéristique de fonctionner en trois phases : l'ouverture, la pleine ouverture, et la fermeture.  
Lorsque la pleine ouverture dure longtemps par rapport aux phases d'ouverture et de fermeture, tout va bien.  
Lorsque ce n'est plus le cas (pour les très hautes vitesses, en pratique uniquement pour la vitesse la plus rapide de l'obturateur), vous pouvez avoir un écart entre la durée d'ouverture mesurée et l'exposition de la pellicule, puisqu'il est impossible de dire à partir de quel seuil le "chronomètre" va être mis en marche. Ce dernier fonctionne en mode "tout ou rien".  
Il existe toutefois une façon d'estimer le phénomène : Si vous placez le capteur au plus proche de l'obturateur (coté objectif, donc), vous pouvez faire des mesures au centre et des mesures en périphérie. La différence de valeur mesurée vous donnera la vitesse d'ouverture et de fermeture de l'obturateur

# Précision des mesures

Comme tout instrument de mesure, les résultats du Baby Shutter Tester sont entachés d’une certaine incertitude. Il est essentiel que l’opérateur soit conscient des limitations de l’instrument et de ses conditions d’utilisation.  
L’incertitude de mesure du Baby Shutter Tester provient pour l’essentiel du comportement électronique du phototransistor utilisé pour déterminer l’ouverture ou la fermeture de l’obturateur. Un peu comme une jauge, qui met du temps à détecter l’arrivée ou la sortie d’eau dans un réservoir, un phototransistor met un peu de temps pour se « remplir » et se « vider ». Les temps de commutation (ouverture / fermeture) dépendent notamment de l’intensité de la lumière reçue. Par analogie, une jauge ne mettra pas le même temps à détecter la présence d’eau selon que le débit d’arrivée d’eau soit élevé ou faible. 

**Lorsque le capteur est placé en face de sa LED, à une distance comprise entre 3 et 6 cm, avec une lumière ambiante d’intérieur, l’incertitude de mesure** (l’écart entre le phénomène physique et sa mesure) **est inférieure à 25 microsecondes**. Cet écart est évalué en atelier à l’aide d’un banc de mesure dédié, et est vérifié en sortie de fabrication de l’appareil.  

Lorsque les conditions ci-dessus sont remplies, il est donc possible de réaliser des mesures de vitesses jusqu'au **4000e de seconde avec une précision d’un dixième de diaphragme**.  


# Contact

Pour toute information supplémentaire ou toute question que vous pourriez avoir sur le Baby Shutter Tester, vous pouvez vous référer à l'adresse web suivante :  

http://github.com/sebastienroy/shutter_speed_tester  
[photographyelectronics@gmail.com](mailto:photographyelectronics@gmail.com)

