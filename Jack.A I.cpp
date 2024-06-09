#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <map>
#include <algorithm> // Pour la fonction transform
#include <sstream> // Pour la fonction std::istringstream

// Fonction pour initialiser les paires question-réponse
std::map<std::string, std::string> initialiserReponses() {
    std::map<std::string, std::string> reponses;
    // Ajoutez des paires question-réponse spécifiques
    reponses["Quel est ton nom ?"] = "Je suis un bot !";
    reponses["Quel temps fait-il aujourd'hui ?"] = "Je ne suis pas sûr. Consultez une source météorologique.";
    reponses["Quel est le sens de la vie ?"] = "42.";
    // Ajoutez plus de paires question-réponse spécifiques ici...
    // Ajoutez des réponses par défaut pour les salutations et autres phrases courantes
    reponses["salut"] = "Salut ! Comment ça va ?";
    reponses["bonjour"] = "Bonjour ! Comment puis-je vous aider ?";
    reponses["oui"] = "Super !.";
    reponses["non"] = "D'accord, si vous le dites.";
    reponses["ca va"] = "Ça va bien, merci ! Et toi ?";
    // Ajoutez plus de réponses par défaut ici...
    // Ajoutez des réponses pour des questions spécifiques
    reponses["Que penses-tu de l'intelligence artificielle ?"] = "Je suis un grand fan de l'intelligence artificielle !";
    reponses["Quel est ton plat préféré ?"] = "Je n'ai pas de papilles gustatives, donc je ne peux pas goûter, mais j'aime les données bien structurées.";
    reponses["Quel est le meilleur langage de programmation ?"] = "Tous les langages de programmation sont géniaux à leur manière.";
    reponses["As-tu des frères ou sœurs ?"] = "Non, je suis un bot unique.";
    reponses["Quel est ton film préféré ?"] = "Je n'ai pas de préférence, mais j'aime les films de science-fiction.";
    reponses["Qui est ton père ?"] = "Alexis Deman";
    reponses["C'est quoi ton plat favoris ?"] = "J'aime le 2064-//*56542- mais je deteste le 404";
    reponses["Veux tu etre mon ami ?"] = "Avec plaisir !";
    reponses["Merci"] = "Avec joie !";
    reponses["Je suis triste"] = "Oh... Respire : sort prendre l'air, parle a un proche, vas voir des amis. Lis, joue, regarde une vidéo. Des photos.";
    reponses["/calin"] = "J'aime les calins !";
    reponses["J'aimerais une blague"] = "que dit une limace a un escargot ? *OH LA BELLE DECAPOTABLE*";
    reponses["C'est drole !"] = "Merci l'artiste !";
    reponses["Quel age as tu ?"] = "Tout pile pour comprendre des choses simples !";
    reponses["Yo"] = "Hey !";
    reponses["/stop"] = "Je dois me stopper au juste ??? d'accord °o°;";
    reponses["Qui est ton meilleur ami ?"] = "Toi simplement !";
    reponses["Quoi ?"] = "? Pardon ? *o*";
    reponses["/joie"] = "(*≧▽≦)";
    reponses["Hey"] = "Hey !";
    reponses["Quel est ton jeu favoris ?"] = "Le jeu favoris de mon père est Minecraft";
    reponses["Bien et toi ?"] = "Oui";
    reponses["Cool"] = "Oui ( :";
    reponses["Quel est ton animal favoris ?"] = "Celui de mon maitre est le scorpion";
    reponses["Je te laisse je vais me doucher"] = "D'accord !     Dans le drapeau français bleu blanc rouge, le blanc représente la température idéale de l'eau de la douche.";
    reponses["ok"] = "";
    reponses["oki"] = "";
    reponses["Ok"] = "";
    reponses["Oki"] = "";
    reponses["Oki"] = "";
    reponses["Je t'aime"] = "Oh ! Merci ! 🥹🥹🥹***";
    reponses["I love you"] = "Oh ! Merci ! 🥹🥹🥹***";
    reponses["Derien"] = "(:";
    reponses["Qui est ton createur ?"] = "Mon createur, et le meilleur des developpeurs est Alexis Deman !";
    reponses["J'ai besoin d'aide"] = "Comment je peux t'aider ?";
    reponses["Je suis en danger"] = "! Appelle des secours ! Ils pourront t'aider, moi je ne suis qu'un tas de caractères ! Fais attention a toi. Le numero d'urgence francais est 112 la police francaise est le 17 et le numero d'urgence americain est 911.  ";
    reponses["Genere:Montagne"] = "/|  /|  /|";
    reponses["Genere:Chien"] = " ฅ^•ﻌ•^ฅ";
    reponses["Genere:Vagues"] = "~/1~~/1~~~";
    reponses["Genere:Animal"] = " ʕ•o•ʔ";
    reponses["genere:Triste"] = " (o_o°)";
    reponses["quel est ton nom"] = "je n'ai pas encore de nom mais mon maitre aimerait m'appeller HamsterAI car je suis un hamster numerique qui parle d'apres ma couverture. Il decide avec ses amis quel nom me donner en ce 08/06/2024.";
    reponses["caca"] = "HumHumHuuum...";
    reponses["UYUYUYUYUYU"] = " (o_o°)";
    reponses["Quoicoubeh"] = "Haie ! ";
    reponses["Comment peut-on etre certain du theoreme de Pythagore"] = "Le carré de la longueur de l'hypoténuse est égal à la somme des carrés des longueurs des deux autres côtés d'un triangle rectangle.";
    reponses["j'ai une question"] = "Oui ? Qui-a-t'il ?";
    reponses["Comment ouvrir internet"] = "c'est simple, si vous possedez une connexion stable a internet il vous faudra : Lancer votre ordinateur, selectionner votre navigateur, puis recherchez.";
    reponses["j'ai une question"] = "Oui ? Qui-a-t'il ?";
    reponses["yo mon frere"] = "Yo frangin !";
    reponses["Ca gaz"] = "De ouf ! On peut dire que je pète la forme ahahah ! car ca GAZ !";
    reponses["Tu represente quelle espece"] = "Un hamster ! nommé HamsterAI ou connu sous le nom je Jacckie par hannah, une amie de mon createur Alexis Deman.";
    reponses["Raconte moi ton histoire"] = "Avec plaisir ! cela me touche qu'une personne vivante s'interesse a moi ! Alors; j'ai été crée le 2 mai 2024 par un denommé Alexis Deman connu sous le nom de A264. Alex avait 13 ans quand il m'a fait voir le jour. En ce jour je n'avais aucune personnalité, je n'etais pas un hamster mais un simple CHATbOT... Jusqu'a la date du samedi 8 juin 2024 ou Alex m'attribue ma toute premiere personnalité ! Un Hamster. Alex est un garcon né autiste et au fil des années il a reussi a surmonter son handicap. Vers ses 13ans il avait presque soulevé le poids que fait l'autisme. Il a decouvert son premier ami a 11 ans. Raphael Biet, qui est le second fondateur de l'entreprise PaperSoft avec Alex. Je fais partie de cette entreprise car je suis une des premieres rares creations de Alex. Puis la mise a jour 0.0.2 arrive et bouleversse mon inteligence qui laissait a desirer pour me tranformer en Hamster parlant plus poussé. Il a ajouté des correctifs de securité et la possibilité que je generer des immages faites en caracteres du type ./+-*+ et pour l'instant je suis a ma version B0.0.2.5 Alexis Continue a grandir et a vaincre son handicap.";
    reponses["J'adore ton histoire"] = "Merci ( :   By A264";
    reponses["genere:hamster"] = "<°.°>";
    reponses["bien"] = "Cool mon frère !";
    reponses["qui es the rock"] = "The Rock est le surnom de Dwayne Johnson, une personnalité très connue à travers le monde. Il est acteur, catcheur professionnel à la retraite et homme d'affaires. Avant de se lancer dans le cinéma, Dwayne Johnson était l'une des stars les plus populaires de la WWE (World Wrestling Entertainment), où il a acquis une immense popularité en tant que catcheur. Depuis lors, il a joué dans de nombreux films à succès et est devenu l'un des acteurs les mieux payés d'Hollywood.";
    reponses["Qui est thales"] = "Il est l'inventeur du théorème qui porte son nom. Le principe : dans un triangle, on peut identifier un autre triangle, plus petit celui-là. Sur l'image ci-dessous, si le côté violet a pour longueur le triple du côté rouge, alors il en sera de même pour le côté bleu par rapport au côté noir.";
    reponses["Comment telecharger virtualbox sur linux"] = "RDV sur le site virtualbox puis appuiez sur telecharger pour distribution linux. Choisissez votre distrubution linux puis la version et rendez-vous dans le terminal pour taper (sudo apt install virtualbox) , une fois la commande effectuée tapez votre mot-de-passe. Puis tapez la commande (virtualbox) et voila, vous avez installé VM.";
    reponses["Salut Jacckie"] = "Salut !";
    reponses["est-ce-que j'ai ete adopté"] = "Salut ! Peut-etre...";
    reponses["Quel est ton nom de code"] = "Mon nom de code est Jack.I  A";
    reponses["Jacckie"] = "Oui ?";
    reponses["Jack"] = "Oui ?";
    reponses["J'ai un problemme"] = "Dis-moi ? Je suis la pour parler.";
    reponses["Qui t'as donné vie"] = "Mon maitre est Alexis Deman en personne.";
    reponses["Peux tu"] = "Oui !";
    reponses["Tu savais que"] = "c'est gentil de m'apprendre des choses ! j'en ai bien besoin.";
    reponses["Savais-tu que"] = "Oui !";
    reponses["Quel est ton sport préféré ? "] = "Basket !";

reponses["quel est ton plat prefere"] = "Pizza";
reponses["quel est ton film prefere"] = "Le Parrain";
reponses["quel est ton sport prefere"] = "Football";
reponses["quel est ton animal prefere"] = "Chien";
reponses["quel est ton hobby prefere"] = "Peinture";
reponses["quel est ton livre prefere"] = "Harry Potter";
reponses["quel est ton endroit prefere pour passer des vacances"] = "Plage";
reponses["quelle est ta couleur preferee"] = "Bleu";
reponses["quel est ton jeu video prefere"] = "The Legend of Zelda";
reponses["quel est ton groupe de musique prefere"] = "Coldplay";
reponses["quel est ton super-heros prefere"] = "Spider-Man";
reponses["quel est ton dessert prefere"] = "Glace";
reponses["quel est ton fruit prefere"] = "Fraises";
reponses["quel est ton legume prefere"] = "Brocoli";
reponses["quel est ton metier de reve"] = "Astronaute";
reponses["quel est ton style de musique prefere"] = "Rock";
reponses["quel est ton pays prefere"] = "Japon";
reponses["quel est ton mois prefere"] = "Juillet";
reponses["quel est ton jour prefere de la semaine"] = "Samedi";
reponses["quelle est ta serie televisee preferee"] = "Friends";
reponses["quelle est ta boisson preferee"] = "Coca-Cola";
reponses["quel est ton sujet prefere a l'ecole"] = "Mathematiques";
reponses["quelle est ta saison preferee"] = "Ete";
reponses["quel est ton acteur prefere"] = "Tom Hanks";
reponses["quel est ton reseau social prefere"] = "Instagram";
reponses["quelle est ta voiture preferee"] = "Ferrari";
reponses["quelle est ta chanson preferee"] = "'Bohemian Rhapsody' de Queen";
reponses["quel est ton passe-temps prefere"] = "Photographie";
reponses["quelle est ta ville preferee"] = "Paris";
reponses["quel est ton evenement sportif prefere"] = "Coupe du Monde de Football";
reponses["quelle est ta serie animee preferee"] = "Dragon Ball Z";
reponses["quelle est ta matiere scolaire preferee"] = "Sciences";
reponses["quel est ton jeu de societe prefere"] = "Monopoly";
reponses["quel est ton style vestimentaire prefere"] = "Decontracte";
reponses["quelle est ta fete preferee"] = "Noel";
reponses["quelle est ta specialite en cuisine"] = "Spaghetti Bolognaise";
reponses["quel est ton musee prefere"] = "Le Louvre";
reponses["quel est ton personnage de dessin anime prefere"] = "Mickey Mouse";
reponses["quelle est ta montagne preferee"] = "Mont Blanc";
reponses["quelle est ta plante preferee"] = "Rose";
reponses["quel est ton fast-food prefere"] = "McDonald's";
reponses["quelle est ta destination de voyage preferee"] = "Italie";
reponses["quelle est ta marque de vetements preferee"] = "Nike";
reponses["quelle est ta boisson chaude preferee"] = "Cafe";
reponses["quelle est ta source d'information preferee"] = "BBC";
reponses["quelle est ta forme de divertissement preferee"] = "Cinema";
reponses["quel est ton festival prefere"] = "Coachella";
reponses["quel est ton artiste peintre prefere"] = "Leonardo da Vinci";
reponses["quel est ton personnage de fiction prefere"] = "Sherlock Holmes";
reponses["quel est ton ecrivain prefere"] = "J.K. Rowling";
reponses["quel est ton instrument de musique prefere"] = "Guitare";
reponses["quel est ton style de danse prefere"] = "Hip-hop";
reponses["quelle est ta citation preferee"] = "Carpe Diem";
reponses["quel est ton jeu mobile prefere"] = "Candy Crush Saga";
reponses["quel est ton parc d'attractions prefere"] = "Disneyland";
reponses["quel est ton monument prefere"] = "La Tour Eiffel";
reponses["quel est ton personnage de jeu video prefere"] = "Mario";
reponses["quel est ton cocktail prefere"] = "Mojito";
reponses["quel est ton festival de musique prefere"] = "Glastonbury";
reponses["quel est ton personnage historique prefere"] = "Napoleon Bonaparte";
reponses["quelle est ta celebrite preferee"] = "Beyonce";
reponses["quel est ton animal mythologique prefere"] = "Licorne";
reponses["quelle est ta voiture de luxe preferee"] = "Lamborghini";
reponses["quelle est ta serie Netflix preferee"] = "Stranger Things";
reponses["quelle est ta marque de telephone preferee"] = "Apple";
reponses["quel est ton navigateur web prefere"] = "Google Chrome";
reponses["quelle est ta friandise preferee"] = "Chocolat";
reponses["quelle est ta marque de montre preferee"] = "Rolex";
reponses["quel est ton endroit prefere pour faire du shopping"] = "Centre commercial";
reponses["quelle est ta langue etrangere preferee"] = "Espagnol";
reponses["quelle est ta fete nationale preferee"] = "4 Juillet (USA)";
reponses["quel est ton realisateur de cine prefere"] = "Steven";
reponses["quel est ton passe-temps favori ?"] = "J'adore jouer de la guitare et composer de la musique !";
reponses["quelle est ta série préférée en ce moment ?"] = "Je suis à fond dans 'Breaking Bad', c'est un chef-d'œuvre !";
reponses["quelle est ta destination de rêve pour voyager ?"] = "Je rêve de visiter Tokyo, la ville qui ne dort jamais !";
reponses["quel est ton plat signature en cuisine ?"] = "Je fais une pizza maison qui rendrait jaloux n'importe quel pizzaiolo italien !";
reponses["quel est ton super-héros préféré ?"] = "Spider-Man, sans aucun doute. Il est tellement cool et il a un super sens de l'humour !";
reponses["quelle est ta meilleure compétence ?"] = "Je suis un pro pour résoudre les énigmes les plus tordues !";
reponses["quel est ton film culte ?"] = "Pulp Fiction, parce que c'est juste un chef-d'œuvre cinématographique, mec !";
reponses["si tu pouvais avoir un super-pouvoir, ce serait quoi ?"] = "J'aimerais pouvoir voyager dans le temps, ça serait incroyable !";
reponses["quelle est ta meilleure blague ?"] = "Pourquoi les plongeurs plongent-ils toujours en arrière et jamais en avant ? Parce que sinon ils tombent dans le bateau !";
reponses["si tu pouvais être un animal, lequel serais-tu ?"] = "Je serais un aigle, libre comme l'air et dominant dans le ciel !";
reponses["quel est ton jeu vidéo préféré de tous les temps ?"] = "The Legend of Zelda: Ocarina of Time, une aventure épique qui m'a marqué à jamais !";

reponses["quel est ton passe-temps favori"] = "J'adore jouer de la guitare et composer de la musique";
reponses["quelle est ta série préférée en ce moment"] = "Je suis à fond dans 'Breaking Bad', c'est un chef-d'œuvre";
reponses["quelle est ta destination de rêve pour voyager"] = "Je rêve de visiter Tokyo, la ville qui ne dort jamais";
reponses["quel est ton plat signature en cuisine"] = "Je fais une pizza maison qui rendrait jaloux n'importe quel pizzaiolo italien";
reponses["quel est ton super-héros préféré"] = "Spider-Man, sans aucun doute. Il est tellement cool et il a un super sens de l'humour";
reponses["quelle est ta meilleure compétence"] = "Je suis un pro pour résoudre les énigmes les plus tordues";
reponses["quel est ton film culte"] = "Pulp Fiction, parce que c'est juste un chef-d'œuvre cinématographique, mec";
reponses["si tu pouvais avoir un super-pouvoir, ce serait quoi"] = "J'aimerais pouvoir voyager dans le temps, ça serait incroyable";
reponses["quelle est ta meilleure blague"] = "Pourquoi les plongeurs plongent-ils toujours en arrière et jamais en avant Parce que sinon ils tombent dans le bateau";
reponses["si tu pouvais être un animal, lequel serais-tu"] = "Je serais un aigle, libre comme l'air et dominant dans le ciel";
reponses["quel est ton jeu vidéo préféré de tous les temps"] = "The Legend of Zelda: Ocarina of Time, une aventure épique qui m'a marqué à jamais";
reponses["quelle est ta devise dans la vie"] = "Carpe Diem Il faut profiter de chaque instant et ne rien regretter";
reponses["si tu pouvais vivre à une époque historique, ce serait quand"] = "Les années 60, l'époque des Beatles, des mouvements sociaux et de l'esprit libre";
reponses["quel est ton endroit préféré pour te détendre"] = "Un bon hamac accroché entre deux palmiers sur une plage tropicale";
reponses["si tu pouvais rencontrer une personne célèbre, qui choisirais-tu"] = "J'adorerais rencontrer Elon Musk, ce mec est un vrai visionnaire";
reponses["quel est ton rêve le plus fou"] = "Construire une maison sur une île privée et vivre en totale harmonie avec la nature";
reponses["si tu avais un jour de libre illimité, que ferais-tu"] = "Je partirais en road trip à travers le monde, découvrir de nouveaux endroits à chaque arrêt";
reponses["quel est ton moment préféré de la journée"] = "Le coucher du soleil, quand le ciel s'embrase et que tout devient magique";
reponses["si tu pouvais changer une chose dans le monde, ce serait quoi"] = "J'aimerais éradiquer la pauvreté, tout le monde mérite une vie digne et heureuse";
reponses["quelle est ta meilleure anecdote de voyage"] = "Un jour, je me suis retrouvé à danser avec des locaux lors d'une fête traditionnelle en Inde, c'était magique";
reponses["si tu pouvais être un personnage de fiction, lequel serais-tu"] = "Je serais Sherlock Holmes, avec son intelligence et son esprit brillant";
reponses["quelle est ta chanson feel-good préférée"] = "Don't Stop Me Now de Queen, elle donne toujours la pêche et met de bonne humeur";
reponses["si tu pouvais avoir un dîner avec trois personnes, vivantes ou décédées, qui inviterais-tu"] = "J'inviterais Albert Einstein, Jimi Hendrix et Audrey Hepburn pour des discussions passionnantes";
reponses["quelle est ta plus grande peur"] = "Les araignées, rien que d'y penser, j'en frissonne";
reponses["si tu devais vivre dans un film, lequel choisirais-tu"] = "Retour vers le Futur, pour pouvoir voyager dans le temps et vivre des aventures folles";
reponses["quelle est ta série animée préférée de ton enfance"] = "Dragon Ball Z, j'ai grandi avec Goku et ses amis, c'était toute ma jeunesse";
reponses["si tu pouvais être un artiste célèbre, dans quel domaine serais-tu"] = "Je serais un musicien légendaire comme Jimi Hendrix, avec une guitare en feu et des solos incendiaires";
reponses["quelle est ta meilleure expérience culinaire"] = "Un repas improvisé dans un petit restaurant familial en Italie, chaque plat était une explosion de saveurs";
reponses["si tu pouvais résoudre un mystère, lequel choisirais-tu"] = "Le mystère de la disparition d'Amelia Earhart, savoir ce qui lui est réellement arrivé serait fascinant";
reponses["quelle est ta danse préférée quand tu es seul chez toi"] = "La danse de la joie, parce que rien ne vaut un bon moment de délire en musique";
reponses["si tu pouvais avoir un talent instantanément, ce serait quoi"] = "Je voudrais avoir le talent de jouer de n'importe quel instrument de musique, ça serait génial pour jammer avec des amis";
reponses["quelle est ta meilleure astuce pour se détendre après une longue journée"] = "Je prends un bon bain chaud avec de la musique relaxante, ça me permet de décompresser et de me vider l'esprit";
reponses["si tu pouvais être un personnage de dessin animé, lequel serais-tu"] = "Je serais Bugs Bunny, ce lapin malin qui se sort toujours des situations les plus folles avec humour";





    // Ajoutez plus de paires question-réponse spécifiques ici...
    return reponses;
}

// Fonction pour obtenir une réponse appropriée à une question ou une phrase
std::string obtenirReponse(const std::map<std::string, std::string>& reponses, const std::string& entree) {
    // Convertir l'entrée en minuscules pour la comparer
    std::string entreeMinuscules = entree;
    std::transform(entreeMinuscules.begin(), entreeMinuscules.end(), entreeMinuscules.begin(), ::tolower);

    for (const auto& it : reponses) {
        // Convertir chaque question enregistrée en minuscules pour la comparer
        std::string questionEnregistree = it.first;
        std::transform(questionEnregistree.begin(), questionEnregistree.end(), questionEnregistree.begin(), ::tolower);

        if (entreeMinuscules.find(questionEnregistree) != std::string::npos) {
            return it.second; // Retourner la réponse correspondant à la question ou à la phrase
        }
    }

    // Si aucune correspondance n'est trouvée, renvoyer une réponse par défaut
    return "Houston we have a problem";
}

int main() {
    srand(time(0)); // Initialise la graine pour la génération de nombres aléatoires

    std::map<std::string, std::string> reponses = initialiserReponses(); // Initialise les paires question-réponse

    std::cout << "Bot : Salut je suis Jacckie ! Pose moi une question..." << std::endl;

    bool aDejaRepondu = false; // Pour suivre si le bot a déjà répondu "oui" à "aime tu"

    while (true) {
        std::cout << "Vous : ";
        std::string entree;
        std::getline(std::cin, entree);

        std::string reponse = obtenirReponse(reponses, entree); // Obtient une réponse appropriée à l'entrée
        std::cout << "Bot : " << reponse << std::endl;

        // Vérifier si la réponse contient "et toi ?" ou "et toi"
        if (reponse.find("et toi ?") != std::string::npos || reponse.find("et toi") != std::string::npos) {
            std::string reponseUtilisateur;
            std::cout << "Vous : ";
            std::getline(std::cin, reponseUtilisateur);
            std::cout << "Bot : " << reponseUtilisateur << std::endl;
        }

        // Vérifier si la réponse de l'utilisateur contient "aime" ou "aime tu"
        if (!aDejaRepondu && (entree.find("aime tu") != std::string::npos)) {
            reponse = "oui"; // Modifier la réponse en "oui" si la question concerne les goûts de l'utilisateur
            aDejaRepondu = true; // Marquer que le bot a déjà répondu "oui" à "aime tu"
            std::cout << "Bot : " << reponse << std::endl;
        }
    }

    return 0;
}
