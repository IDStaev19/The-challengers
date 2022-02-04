#include <iostream>
#include <conio.h>
#include <clocale>

#include "backend.h"
#include "frontend.h"
#include "LinkedList.h"
#include "LinkedListFunctions.h"

using namespace std;

Node* initializeDefaultUprisings()
{
	Node* headDefault = new Node("1040-1041", "Uprising of Peter Delyan", "Peter Delyan is considered the grandson of Tsar Samuel, so he was proclaimed King of Bulgaria. It erupts in Belgrade.It covers the whole of Macedonia, Thessaly and reaches Thebes.Peter Delyan was blinded and the uprising was suppressed by his cousin Alusian.");
	insertLastNode(&headDefault, "1072-1073", "Uprising of Georgi Voitech and Konstantin Bodin", "Leader - Georgi Voitech. It spread to Macedonia, Nis and Kosovo, but was defeated about a year later. Georgi Voiteh was executed and Konstantin Bodin was sent into exile in Syria, but managed to escape.");
	insertLastNode(&headDefault, "1185", "Uprising of Assen and Peter", "The uprising was successful and the era of the Second Bulgarian Kingdom began.");
	insertLastNode(&headDefault, "1404 - 1417", "Uprising of Constantine and Fruzhin", "The first uprising against the Ottomans, supported by Hungary and Wallachia.");
	insertLastNode(&headDefault, "1598", "First Tarnovo Uprising", "In 1593 a war broke out between the Ottomans and the Habsburg Empire. Then the First Tarnovo Uprising began to take shape. Leaders are Theodore Balina and Dionysius Rally. A large-scale conspiracy network has been set up. The revolt was announced after the invasion of the Wallachian voivode Mircho Hrabri near Silistra. In Tarnovo, Theodore Balina was proclaimed king under the name Shishman IV. After the Wallachian detachments withdrew, the Ottomans captured and plundered Tarnovo.");
	insertLastNode(&headDefault, "1686", "Second Tarnovo Uprising", "In 1686 the Second Tarnovo Uprising was declared in Tarnovo. The leader is Roscislav Stratimirovich. The conspiracy was exposed due to the betrayal of a Greek and some of the leaders were executed. The insurgents acted quickly and took control of Tarnovo, and the movement spread to Silistra, Gabrovo, Troyan and others. The Ottoman army was sent, which reached the former capital and captured it. Meanwhile, the rebels withdrew to the Gabrovo Balkans, where they formed a new detachment, reinforced by a detachment. Their last battle was near Sofia, where the revolt was finally put down.");
	insertLastNode(&headDefault, "1688", "The Chiprovtsi Uprising", "Leaders are Petar Parcevic and Georgi Pejacevic. It is due to the Habsburg entry into Belgrade. The rebels captured Kutlovitsa (today's Montana), and Orthodox Bulgarians from the northwest rose with them. Hungarian Protestants helped the Ottomans, who subjugated the center of Chiprovets and suppressed the uprising.");
	insertLastNode(&headDefault, "1689", "Uprising of Karpos", "Bulgarians from southwestern Macedonia are revolting, led by Karposh. Kumanovo and Skopje were captured, and Karposh was awarded the rank of general by Leopold I, but after the forced withdrawal of his army to the west, the Ottomans suppressed the revolt.");
	insertLastNode(&headDefault, "1829", "Thracian Uprising", "It happened after the capture of Sozopol by the Russians. The population of Strandzha rose with modern weapons from the Russian army and captured Sliven. It spread all the way to Lozengrad and Luleburg, but with the signing of a truce between St. Petersburg and the High Gate, the insurgent detachments were disbanded.");
	insertLastNode(&headDefault, "1875", "Stara Zagora Uprising", "Georgi Rakovski created the organized national liberation movement, the BRCC appeared, and Vasil Levski began to build his committee network. The goal is liberation through universal rebellion. An attempt to do so was made in 1875 with the so-called Stara Zagora Uprising. The revolution in Bosnia and Herzegovina is a favorable condition, which is why they decided to revolt, but make many mistakes, such as lack of preparation, have a weak committee network, and an unstable Central Committee. On the agreed date, only a small group of the Stara Zagora Committee took action.");
	insertLastNode(&headDefault, "1876", "The April Uprising", "The Giurgiu Committee was formed in Romania, where it was decided to revolt in the spring of 1876. They divided Bulgaria into 5 districts: 1st - Tarnovo, 2nd - Sliven, 3rd - Vratsa, 4th - Plovdiv, 5th - Sofia. Difficulties arise from the very beginning. In the Tarnovo district the preparation starts only in February. Disputes over tactics arose in the Sliven district, and the will of the local voivodes to organize a large detachment instead of a mass uprising was ultimately imposed there. The main problem in the Vratsa district is the lack of weapons. The preparation is going best in the Plovdiv district, moved to Panagyurishte. May 1 has been set as the starting date at the meeting in Oborishte. The plan was thwarted by Nenko Terziiski, who revealed everything to the Turkish authorities. Zapties are trying to arrest Todor Kableshkov, forcing him to declare an uprising on April 20th. By sending the famous \"Bloody Letter\", one by one the settlements in the fourth district revolted. In Panagyurishte, Benkovski formed the \"Flying Detachment\". In a short time almost the whole of Srednogorie and some Rhodope villages. The Tarnovo district revolted almost a week later, and at the beginning of May the detachment of Stoil Voivoda began to operate in Sliven.In the Vratsa region, the apostles decided to wait for the arrival of Botev's detachment. In several days of fighting against numerous bashibozuk and Circassian companies, the rebels fought bravely, but the intervention of the Turkish army doomed their resistance to failure. Suppression of the uprising is ruthless. Later, Russia declared war on the Ottoman Empire, which in 1878 led to the liberation of Bulgaria.");
	insertLastNode(&headDefault, "1903", "Ilinden-Preobrazhensko Uprising", "The emergence of the IMRO in 1893 marked the beginning of a more organized revolutionary activity in Macedonia and Edirne Thrace. In 1903 the last Bulgarian uprising against foreign rule broke out. It is considered the best organized, with according to various estimates nearly 26,000 people. In most counties, the main problem is the lack of training and weapons. At the same time, factors in a good end to the uprising were intensified Turkish repression and frequent clashes with soldiers. A compromise option is reached for a classical uprising only in the most prepared areas, and in the others � intensified activity without involving the population. The revolt broke out according to plan on July 20, 1903. in the Bitola Revolutionary District. Edirne Thrace is also rising. The tactics of a gradual outbreak of the uprising somewhat surprised the high gate, which sent thousands of regular troops. The Bulgarians fought bravely, and the uprising was put down only at the end of September, and in the Aegean part it lasted until the end of October. Ottoman units suppressed the movement in the Edirne region at the end of August. Like the April Uprising, the Ilinden-Preobrazhensk Uprising was brutally crushed. According to the memorandum of the IMRO to the great powers from 1904. Nearly 1,000 insurgents were killed in the battle, 201 villages were set on fire, 4,696 civilians were killed and more than 30,000 refugees fled to Bulgaria.");
	return headDefault;
}

bool runProgram()
{
	Node* headDefault = initializeDefaultUprisings();

	int counter = 1;
	
	printMenu(counter);
	
	do
	{
		unsigned char ch1 = _getch();
		if (ch1 == 224)
		{
			unsigned char ch2 = _getch();
			if (ch2 == 72)
			{
				if (counter == 1) counter = 1;
				else {
					counter--;
				}
				
				system("cls");
			}
			else if (ch2 == 80)
			{
				if (counter == 5) counter = 5;
				else {
					counter++;
				}
				
				system("cls");
			}
			printMenu(counter);
			
		}
		else if (ch1 == 13)
		{
			switch (counter)
			{
			case 1: displayList(headDefault); break;
			case 2: cout << "Add an event" << endl; break;
			case 3: cout << "Delete an event" << endl; break;
			case 4: cout << "Quiz" << endl; break;
			case 5: return 0;
			}
		}
	} while (true);
	return 1;
}