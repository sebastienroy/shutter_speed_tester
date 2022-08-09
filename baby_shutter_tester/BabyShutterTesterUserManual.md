# Baby Shutter Tester

_Mode d'emploi de la version 1.1.0_

Le Baby Shutter Tester est un appareil destiné à mesurer la vitesse d’obturation des appareils photographiques argentiques.  
Cet appareil a été conçu et fabriqué en France. Son assemblage est fait selon un processus artisanal. Le boitier est imprimé à l'unité sur une imprimante 3D avec une matière première biosourcée et produite en Europe.  

Sa conception est issue du projet open source Shutter Speed Tester (github.com/sebastienroy/shutter_speed_tester). Il en reprend les principes, mais ses composants et sa fabrication ont été optimisés pour permettre un format plus réduit.

# Mise en service

Le Baby shutter tester est constitué d’un boitier principal et d'un capteur déporté.  

Le boitier principal comporte  
- Un interrupteur on/off
- Un bouton de réinitialisation et de sélection de mode
- Un écran d'affichage
- Une LED d'éclairage (sur le côté droit)
- Un port micro USB (sur le côté gauche)
- Une trappe à pile LR03 (AAA) (à l’arrière)  
  
Le capteur est constitué de 
- Un phototransistor situé au centre d'un support au format 35 mm
- Un adaptateur moyen format amovible

L'appareil peut être alimenté électriquement soit par un câble micro USB, soit par deux piles LR03 (AAA). Ces dernières se mettent en place à l’arrière de l’appareil, en ouvrant la trappe qui recouvre leur logement.  

Il est nécessaire d'enlever les piles  
- Lorsque vous n'utilisez pas l'appareil pendant une durée prolongée
- Lorsque vous connectez l'appareil sur le port USB  
  
# Condition d’utilisation et de stockage  

Le Baby Shutter Tester doit être maintenu à l’abri de l’humidité et des sources de chaleur.  
Il est prévu pour fonctionner sur une plage de température de 5 à 40°C.

# Mode opératoire

- Ouvrez le dos de votre appareil photo. Retirez l'objectif s'il est amovible. 
- Placez le capteur à l’arrière de l’appareil photo, à la place de la pellicule, le phototransistor faisant face à l'obturateur de l'appareil photo. Pour les appareils moyen format, utilisez l’adaptateur fournit. Veillez à centrer le capteur, et maintenez-le à l’aide d’un élastique ou de tout autre dispositif.  
- Placez le boitier en face de votre appareil photo, en le rehaussant éventuellement, afin que la LED d’illumination de l’appareil soit bien en face du capteur, **à une distance comprise entre 3 et 6 cm**. La LED du Baby Shutter Tester a un cône d’éclairage de 20°. Il est nécessaire pour réaliser les mesures que le capteur soit situé dans ce cône d’éclairage.  
- Allumez le baby Shutter Tester. Le boitier affiche "Ready" et la LED d'éclairage est allumée
- Pour vous assurer que le boitier du Baby Shutter Tester et son capteur sont bien positionnés, utilisez le mode Test (voir chapitre suivant)
- Sélectionnez la vitesse que vous voulez mesurer sur votre appareil photo
- Déclenchez l’obturateur. Durant la phase d'ouverture de l'obturateur, le Baby Shutter Tester affiche un soleil pour indiquer qu'il détecte de la lumière. Cette phase peut être très brève, en fonction de la vitesse choisie sur l'appareil photo. 
- Une fois l'obturateur refermé, la valeur de vitesse mesurée est affichée sur l'écran
- Comparez la valeur mesurée avec la valeur choisie sur le sélecteur de vitesse de votre appareil photo
- Pour effectuer une nouvelle mesure, appuyez sur le bouton de réinitialisation.

Le Baby Shutter Tester peut effectuer des mesures allant de plusieurs secondes au 4000e de seconde avec une fiabilité supérieure à 1 dixième de diaphragme. Pour une précision encore supérieure, permettant des mesures fiables au 8000e de seconde, utilisez la fonction d'autocalibration (voir chapitre suivant).

# Les différents modes de fonctionnement 
Le mode de fonctionnement initial du Baby Shutter Tester, est le mode "Mesure", avec lequel on effectue les mesures de vitesse.  
Mais l'appareil possède également d'autres modes de fonctionnement, qui permettent de facilitent le positionnement, d'afficher des informations ou de réaliser l'autocalibration de l'appareil. Un appui long ou court sur le bouton de l'appareil permet de naviguer d'un mode à l'autre.  

![Modes de fonctionnement](Statediagram.svg)  
Figure 1 : Modes de fonctionnement et transitions d'un mode à l'autre  

## Mode Mesure  
Ce mode permet d'effectuer les mesures de vitesse de votre appareil photo.  
Lorsque la mesure est effectuée dans les conditions nominales (objectif retiré, capteur perpendiculaire à la LED d'éclairage, distance LED - capteur comprise entre 3 et 6 cm), le réglage d'usine permet une précision de mesure de l'ordre de 25 microsecondes, soit un dixième de diaphragme au 4000e de seconde.  
Si les conditions de mesure s'éloignent des conditions nominales, et pour une précision encore supérieure, utilisez la capacité d'autocalibration de l'appareil (voir plus loin).  

## Mode Test

Dans ce mode, l'appareil n'effectue pas de mesure, mais garde la LED d'éclairage allumée et affiche un soleil lorsque le capteur détecte de la lumière.  
Ce mode vous permet de positionner correctement le capteur à l'arrière de l'appareil photo, et la LED du boitier en face et à la bonne hauteur par rapport à celui-ci.  
Lorsque vous pensez avoir correctement positionné l'ensemble, sélectionnez une vitesse lente ou la pause B sur votre appareil photo et déclenchez. Si un soleil apparait sur le testeur, c'est que l'ensemble est correctement positionné.

## Mode Info

Dans ce mode, l'écran affiche des informations sur l'appareil, et notamment le numéro de version de son firmware.

## Mode autocalibration

Les phototransistors, tel que celui utilisé par le Baby Shutter Tester, n'ont pas une vitesse de détection instantanée de la lumière. Ils ont un temps de réaction qui dépend de différents facteurs et notamment de la quantité de lumière qui les touche. Ce temps de réaction n'a pas la même valeur à l'ouverture et à la fermeture.
Le Baby Shutter Tester est calibré en usine pour compenser ces différences de temps de réaction pour les conditions suivantes :
- Distance LED - capteur comprise entre 3 et 6 cm
- Capteur perpendiculaire à la LED
- Pas d'objectif monté sur l'appareil photo.  

Lorsque ces conditions ne peuvent être respectées, et également pour avoir une précision supérieure à la calibration d'usine, vous pouvez utiliser la capacité d'autocalibration de l'appareil. Cette capacité permet à l'appareil de déterminer une valeur de calibration correspondant à vos conditions de mesure particulières.

- Positionnez fermement votre appareil photo, le boitier et le capteur du Baby Shutter Tester, afin qu'ils ne bougent pas d'une mesure à l'autre.
- Sélectionnez une vitesse lente de votre appareil photo (1/30e ou plus lent)
- Sélectionnez le mode d'autocalibration, l'appareil affiche "Calibrate" et sa LED est allumée
- Déclenchez
- Si la calibration s'est bien déroulée (vitesse de l'obturateur suffisament lente, et atténuation modérée du faisceau lumineux), le testeur affiche brièvement "Autocalib. succeded" ainsi que la valeur de calibration calculée. Cette valeur est communément négative mais peut prendre aussi des valeurs supérieures à 0 lorsque l'atténuation du faisceau lumineux est importante.
  - Après ce bref affichage, l'appareil se positionne en mode de mesure de vitesse, avec la mention "Auto cal" sur l'écran d'affichage
  - Effectuez alors vos mesure de vitesse dans les mêmes conditions que votre calibration. La valeur de calibration sera utilisée dans le résultat affiché
  - La valeur de calibration est conservée jusqu'à ce que vous éteigniez votre appareil
- Si la calibration ne s'est pas bien déroulée (vitesse d'obturateur trop rapide, atténuation trop importante du flux lumineux), l'appareil affiche "Autocalib. failed" et vous permet de recommencer la calibration.


# Spécificité de mesure selon le type d’obturateur.

On distingue principalement deux types d’obturateur :  
- Les obturateurs centraux
- Les obturateurs plan focal (à rideaux)  

Le Shutter Speed Tester donne une indication de vitesse d’obturateur sur un mode tout ou rien, mesuré à l’emplacement du capteur. Ce fonctionnement très simple est suffisant pour couvrir la majorité du besoin de mesure, pour lequel l’exposition est le produit de la vitesse et de l’ouverture.  
Il existe toutefois certains cas où cette simple valeur n’est pas suffisante pour déterminer l’exposition.  
## Obturateur plan focal
L’obturateur plan focal met en œuvre deux rideaux qui se déplacent successivement, dans le même sens. L’ouverture de l’un est suivie par la fermeture de l’autre. Si les deux rideaux se déplacent à la même vitesse sur toute la surface, l’exposition est uniforme et est donnée par la mesure du Shutter Speed Tester.  
Si les deux rideaux se déplacent à des vitesses différentes, cela donne des différences d’exposition selon les parties de la photo. Pour détecter un tel phénomène, positionnez le capteur à différentes positions à l’arrière de l’appareil photo pour faire vos mesures et vérifiez que les valeurs de mesures sont identiques quel que soit l’emplacement du capteur.  
Notez que le Baby Shutter Tester ne peut pas mesurer la vitesse de déplacement des rideaux.
## Obturateur central
L'obturateur central a pour caractéristique de fonctionner en trois phases : l'ouverture, la pleine ouverture, et la fermeture.  
Lorsque la pleine ouverture dure longtemps par rapport aux phases d'ouverture et de fermeture, tout va bien, la vitesse mesurée correspond à l'exposition qu'aura la pellicule. 
Lorsque ce n'est plus le cas (pour les très hautes vitesses, mais également si la vitesse de déplacement des lamelles de l'obturateur est trop lente), vous pouvez avoir un écart entre la vitesse mesurée et l'exposition effective qu'aura la pellicule, puisque la phase intermédiaire pendant laquelle l'obturateur n'est ni complètement ouvert ni complètement fermé est importante.  
Il existe une façon d'estimer le phénomène : Si vous placez le capteur au plus proche de l'obturateur (coté objectif, donc), vous pouvez faire des mesures au centre et des mesures en périphérie. La différence de temps mesuré vous donnera le temps mis par les lamelles pour s'ouvrir et se fermer.

# Contact

Pour toute information supplémentaire ou toute question que vous pourriez avoir sur le Baby Shutter Tester, vous pouvez vous référer aux liens suivants :  

http://github.com/sebastienroy/shutter_speed_tester  
mailto:photographyelectronics@gmail.com

