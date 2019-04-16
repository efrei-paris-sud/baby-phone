Idée numéro 1

But de l’application :
Encourager les personnes à pratiquer une activité sportive régulière. Les accompagner dans leur exercice physique. Leur donner un suivi de leur activité. (Niveau d’intensité de l’effort, Taux d’humidité, Vitesse de déplacement, chronomètre, alarme couplée avec un bracelet connecté et horloge). Distraire l’athlète pendant son effort (Possibilité de voir des images marrantes en rapport avec son activité et l’appareil sera en mesure de communiquer avec les utilisateurs en lui adressant des messages « Trash ». Le dispositif connecté bénéficiera d’un écran qui affichera les messages et chronométra la durée de l’exercice). D’autre part, l’utilisateur pourra accéder sur l’application à des conseils diététiques. words

Cible :
Adolescent de 15/28ans et retraité de 40/65 ans

Fonctionnalitées du bracelet connecté :
Alarme (Haut-parleur)
Affichage de messages textuel (Ecran LCD)
Chronométrage de la durée de l’effort
Mesure du taux d’humidité (capteur)
Mesure de la vitesse de l’utilisateur (Capteur) Fonctionnalités de l’application :
Couplage des données mesuré par le bracelet
Affichage du suivi sportif du coureur (Niveau d’intensité de l’effort, taux d’humidité, vitesse de déplacement, chronomètre, alarme)
Affichage des conseils utilisateur
Affichage de messages personnalisés à l’attention des sportifs
Etape d’utilisation de l’application :
L’utilisateur ouvre l’appli : On lui demande de jumeler son téléphone au bracelet et s’il souhaite se connecter.
S’il ne sait pas connecter, il doit rentrer dans un formulaire : L’âge, le poids, le nom et username, le type d’exercice pratiqué (course à pied etc.)
L’utilisateur peut accéder à sa page personnelle, démarrer l’activité ou lire des conseils diététiques
Composants demandés

Capteur de pouls et fréquence cardiaque. Reference: https://www.amazon.fr/HALJIA-fréquence-Cardiaque-Pulsesensor-Raspberry/dp/B01CBGH4N6
-Micro controleur esp32
-Haut-parleur
-plaque d'Expérimentation Vierge Perforée
-Ecran LCD - Rétroéclairé pour bracelet connecte
-Micro-capteur d'humidité
	
Idée numéro 2

But de l’application :
Grace à des capteurs d’intensités sonores l’application détermine lorsque le bébé réclame ses parents. L’application envoie une notification à différents objets connectés au baby phone (smartwatch, smartphone, enceinte co, …). L’application est paramétrable pour envoyer les notifications à partir d’un certain niveau de décibel et temps. Depuis notre smartphone on peut lancer une musique, allumer une lampe (…) le temps d’arriver dans la chambre. Le dispositif sera aussi complet à un lecteur audio pour qu'il lance automatiquement une musique pour appaiser le bebe.

Composants demandés
	Capteur de sonore
	Micro controleur esp32 (X2)
	Haut-parleur
	Plaque d'Expérimentation Vierge Perforée
	Ecran LCD - Rétroéclairé
Menbres du groupes et fonctions
Responsable design : Tristan le bras - tristan.le.bras@efrei.net
Responsable code : Alexandre dequeker- alexandre.dequeker@efrei.net
Responsable Hardware : Alexandre Fieux - alexandre.fieux@efrei.net
Chef de projet : Anthony Morali – anthony.morali@efrei.net




L'objectif de Bébé Tranquille est de fournir un dispositif technique de couplage asservi entre 
    les parents et leur enfant nouveau-né, à titre expérimental seulement, afin de faciliter la vie des parents. Ce système permet d'une part
    d'apporter un certain confort au bébé (bercement, musique, lumière douce) et en quelque sorte de satisfaire ses pleurs, et par suite aux 
    parents qui sont informés à distance via un système de communication hertzien. Le bébé est " d'emblée considéré comme un être humain qui 
    émet des signaux et attend des réponses, donc un partenaire avec lequel on peut communiquer (*)". Notre ambition est moins de répondre à 
    des besoins identifiés (autonomie des parents par rapport à l'enfant etc.) que d'envisager les conséquences possibles sur le développement
    cognitif des parents comme de l'enfant (manifestation du désir d'être tenu dans les bras de la mère, du père...). Nous avons fait, tout au
    long du développement de ce projet (spéculatif), l'hypothèse forte que ce dispositif " tranquilliserait " 
    et l'enfant, et les parents. L'enjeu de ce document sera pour partie de discuter de ce présupposé.
    
    
 Le dispositif est composé d'un berceau présenté ci-dessous dans lequel est le bébé. Il est équipé d'un certains nombre de capteurs :
capteur de bruit b (bruit: bébé silencieux, bébé éveillé et murmurant, bébé en pleurs)
capteur de présence d'un adulte p (interrupteur manipulé par la personne appelée par le bébé)
      Le bruit a été retenu comme paramètre principal donnant des informations sur l'état du bébé, aux parents. D'autres paramètres 
      tels que la sudation, la fréquence des battements du coeur, la posture, la température sont pertinents, mais beaucoup plus délicats
      à mesurer dans l'objectif de confort voulu. Par exemple, un capteur de température (pastille, etc.) impliquerait un appareillage 
      gênant le bébé dans ses mouvements (fils électriques...). Le bruit étant capté à distance, il ne présente aucune contrainte, 
      c'est pourquoi nous avons tout misé (et c'est aussi une limite de notre système) sur cette seule variable et plus exactement sur 
      son intensité. Pour la variable bruit, nous aurions effectivement pu étudier un autre paramètre que l'intensité comme la fréquence
      car il semblerait qu'elle puisse elle aussi nous apporter des informations sur l'état du bébé. Ainsi, nous pouvons constater qu'un
      cri commençant graduellement et devenant rythmique et répétitif correspond bien souvent à un cri de faim, qu'un bruit débutant 
      brusquement, arythmique, avec de longues pauses où la respiration est bloquée correspond fréquemment à un cri de douleur. 
      Nous pouvons aussi remarquer que les cris de colère sont généralement particulièrement puissants et prolongés. 
      Ces caractéristiques pouvant différer d'un bébé à un autre, nous avons préféré nous contenter du paramètre intensité, présentant 
      moins d'ambiguïté.

  Le capteur de présence est un interrupteur qui permet à la personne voulant intervenir auprès du bébé de suspendre le 
  fonctionnement du système. Cela permet à la mère ou au père d'interrompre la musique, les bercements éventuels etc., pour être 
  complètement avec le bébé. Lorsque le parent est là, le dispositif n'a plus de raison d'être. Le capteur P ne sert qu'aux parents.

  Le capteur de bruit, en fonction de l'intensité et de la durée du bruit, déclenche six tâches qui correspondent à des réactions 
  spécifiques du bébé :
      
bercer doucement (fréquence de 1Hz) quand le bébé murmure et commence à s'agiter (N1<N<N2)
bercer plus fort (fréquence de 1.5Hz) quand le bébé pleure ou crie (N>N2)
diffuser la bande musicale quand le bébé pleure ou crie (N>N2)
diffuser la voix quand le bébé pleure ou crie (N>N2) pendant un temps T1
allumer la veilleuse quand le bébé pleure ou crie (N>N2) pendant T1
appeler quand le bébé ne cesse de pleurer ou crier (N>N2) pendant 2xT1
      On voit déjà qu'avec un seul capteur et deux niveaux d'intensité, les tâches à effectuer peuvent être multiples. La logique qui 
      gouverne ce système est la suivante : plus le bébé fait de bruit (au niveau de l'intensité, et de la durée), plus on va agir sur 
      lui. On peut interpréter cette action comme consistant à occuper le bébé, pour qu'il ne pense plus à ce dont il 
      a besoin (manger, être changé, entendre sa mère, sentir sa mère). Quand le bébé ne cesse de pleurer ou crier 
      (étape 6 sur le graphe de coordination des tâches), on " sollicite " au maximum ses systèmes sensoriels :
Le bercement : on intervient sur l'équilibration du bébé, sur son système vestibulaire efficace très tôt en raison de la situation 
fœtale que le nouveau-né a vécue.

La diffusion de la musique et d'une voix : on intervient sur le sens de l'ouïe du nourrisson. Le système auditif du nourrisson 
est fonctionnel bien avant la naissance, le bébé a donc pu être imprégné auditivement par une infinité de bruits et ainsi, le 
nouveau-né ne reste pas insensible aux bruits de l'environnement, même si sa tâche est plus complexe dans la mesure où les sons ne 
traversent non plus un liquide mais un espace aérien. Pour ce qui concerne la voix, notre choix pour celle de la mère s'est fait très 
facilement après avoir entendu une anecdote : les bébés semblent éprouver un certain plaisir à écouter la voix de leur mère et tout 
particulièrement lorsque celle-ci leur raconte une histoire. Les bébés, très exigeants avouons le, préféreraient même une histoire que 
leur mère leur aurait racontée avant leur naissance plutôt qu'une nouvelle…Plus sérieusement, l'identification et la reconnaissance 
précoce de la voix maternelle est liée à l'expérience auditive intra-utérine du nouveau-né.

L'allumage d'une veilleuse : on intervient sur le sens de la vue. La préférence pour les couleurs est propre à chaque individu, 
toutefois, la mesure des temps de fixation relatifs fait apparaître des préférences précoces pour certaines couleurs pendant les 
semaines qui suivent la naissance. Ainsi, le bleu, le vert et le rouge sont regardés plus longtemps que le jaune et le noir. 
Pour notre appareil, il conviendrait donc d'utiliser une veilleuse diffusant une l'une de ces couleurs appréciées.
Nous intervenons donc sur les sens de ''l'équilibre'', de l'ouïe et de la vue. Les sens humains, tels que le tact ou 
l'olfaction-gustation n'ont pas retenu notre attention (ils pourraient être éventuellement incorporés avec des systèmes de capteurs 
spécifiques).

La logique de sollicitation ou d'occupation semble être en totale contradiction avec l'objectif qui est de tranquilliser le bébé. 
Il est probable en effet que cette stratégie, qui en fin de compte tranquillise les parents, provoque une " saturation " des 
sollicitations du bébé.

 D'un autre côté, il est probable que les sollicitations satisfassent aux désirs de l'enfant. On peut imaginer que le bébé crie 
 uniquement pour être bercé par le système, qu'il crie longtemps pour voir la veilleuse s'allumer ou entendre de la musique. Dans ce cas, bébé est effectivement tranquille.

 Notre hypothèse dans ce travail est que la tranquillité du bébé relève d'un apprentissage (cognitif) entre le bébé, la mère et 
 le dispositif technique qui les couple. Nous y reviendrons.

 La seconde partie du dispositif tient informés les parents de l'état de l'enfant par un système de communication hertzien via un 
  bracelet, comme présenté ci-dessous. Ce bracelet comporte 6 voyants qui correspondent aux 6 états du bébé :
      
Silence
Bruit léger
Pleurs
Pleurs pendant un temps inférieur à T
Pleurs pendant un temps supérieur à T et inférieur à 2xT
Appel (pleurs depuis plus que 2xT)



****************Conclusion *********************

Bébé Tranquille est un dispositif technique qui vise à apporter aux parents une aide pour surveiller leur jeune progéniture de telle 
façon qu'il leur soit permis de ne pas être constamment à l'affût des sons émis par ce nouvel être humain. Bébé Tranquille est un 
système de télésurveillance visuelle pour les parents qui sont informés en temps réel sur un bracelet-montre de l'état dans lequel 
le bébé est susceptible de se trouver.

 Le bébé pleure un rien, le système le berce aussitôt pour le calmer et les parents en sont aussitôt informés. Pleure-t-il plus 
 longtemps que le système, véritable nounou automatisée, lui diffuse une petite lumière douce, un fond de musique ou une contine 
 narrée par sa mère, tout en le berçant et en en informant ses parents. Pleure-t-il encore malgré tout que le bracelet-montre 
 clignote (et bipe), ce qui indique aux parents qu'il faut aller voir ce qu'il se passe. Les parents arrivent, stoppent le système 
 et nourrissent, changent, ou consolent le bébé.

  Bébé Tranquille, dans son projet initial, tente de proposer une aide aux parents, sans les dispenser de s'occuper de leur enfant, 
  en leur proposant un système léger, portable, efficace de surveillance visuelle par états, au lieu de la surveillance 
  traditionnelle auditive qui contraint les parents (ou un tiers) à constamment prêter l'oreille, et donc à ne pas pouvoir se 
  livrer à certaines activités (jardiner à l'extérieur, voir un match de foot dans le salon, prendre un bain, etc.) que celles-ci 
  soient cognitives ou non.

  En revanche si le système apporte un confort notoire, il ne dispense pas les parents de leur devoir de surveillance : il 
  substitue à la surveillance auditive directe (en présence) une télésurveillance visuelle commode. Cette médiatisation technique 
  entre parents et enfant est non neutre sur le plan développemental du comportement à court et long terme de l'enfant comme des 
  parents, avec des incidences cognitives certaines.

  Cette non neutralité de la technique dans l'évolution de l'enfant conduit à une ingénierie de la responsabilité, c'est-à-dire que 
  Bébé Tranquille ne saurait donner lieu à un développement sans expérimentations pour observer les modulations du couplage 
  affectif qui s'instaure entre parents et enfant, et ce sur un long terme. Il est nécessaire de considérer ce dispositif comme 
  relevant du domaine de la santé, et par conséquent, des phases de test sur de longues périodes sont requises avant de laisser 
  porter proclamer l'enthousiasme des investisseurs potentiels.
