#include <iostream>
#include <cstdlib>
#include "r_color.h"
using namespace std;

//////////////////////////////////////////////////////////
char gameover[64][256]={

        "|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.|",
		"|..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..|",
		"|...XXXDDDDdXXXDDDdXXDDdXXDDdXDDDDdXXDDDdXXDdXDdXDDDDdXDDDDdX....|",
		"|...XXDdXXXXXXDdXXDdXDDDXDDDdXDdXXXXDXXXDdXDdXDdXDdXXXXDdXXDdX...|",
		"|..XXXDdXDDDdXDdXXDdXDdXDXDDdXDDDDdXDXXXDdXDdXDdXDDDDXXDDDDdXXX..|",
		"|...XXDdXXXDdXDDDDDdXDdXXXDDdXDdXXXXDXXXDdXDdXDdXDdXXXXDdXDdXX...|",
		"|....XDDDDdXXXDdXXDdXDdXXXDDdXDDDDdXXDDDdXXXDDdXXDDDDdXDdXXDdXX..|",
		"|...XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...|",
		"|..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..|",
        "|..XXXXXXXXXXXXXXXXXXXxxx____________________xxxxxxXXXXXXXXXXXX..|",
		"|...XXXXXXXXXXXXXXXXXxxoccc************pppppppoxxxxxxxXXXXXXXXX..|",
		"|..XXXXXXXXXXXXXXXXXxocccc******************pppoxxxxxXXXXXXXXX...|",
		"|....XXXXXXXXXXXXXXxoccc**********************ppoxxxxxxxxXXXX....|",
		"|.XXXXXXXXXXXXXXXxxocc**#####**********#####****poxxxxxxxXXXXXX..|",
		"|..XXXXXXXXXXXXXXxoc***#=====#********#=====#*****oxxxxxxXXXXX...|",
		"|...XXXXXXXXXXXxxoc***#ff@@@f#****** #ff@@@ff#*****oxxxxxXXXXXX..|",
		"|..XXXXXXXXXXXxxxo*****#ff@ff#********#ff@ff#******oxxxxxXXXX....|",
		"|..XXXXXXXXXxxxxxo***@uuuuuuuuu******uuuuuuuuu*****oxxxxxXXXXX...|",
		"|...XXXXXXXXxxxxxoc***uu@@@@@**********@@@@@*u*****oxxxxxxxXXXX..|",
		"|...xxxxxxxxxxxxxo****u********************@@u****oxxxxxxXXXXX...|",
		"|...xxxxxxxxxxxxxxo************#######***********oxxxxxxxXXXXX...|",
		"|..xxxxxxxxxxxxxxxxo**u*******#*******#******u**poxxxxxxxXXX.....|",
		"|.xxxxxxxxxxXxxxxxxxo********#*********#*****upoxxxxxxxxxXXXXX...|",
		"|.....xxxxxxXXxxxxxxxou********************u***oxxxxxxxxxXXXX....|",
		"|....XXXXXXXXXXXxxxxxxu/cccc****************pu\\\\xxxxxxxxxXXXX....|",
		"|...XXXXXXXXXXXXXxxx//ccccc******************pup\\\\xxxxxxXXX......|",
		"|..XXXXXXXXXXXXXXX//ccucccc******************u*ppp\\\\xxxxXxXX.....|",
		"|....XxXXXXXXXXX//ccccccc*************************pp\\\\xXXXXXX....|",



};

//////////////////////////////////////////////////////////
char die[64][256]={

        "|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.|",
		"|..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..|",
		"|...XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..|",
		"|...XXXXXXXXXXXXXdddddDXXdddddDXXXdddDXXdddddDXXXXXXXXXXXXXXXX...|",
		"|..XXXXXXXXXXXXXXddDXXdDXdDXXXXXXdDXXdDXddDXXdDXXXXXXXXXXXXXXXX..|",
		"|...XXXXXXXXXXXXXddDXXdDXdddddDXXdddddDXddDXXdDXXXXXXXXXXXXXX....|",
		"|....XXXXXXXXXXXXddDXXdDXdDXXXXXXdDXXdDXddDXXdDXXXXXXXXXXXXXXXX..|",
		"|...XXXXXXXXXXXXXdddddDXXdddddDXXdDXXdDXdddddDXXXXXXXXXXXXXXXX...|",
		"|..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..|",
        "|..XXXXXXXXXXXXXXXXXXXxxx____________________xxxxxxXXXXXXXXXXXX..|",
		"|...XXXXXXXXXXXXXXXXXxxoccc************pppppppoxxxxxxxXXXXXXXXX..|",
		"|..XXXXXXXXXXXXXXXXXxocccc******************pppoxxxxxXXXXXXXXX...|",
		"|....XXXXXXXXXXXXXXxoccc**********************ppoxxxxxxxxXXXX....|",
		"|.XXXXXXXXXXXXXXXxxocc**#####**********#####p***poxxxxxxxXXXXXX..|",
		"|..XXXXXXXXXXXXXXxoc***#f=f=f#********#f=f=f#p****oxxxxxxXXXXX...|",
		"|...XXXXXXXXXXXxxoc***#fff=fff#******#fff=fff#p****oxxxxxXXXXXX..|",
		"|..XXXXXXXXXXXxxxo*****#f=f=f#********#f=f=f#p*****oxxxxxXXXX....|",
		"|..XXXXXXXXXxxxxxo****==#####==******==#####==*****oxxxxxXXXXX...|",
		"|...XXXXXXXXxxxxxoc*****=====**********=====*******oxxxxxxxXXXX..|",
		"|...XXXXXXXXxxxxxxo-----BBBBBBBBBBBBBBBBBBBBB-----oxxxxxxxxXX....|",
		"|....XXXXXXXxxxxxxxocc*-bbbbbbbbbbbbbbbbbbbbb-*ppoxxxxxxxXXXXX...|",
		"|...XXXXXXXXXxxxxxxxocc-BBBBBBBBBBBBBBBBBBBBB-ppoxxxxxxxxXXXXXX..|",
		"|..XXXXXXXXXXXxxxxxxxo--bbbbbbbbbbbbbbbbbbbbb--oxxxxxxxxxXXXX....|",
		"|...XXXXXXXXXXXxxxxxxxocXccXXXXX******ppXXXXXpoxxxxxxxxxxXXXXX...|",
		"|....XXXXXXXXXXXxxxxxx//ccXcXXX*****X****XXXpp\\\\xxxxxxxxxXXXX....|",
		"|...XXXXXXXXXXXXXxxx//cXccc**X*****X******XX*ppp\\\\xxxxxxXXX......|",
		"|..XXXXXXXXXXXXXXX//ccccccX****X***********X***ppp\\\\xxxxXXXX.....|",
		"|....XXXXXXXXXXX//cccccccc************************pp\\\\xXXXXXX....|",



};

/////////////////////////////////////////////////////////
char suicide[64][256]={
        "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXTTtXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
        "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXTTtXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
        "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXTTtXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
        "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXTTTTtXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
        "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXooooooooooooXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo************###oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo**************###oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXddddd=XXddddd=XXXddd=XXddddd=XXXXXXXXo***************####oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXdd=XXd=Xd=XXXXXXd=XXd=Xdd=XXd=XXXXXXo******************###oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXdd=XXd=Xddddd=XXddddd=Xdd=XXd=XXXXXo****d.d.#*****.d.d.####oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXdd=XXd=Xd=XXXXXXd=XXd=Xdd=XXd=XXXXXo****.d..#*****..d..*###o XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXddddd=XXddddd=XXd=XXd=Xddddd=XXXXXXo****d.d.#*****.d.d.*###o XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo*********======*****###oyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo*******=dddddd=**###*oyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyoooo**=======**#ooyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyTTTTTTTTTTTtyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyTTTTTTTTTTTtyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyooo************oooyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo*****************##oyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo***||#**************#oyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo***//#*************#*##o#yyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzo***||#**************#*###o#zzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzo***//#**************#**##o#zzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzo***||#**************#**##o#zzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzo***//#**************#***#o#zzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzo**||#**************#*##o#zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzoo//#**************#ooo#zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz||#**************##//#zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz//#******#*********#zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa||#******||#******//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa||#******||#******||aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa||#******||#******||aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa|#******||#******|aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa|#*****||#*****|TTTTTTTTTTTTtaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa######aa######aaaaaaaaaaaTTtaaaaaaaaaaaaaaaaaaaaaa-",
        "-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaTTtaaaaaaaaaaaaTTtaaaaaaaaaaaaaaaaaaaaaa-",
        "-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaTTTTTTTTTTTTTTTTTtaaaaaaaaaaaaaaaaaaaaaa-",
        "-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaTTtaaaaaaaaaaaaTTtaaaaaaaaaaaaaaaaaaaaaa-",










};



//////////////////////////////////////////////////////////
char workman4C[32][64] = {
    ".XXXxxggtTTTTTTTTTTTTTTggXXX.",
    ".XXXxggtTTTTTTTTTTTTTTTggXXX.",
    ".XXXxgtT###a  TTa ###pTtgXXX.",
    ".XXXgtTcw@wa   ta w@wpTtgxXX.",
    ".XXXgTca-++++++++++++-pTtgxX.",
    ".XXggoca-************-pTogxX.",
    ".XXgggTcb====bbbb=====PoTtgX.",
    ".XXgTocb   w  vvvw wb PPoT@x.",
    ".XX@ocb    w  vvvw wb PPPoTg.",
    ".gTocb     w   vw  wb  PPPog.",
};

//////////////////////////////////////////////////////////
char workman4S[32][64] = {
    ".XXXxxggtTTTTTTTTTTTTTTggxXX.",
    ".XXXxggtTT#TTTTTTT#TTTTggxxX.",
    ".XXXxgtT##aa  TTa a##pTtgxxX.",
    ".XxxgtTTw@wa   ta w@wpTtgxxX.",
    ".XxxgTTauuua      uuuapTugxX.",
    ".Xxuguua    aa++aa    puTguX.",
    ".uxgugTTb====bbbb=====PTTtgu.",
    ".XxgTuTb   w  vvvw wb uPuT@x.",
    ".Xu@oub    w  vvvw wb PuPoTg.",
    ".gToTb     w   vw  wb  uPPog.",
};
//////////////////////////////////////////////////////////
char workman4N[32][64] = {
    ".XXXxxggtTTTTTTTTTTTTTTggXXX.",
    ".XXXxggtTTTTTTTTTTTTTTTggXXX.",
    ".XXXxgtT###a  TTa ###pTtgXXX.",
    ".XXXgtTcw@wa   ta w@wpTtgxXX.",
    ".XXXgTca              pTtgxX.",
    ".XXggoca    w++++a     pTgxX.",
    ".XXgggTcb====bbbb=====PoTtgX.",
    ".XXgTocb   w  vvvw wb PPoT@x.",
    ".XX@ocb    w  vvvw wb PPPoTg.",
    ".gTocb     w   vw  wb  PPPog.",
};

//////////////////////////////////////////////////////////
char workman3S[32][64] = {
    ".XXXxxxxxTTTTTTTTTTTTXXXXXXX.",
    ".XXXxxxtT|TT|T|TT|T|TTttxXXX.",
    ".XXXxtTTca          pTTttXXX.",
    ".XXXTTTca##a      ##appTTtXX.",
    ".XXXuTcaua    Oa   ua upTTtX.",
    ".XXxuTua    ++++a    ppuTxX.",
    ".XXuTTTca   +a +a  ua pTutxX.",
    ".Xuxxocb====bbbbb=====PPoxuX.",
    ".uXxucb ub w      wb ubPPoxX.",
    ".XXocb     w      wb   PPPoX.",
};
//////////////////////////////////////////////////////////
char workman3C[32][64] = {
    ".XXXXXxxxTTTTTTTTTTTTxxXXXXX.",
    ".XXXXxxtT|TT|T|TT|T|TTttxXXX.",
    ".XXXxtTTca          pTTttXXX.",
    ".XXxTTTca##a      ##appTTtXX.",
    ".XXxTTca      Oa      ppTTtX.",
    ".XXxTT--+++++++++++++++-TTxX.",
    ".XXtTTT--************--TTtxX.",
    ".XXxxocb==============PPoxXX.",
    ".XXxocb    w      wb  PPPoxX.",
    ".Xxocb     w      wb   PPPoX.",
};
//////////////////////////////////////////////////////////
char workman3N[32][64] = {
    ".XXXxxxxxTTTTTTTTTTTTXXXXXXX.",
    ".XXXxxxtT|TT|T|TT|T|TTttxXXX.",
    ".XXXxtTTca          pTTttXXX.",
    ".XXXTTTca##a      ##appTTtXX.",
    ".XXXTTca      Oa      ppTTtX.",
    ".XXxTTca     ++++a    ppTTxX.",
    ".XXtTTTca             pTTtxX.",
    ".XXxxocb==============PPoxxX.",
    ".XXxocb    w      wb  PPPoxX.",
    ".XXocb     w      wb   PPPoX.",
};
/////////////////////////////////////////////////////////
char workman2S[32][64] = {
    ".XXXxxxxxxxTTTTTTTTxXXXXXXXX.",
    ".XXXxxxxTTTTTTTTTTTTTxxxxXXX.",
    ".XXXxxxTTaTTTTTTTTTTpTTxxXXX.",
    ".XXXxxocaa==a    a==appTTxXX.",
    ".XXXxoca  @a      @ua ppoxxX.",
    ".XXxxocauua ++++++a uappoxxX.",
    ".XXxuxoua   +a   +a   puxxxX.",
    ".XXxxuca   ua    ua uappouxX.",
    ".XXuoca   ua       ua ppuoxu.",
    ".uXoca                 pppoX.",
};
/////////////////////////////////////////////////////////
char workman2C[32][64] = {
    ".XXXXXXxxxxTTTTTTTTxxxXXXXXX.",
    ".XXXXXxxTTTTTTTTTTTTTxxxXXXX.",
    ".XXXXxxTTaTTTTTTTTTTpTTxxXXX.",
    ".XXXXxoca===a    ===appTTxXX.",
    ".XXXxoca  @a      @a  ppoxxX.",
    ".XXxxo--++++++++++++++--xxXX.",
    ".XXxxxo--************--xxXXX.",
    ".XXxxoca              ppoxXX.",
    ".XXxoca               pppoxX.",
    ".Xxoca                 pppox.",
};

/////////////////////////////////////////////////////////
char workman2N[32][64] = {
    ".XXXxxxxxxxTTTTTTTTxXXXXXXXX.",
    ".XXXxxxxTTTTTTTTTTTTTxxxxXXX.",
    ".XXXxxxTTaTTTTTTTTTTpTTxxXXX.",
    ".XXXxxoca===a    ===appTTxXX.",
    ".XXXxoca  @a      @a  ppoxxX.",
    ".XXxxoca     ++++a    ppoxxX.",
    ".XXxxxoca             poxxxX.",
    ".XXxxoca              ppoxxX.",
    ".XXxoca               pppoxX.",
    ".XXoca                 pppoX.",
};

/////////////////////////////////////////////////////////
char workman1S[32][64] = {
    ".XXXxxxxxxxxxxxxxxxxXXXXXXXX.",
    ".XXXxxxxxTTTTTTTTTTTTxxxxXXX.",
    ".XXXxxxoca          ppoxxXXX.",
    ".XXXxxocaOa        OuupoxxXX.",
    ".XXXxocaua    7a      puoxxX.",
    ".XXxxocua  ++++++a ua ppouxX.",
    ".XXxxuuca  +a    +  a poxxxX.",
    ".XXuxoca           ua upoxxu.",
    ".uXxoca  ua           pppuxX.",
    ".XXoca                 pppoX.",
};


//////////////////////////////////////////////////////////
char workman1C[32][64] = {
    ".XXXXXXXxxxxxxxxxxxxxxXXXXXX.",
    ".XXXXXXxxTTTTTTTTTTTTxxxxXXX.",
    ".XXXXXxoca          ppoxxXXX.",
    ".XXXXxocaOa        OappoxxXX.",
    ".XXXxoca      7a      ppoxxX.",
    ".XXxxo--+++++++++++++++--xXX.",
    ".XXxxxo-***************xxxXX.",
    ".XXxxoca              ppoxxX.",
    ".XXxoca               pppoxX.",
    ".Xxoca                 pppox.",
};
//////////////////////////////////////////////////////////
char workman1N[32][64] = {
    ".XXXxxxxxxxxxxxxxxxxXXXXXXXX.",
    ".XXXxxxxxTTTTTTTTTTTTxxxxXXX.",
    ".XXXxxxoca          ppoxxXXX.",
    ".XXXxxocaOa        OappoxxXX.",
    ".XXXxoca      7a      ppoxxX.",
    ".XXxxoca   ++++++++a  ppoxxX.",
    ".XXxxxoca             poxxxX.",
    ".XXxxoca              ppoxxX.",
    ".XXxoca               pppoxX.",
    ".XXoca                 pppoX.",
};
////////////////////////////////////////////////////////
char Bossinterfacecovid[64][128] = {
        "XXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXX|",
        "XXXXXXXXXXxxx____________________xxxxxxXXXXXX|",
		"XXXXXXXXXxxoccc************pppppppoxxxxxxxXXX|",
		"XXXXXXXXxocccc******************pppoxxxxxxxxX|",
		"XXXXXXXxoccc**********************ppoxxxxxxxx|",
		"XXXXXxxocc**#####**********#####p***poxxxxxxx|",
		"XXXXXxoc***#######********#######p****oxxxxxx|",
		"XXXxxoc***#=======#******#=======#p****oxxxxx|",
		"XXxxxo*****#.@@@.#********# @@@ #p*****oxxxxx|",
		"xxxxxo******#####**********#####p******oxxxxx|",
		"xxxxxoc********************************oxxxxx|",
		"xxxxxxo-----BBBBBBBBBBBBBBBBBBBBB-----oxxxxxx|",
		"xxxxxxxocc*-bbbbbbbbbbbbbbbbbbbbb-*ppoxxxxxxx|",
		"Xxxxxxxxocc-BBBBBBBBBBBBBBBBBBBBB-ppoxxxxxxxx|",
		"XXxxxxxxxo--bbbbbbbbbbbbbbbbbbbbb--oxxxxxxxxx|",
		"XXXxxxxxxxocccc***********ppppppppoxxxxxxxxxx|",
		"XXXXxxxxxx//cccc*************ppppp\\\\xxxxxxxxx|",
		"XXXXXxxx//ccccc******************ppp\\\\xxxxxxx|",
		"XXXXXX//ccccccc********************ppp\\\\xxxxx|",
		"XXXX//cccccccc************************pp\\\\xxx|",

	};

char Bossinterfacenormal[64][512] = {
        "|XXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXXXX|",
        "|XXXXXXXxxxxxxxxxxxxx___________xxxxxxxxXXXXXXXX|           ",
		"|xxxxxxxxxxxxxxxxxxoccc*****ppppppoxxxxxXXXXXXXX|",
		"|XXXxxxxxxxxxxxoccc************pppppppoxxxxxXXXX|",
		"|XXXXxxxxxxxxocccc******************pppoxxxxXXXX|",
		"|XXXXXXxxxxxoccc**********************ppoxxxxXXX|",
		"|XXXXXxxxxxocc**#####**********#####p***poxxxxXX|",
		"|XXXXxxxxxoc***#=====#********#=====#p****oxxxxX|",
		"|XXXXXxxxoc***#.@@@@@.#******#.@@@@@.#p****oxXXX|",
		"|XXXXxxxxo*****#.@@@.#********#.@@@.#p*****oxxxx|",
		"|XXXXxxxxo******#####**********#####p******oxxxx|",
		"|XXXXxxxxoc********************************oxxxx|",
		"|XXXXXxxxxocc****************************poxxxxX|",
		"|XXXXXXXxxxoccc********=======*********ppoxxXXXX|",
		"|XXXXXXXxxxxoccc*********************pppoxxxxXXX|",
		"|XXXXXXxxxxxxoccc*******************pppoxxxxXXXX|",
		"|XXXXXXxxxxxxxocccc***********ppppppppoxxxxxXXXX|",
		"|XXXXxxxxxxxx//cccc*************ppppp\\\\xxxxxXXXX|",
		"|XXxxxxxxxx//ccccc******************ppp\\\\xxXXXXX|",
		"|XXXxxxxx//ccccccc********************ppp\\\\xXXXX|",
		"|XXXXXX//cccccccc************************pp\\\\XXX|",

	};

char Bossinterfacehappy[64][512] = {
        "|XXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXXXX|",
        "|XXXXXXXxxxxxxxxxxxxx___________xxxxxxxxXXXXXXXX|           ",
		"|xxxxxxxxxxxxxxxxxxoccc*****ppppppoxxxxxXXXXXXXX|",
		"|XXXxxxxxxxxxxxoccc************pppppppoxxxxxXXXX|",
		"|XXXXxxxxxxxxocccc******************pppoxxxxXXXX|",
		"|XXXXXXxxxxxoccc**********************ppoxxxxXXX|",
		"|XXXXXxxxxxocc**#####**********#####p***poxxxxXX|",
		"|XXXXxxxxxoc***#.@@@.#********#.@@@.#p****oxxxxX|",
		"|XXXXXxxxoc***#.@@@@@.#******#.@@@@@.#p****oxXXX|",
		"|XXXXxxxxo*****#.@@@.#********#.@@@.#p*****oxxxx|",
		"|XXXXxxxxo******#####**********#####p******oxxxx|",
		"|XXXXxxxxoc********************************oxxxx|",
		"|XXXXXxxxxocc*****================*******poxxxxX|",
		"|XXXXXXXxxxoccc****=############=******ppoxxXXXX|",
		"|XXXXXXXxxxxoccc*****=#########=*****pppoxxxxXXX|",
		"|XXXXXXxxxxxxoccc*****=========*****pppoxxxxXXXX|",
		"|XXXXXXxxxxxxxocccc***********ppppppppoxxxxxXXXX|",
		"|XXXXxxxxxxxx//cccc*************ppppp\\\\xxxxxXXXX|",
		"|XXxxxxxxxx//ccccc******************ppp\\\\xxXXXXX|",
		"|XXXxxxxx//ccccccc********************ppp\\\\xXXXX|",
		"|XXXXXX//cccccccc************************pp\\\\XXX|",
	};

/////////////////////////////////////////////////////////////////////////////////////

char medicnormal[64][512] = {
        "vXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXXXXv ",
        "vXXXXXXXXXX{IIIIIIIIIIIIIIIIIIIIIIII}XXXXXXXXXXv ",
        "vXXXXxxxxx{BBBBBBBBBBBBBBBBBBBBBBBBBB}xxXXXXXXXv ",
		"vXXXXXxx{bbbbbbbbbbbbb++bbbbbbbbbbbbbb}xxxXXXXXv ",
		"vXXXxxx{bbbbbbbbbbbb++++++bbbbbbbbbbbb}xxxxXXXXv  ",
		"vXXxxxx{BBBBBBBBBBBBBB++BBBBBBBBBBBBB}xxxXXXXXXv  ",
		"vxxxxxxx||||||||||||||||||||||||||||| xxxxxxXXXv    "   ,
		"vxxxxxxxocc**************************poxxxxxxxXv			 ",
		"vxxxxxxoc***#######********#######p****oxxxxxxxv  ",
		"vxxxxxoc***# @@@@@ #======# @@@@@ #p****oxxxxxxv	 ",
		"vxxxxxo*****# @@@ #********# @@@ #p*****oxxxxxxv    ",
		"vxxxxxo******#####**********#####p******oxxxxxxv	",
		"vxxxxxop********************************oxxxxxxv	",
		"vxxxxxxo=====BBBBBBBBBBBBBBBBBBBBB=====oxxxxxxxv",
		"vxxxxxxxopp*=bbbbbbbbbbbbbbbbbbbbb=*ppoxxxxxxxXv",
		"vXxxxxxxxopp=BBBBBBBBBBBBBBBBBBBBB=ppoxxxxxxxXXv",
		"vXXxxxxxxxo==bbbbbbbbbbbbbbbbbbbbb==oxxxxxxxxxxv",
		"vXXXXXxxxxxopppp***********ppppppppoxxxxxxXXXXXv      ",
		"vXXXXXXxxxx//pppp*************ppppp\\\\xxxXXXXXXXv     ",
		"vXXXXxxxx//ppppp******************ppp\\\\XXXXXXXXv   ",
		"vXXXxxx//ppppppp********************ppp\\\\XXXXXXv ",
		"vXXxx//pppppppp************************pp\\\\XXXXv ",

	};

/////////////////////////////////////////////////////////////////////////

char medicsad[64][512] = {
        "vXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXXXXv ",
        "vXXXXXXXXXX{IIIIIIIIIIIIIIIIIIIIIIII}XXXXXXXXXXv ",
        "vXXXXxxxxx{BBBBBBBBBBBBBBBBBBBBBBBBBB}xxXXXXXXXv ",
		"vXXXXXxx{bbbbbbbbbbbbb++bbbbbbbbbbbbbb}xxxXXXXXv ",
		"vXXXxxx{bbbbbbbbbbbb++++++bbbbbbbbbbbb}xxxxXXXXv  ",
		"vXXxxxx{BBBBBBBBBBBBBB++BBBBBBBBBBBBB}xxxXXXXXXv  ",
		"vxxxxxxx||||||||||||||||||||||||||||| xxxxxxXXXv    "   ,
		"vxxxxxxxocc**************************poxxxxxxxXv			 ",
		"vxxxxxxoc***#######********#######p****oxxxxxxxv  ",
		"vxxxxxoc***#u@@@@@@#======#u@@@@@u#p****oxxxxxxv	 ",
		"vxxxxxo*****#u@@@@#********#@@@@@#p*****oxxxxxxv    ",
		"vxxxxxo***0**#####**********#####p******oxxxxxxv	",
		"vxxxxxop*00***********************0*0***oxxxxxxv	",
		"vxx0xxxo=====BBBBBBBBBBBBBBBBBBBBB=====oxxxxxxxv",
		"vx00xxxxopp*=bbbbbbbbbbbbbbbbbbbbb=*ppoxxxx0xxXv",
		"vXxxxxx0xopp=BBBBBBBBBBBBBBBBBBBBB=ppox0xxx00XXv",
		"vXX0xxxxxxo==bbbbbbbbbbbbbbbbbbbbb==oxxxx0xxxxxv",
		"vXXXXX0xxxxopppp***********ppppppppoxxxxxxX0XXXv      ",
		"vX0XXXXxxxx//pppp*************ppppp\\\\xxxXXXXXXXv     ",
		"vXXXXxxxx//ppppp******************ppp\\\\XXXX0XX0v   ",
		"v0XXxxx//ppp0ppp********************ppp\\\\XXX0X0v ",
		"vXXxx//pppppppp************************pp\\\\XXXXv ",

	};


//////////////////////////////////////////////////////////////////////
char entertainnormal[64][128] = {
        "XXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXX|",
        "XXXXXXXXXXXTTTTTTTTTTTTTTTTTTTTTTTTxxXXXXXXXX|",
        "XXXXXXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTxxxXXXXXX|",
		"XXXXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTxxxxxXXX|",
		"XXXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTxxxxxxX|",
		"XXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTtxxxxx|",
		"XXXXXTTTTTTTtT*TTtttTTTTt**TTT**TTTTTTTTtxxxx|",
		"XXXXXTTT********T*****TTt**tT****T***tTtxxxxx|",
		"XXXxxTT***#########******#########p**tToxxxxx|",
		"XXxxxTT****####.###############.#p***TToxxxxx|",
		"xxxxxTT*****#####**********#####p****TToxxxxx|",
		"xxxxxTt******************************TToxxxxx|",
		"xxxxxxTt************######***********Toxxxxxx|",
		"xxxxxxxo*********(--------^********ppoxxxxxxx|",
		"Xxxxxxxxo*************************ppoxxxxxxxx|",
		"XXxxxxxxxo*************************oxxxxxxxxx|",
		"XXXxxxxxxxoWWWWWWWWWWWWWWWWWWWWWWWoxxxxxxxxxx|",
		"XXXXxxxxxx//cccckkktTTTTtkkkKppppp\\\\xxxxxxxxx|",
		"XXXXXxxx//ccccckkkkktTTtkkkkkKKKKppp\\\\xxxxxxx|",
		"XXXXXX//ccccccckkkkkkTTkkkkkkkkkKKKppp\\\\xxxxx|",
		"XXXX//cccccccckkkkkktTTtkkkkkkkkkkKKKKpp\\\\xxx|",

	};




/////////////////////////////////////////////////////////////////////
char entertainsad[64][128] = {
        "XXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxXXXXXXXX|",
        "XXXXXXXXXXXTTTTTTTTTTTTTTTTTTTTTTTTxxXXXXXXXX|",
        "XXXXXXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTxxxXXXXXX|",
		"XXXXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTxxxxxXXX|",
		"XXXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTxxxxxxX|",
		"XXXXXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTtxxxxx|",
		"XXXXXTTTTTTTtT*TTtttTTTTt**TTT**TTTTTTTTtxxxx|",
		"XXXXXTTT********T*****TTt**tT****T***tTtxxxxx|",
		"XXXxxTT***#########******#########p**tToxxxxx|",
		"XXxxxTT****####.###############.#p***TToxxxxx|",
		"xxxxxTT*****#####**********#####pu***TToxxxxx|",
		"xxxxxTt***u*********************uu***TToxxxxx|",
		"xxxxuxTt*uu*********######***********Toxxxxxx|",
		"xxxuxxxou*************************uupoxxxuxxx|",
		"Xxxxxxxxo**********#######*******ppouxxuxxxux|",
		"XXxxuuxxxo********#*******#********oxxxuxxxxx|",
		"XXXxxxxxuxoWWWWWWWWWWWWWWWWWWWWWWWoxxxxxxxxux|",
		"XuXXxxuxxx//cccckkktTTTTtkkkKppppp\\\\xxxxxxxxx|",
		"XXXXXxxx//ccccckkkkktTTtkkkkkKKKKppp\\\\xxxxxxx|",
		"XXXXXX//ccccccckkkkkkTTkkkkkkkkkKKKppp\\\\xxxxx|",
		"XXXX//cccccccckkkkkktTTtkkkkkkkkkkKKKKpp\\\\xxx|",

	};


/////////////////////////////////////////////////////////////////////















char rich[64][512] = {

		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXooooooooooooXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo************#oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo*************##oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo*************####oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXXooooXXXXXXo*****************##oXXXXXXXXooooooXXXXXXXXXXXX$XXXXX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXo****oXXXXo****$$$. *****$$$ ***#oXXXXXXo****#oXXXXXXXXXX$$$$$XX-",
		"-XXXXXXXXXXXXXXXXXXXXXXXXXXXoo***oXXXXo****$$..*****$$..***#o XXXXo****#oXXXXXXXXXX$XX$XX$XX-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyo*****oyyyo*******************##oyyyyo***##oyyyyyyyyyyy$yy$yyyyy-",
		"-yyyyyyyyyyyyyOOOpyyyyyyyyyyyyo****oyyyo*****========****#*oyyyyo***##oyyyyyyOOOpyyy$$$$$yyy-",
		"-yyyyyyyyyyyOOO$OOOpyyyyyyyyyyyo****oyyyyo****======****#oyyyyyo***##oyyyyyOOO$OOOpyyy$yy$yy-",
		"-yyyyyyyyyyyOOO$OOOpyyyyyyyyyyyyyo***oyyyyo*************oyyyyyo**##oyyyyyyyOOO$OOOpyyy$yy$yy-",
		"-yyyyyyyyyyyOOO$OOOpyyyyyyyyyyyyyyo***oyyo***************ooyyo*###oyyyyyyyyOOO$OOOpy$$$$$yyy-",
		"-yyyyyyyyyyyyyOOOpyyyyyyyyyyyyyyyyyo***o*******************oo*###oyyyyyyyyyyyOOOpyyyyy$yyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo************************##oyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyyyOOOpyyyyyyyyyo***||***************####ooyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-yyyyyyyyyyyyyyyyyyyyyOOO$OOOpyyyyyyyyoo//***************###//yyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-",
		"-zzzzzzzzzzzzzzzzzzzzzOOO$OOOpzzzzzzzzz||***************##||zzzzzzzzzzOOOpzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzOOO$OOOpzzzzzzzzz//***************#||zzzzzzzzzOOO$OOOpzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzOOOpzzzzzzzzzzz||***************#//zzzzzzzzzOOO$OOOpzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz//***************##||zzzzzzzzOOO$OOOpzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz||***************##|}zzzzzzzzzzOOOpzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz//***************##||zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz||***************##//zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz//****************#}}zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa||**//44444444\\**#}}aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa||**//aaaaaaaa\\**#//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa||*//aaaaaaaaaaa\\*#||aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa@@@caaaaaaaaaaaaa@@@@@caaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa@@@@@@@@caaaaaaaaaaaaa@@@@@@cccaaaaaaaaaaaaaaaaaaaaaaaaaaaa-",
		"-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa@@@@@@@@caaaaaaaaaaaaa@@@@@@@@caaaaaaaaaaaaaaaaaaaaaaaaaaaa-",

	};
















char ghost [29][256] = {
		"Cx    aabbbb. bbbb.           bb.     aaaaaabbbb. bbbbaaxxxxxxxxxxxxxxxo***************oxxxx+xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxC",
		"Cx    aabb.   bb.             aa.             bb.   bbaaxxxxxxxxxxxxxxo*****************oxxx+xx+xxxxxxxxxxxxxxxxxxxxxxxxxxxC",
		"Cx    aabb.   bb.             aa.             bb.   bbaaxxxxxxxxxxxxxo*******************ox   +x   ooox    IIIIIIIIxxxxxxxxC",
		"Cx    aabb.   bb.             aa.               .   bbaaxxxxxxxxxxxxo****###-*****###-****ox +x   o**ox    IIIIIIIIxxxxxxxxC",
		"Cx    aabb.     bb.           aa.           bb  .   bbaaxxxxxxxxxxxxo****##--*****##--****ox     o****ox    IIIIIIxxxxxxxxxC",
		"Cx    aabb.     bb.           aa.           bb  .   bbaaxxxxxxxxxxxxxo*********************ox   o****ox     IIIIIIxxxxxxxxxC",
		"Cx      aabb. bbbb.           aa.           bbbb. bbaaxxxxxxxxxooooyyo*******=====*******ox  o****ox         IIIIxxxxxxxxxxC",
		"Cy      aabb. bb.             aa.             bb. bbaayyyyyyyyo****oyyyo***=--###--=***oy   o****oy          IIIIyyyyyyyyyyC",
		"Cy        aa. aa. aaaabb.     aa.     bbaaaa. aa. aayyyyyyyyyyooo***oyyyo*= ====== ***oy  o***oy              IIyyyyyyyyyyyC",
		"Cy        aa. aa. aaaaaabb.   aa.   bbccccaa. aa. aayyyyyyyyyyyyyyyo**yyo************oy o***oy                IIyyyyyyyyyyyC",
		"Cy  aaaaaabbbbaa. aaaccaaa.   ccccccccaaacccccccccbbaayyyyyyyyyyyyyyy}}*******************//yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyC",
		"Cy  aabbbb. bbaa. aaacccaa.   aa.   ccaaacaa. aabb. aayyyyyyyyyyyyyyyy=*****************=y                   IIIIyyyyyyyyyyC",
		"Cy    aabb. aaaa. bbacccaa. bbaabb. ccccccbb. aaaaaayyyyyyyyyyyyyyyyyyy=**************=y                     IIIIyyyyyyyyyyC",
		"Cy      aabbbbaabbbbaaaaaa. bbaabb. aaaaaabbbbaabbaayyyyyyyyyyyyyyyyyy//**************}}yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyC",
		"Cy      aabbbbaabb. ccaaaa. aaaaaa. aaaabb. bbaabbaayyyyyyyyyyyyyyyyy||**************||yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyC",
		"Cy        aa. aaaa. ccccccbbaaaaaabb.       aaaa. aayyyyyyyyyyyyyyyy//***************//yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyC",
		"Cy        aabbaaaabbccccccbbaaaaaabb. aabbbbaaaabbaayyyyyyyyyyyyyyyy||**************//zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"Cz         aaaaaaaacccccc. bbaabb.   aabbaaaaaaaazzzzzzzzzzzzzzzzzz//**************}}zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"Cz          aabbaaaaaaccaaaa. aa.   aaaaaaaaaabbaazzzzzzzzzzzzzzzzzz||***************}}zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"Cz          aabb. aaaaaaaaaaaaaaaaaaaaaaaaaaaabbaazzzzzzzzzzzzzzzzzz//***************||zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"CZ           aabbaaaaaaaaaaaaaaaaaaaaaaaa. bbaazzzzzzzzzzzzzzzzzzzz||**************//zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"CZ           aabbbbaaaaaaaaaaaaaaaaaaaaaabbbbaaZZZZZZZZZZZZZZZZZZZ//***************}}zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"CZ             aabb. aaaaaa aaaaaaaaaaaccbbaaZZZZZZZZZZZZZZZZZZZZ//**//44444444\\***}}ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZC",
		"CZ                aabb. aaaaaaaaaaaaaaccccaaZZZZZZZZZZZZZZZZZZZZZ//**//ZZZZZZZZZZ\\***//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZC",
		"CZ                  aabbaaaa. aa. aa. ccccZZZZZZZZZZZZZZZZZZZZZZZ||*/ZZZZZZZZZZZZZ\\***||ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZC",
		"CZ                  aabbbb.   aa.   bbccccZZZZZZZZZZZZZZZZZZZZZ@@@@ZZZZZZZZZZZZZZZZZ@@@@@@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZC",
		"CZ                   aabbbb. aa. bbbbccccZZZZZZZZZZZZZZZZZ@@@@@@@@ZZZZZZZZZZZZZZZZZ@@@@@@@@@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZC",
		"CZ                     aabbbbaabbbbaaccccZZZZZZZZZZZZZZZZZ@@@@@@@@ZZZZZZZZZZZZZZZZ@@@@@@@@@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZC",

	};

char ghost1 [29][256] = {
		"C---------------aabbbb. bbbb.           bb.     aaaaaabbbb. bbbbaa-----XXXXXXXXXXo***************oXXXXXXXXXXXXXXXXXXXC",
		"C---------------aabb.   bb.             aa.             bb.   bbaa-----XXXXXXXXXo*****************oXXXXXXXXXXXXXXXXXXC",
		"C---------------aabb.   bb.             aa.             bb.   bbaa-----XXXXXXXXo*******************oXXXXXXXXXXXXXXXXXC",
		"C---------------aabb.   bb.             aa.                   bbaa-----XXXXXXXo****###.*****###.****oXXXX~~~~~~XXXXXXC",
		"C---------------aabb.     bb.           aa.           bb.     bbaa-----XXXXXXXo****##..*****##..****oXXXXXXXXXXXXXXXXC",
		"C---------------aabb.     bb.           aa.           bb.     bbaa-----XXXXXXXo*********************oXXXXXXXXXXXXXXXXC",
		"C-----------------aabb. bbbb.           aa.           bbbb. bbaa-------XXXXXXXXo*******************oXXXXXXXXXXXXXXXXXC",
		"C-----------------aabb. bb.             aa.             bb. bbaa-------XXXXXXXXXXo******===******oXXXXXXXXXXXXXXXXXXXC",
		"C-------------------aa. aa. aaaabb.     aa.     bbaaaa. aa. aa---------XXXXXXXXXXXo*************oXXXXXXXXXXXXXXXXXXXXC",
		"C-------------------aa. aa. aaaaaabb.   aa.   bbccccaa. aa. aa---------XXXXXXXXXXXo************oooooXXXXXXXXXXXXXXXXXC",
		"C-------------aaaaaabbbbaa. aaaccaaa.   ccccccccaaacccccccccbbaa-------yyyyyyyyoo*******************oyyyyyyyyyyyyyyyyC",
		"C-------------aabbbb. bbaa. aaacccaa.   aa.   ccaaacaa. aabb. aa-------yyyyyyyo**********************oyyyyyyyyyyyyyyyC",
		"C---------------aabb. aaaa. bbacccaa. bbaabb. ccccccbb. aaaaaa---------yyyyyyo***=********************oyyyyyyyyyyyyyyC",
		"C-----------------aabbbbaabbbbaaaaaa. bbaabb. aaaaaabbbbaabbaa---------yyyyyo***//**************}}****oyyyyyyyyyyyyyyC",
		"C-----------------aabbbbaabb. ccaaaa. aaaaaa. aaaabb. bbaabbaa---------yyyyo***||**************||*****oyyyyyyyyyyyyyyC",
		"C-------------------aa.  aaaa. ccccccbbaaaaaabb.       aaaa. aa--------yyyyo***//***************//*****oyyyyyyyyyyyyyC",
		"C-------------------aabbaaaabbccccccbbaaaaaabb. aabbbbaaaabbaa---------yyo****||**************//*****oyyyyyyyyyyyyyyyC",
		"C---------------------aaaaaaaacccccc. bbaabb.   aabbaaaaaaaa-----------yo*****//**************}}****oyyyyyyyyyyyyyyyyC",
		"C---------------------aabbaaaaaaccaaaa. aa.   aaaaaaaaaabbaa-----------yyooooo||***************}}ooooyyyyyyyyyyyyyyyyC",
		"C---------------------aabb. aaaaaaaaaaaaaaaaaaaaaaaaaaaabbaa-----------yyyyyyy//***************||yyyyyyyyyyyyyyyyyyyyC",
		"C-----------------------aabbaaaaaaaaaaaaaaaaaaaaaaaa. bbaa-------------zzzzzzz||**************//zzzzzzzzzzzzzzzzzzzzzC",
		"C-----------------------aabbbbaaaaaaaaaaaaaaaaaaaaaabbbbaa-------------zzzzzz//***************}}zzzzzzzzzzzzzzzzzzzzzC",
		"C-------------------------aabb. aaaaaa aaaaaaaaaaaccbbaa---------------zzzzzz||**//44444444\\***}}zzzzzzzzzzzzzzzzzzzzC",
		"C---------------------------aabb. aaaaaaaaaaaaaaccccaa-----------------zzzzzz||**//zzzzzzzz\\***//zzzzzzzzzzzzzzzzzzzzC",
		"C-----------------------------aabbaaaa. aa. aa. cccc-------------------zzzzzz||*//zzzzzzzzzz\\**||zzzzzzzzzzzzzzzzzzzzC",
		"C-----------------------------aabbbb.   aa.   bbcccc-------------------zzzzzz@@@@zzzzzzzzzzzz@@@@@@zzzzzzzzzzzzzzzzzzC",
		"C-------------------------------aabbbb. aa. bbbbcccc-------------------zz@@@@@@@@zzzzzzzzzzzz@@@@@@@@@zzzzzzzzzzzzzzzC",
		"C---------------------------------aabbbbaabbbbaacccc-------------------zz@@@@@@@@zzzzzzzzzzzz@@@@@@@@@zzzzzzzzzzzzzzzC",

	};

char covid[30][128] = {
". @@@@@@@.  @@@@@@.  @@@. @@@. @@@. @@@@@@@.             @@@.  @@@@@@.",
".@@@@@@@@. @@@@@@@@. @@@. @@@. @@@. @@@@@@@@.           @@@@. @@@@@@@@.",
".!@@.      @@!. @@@. @@!. @@@. @@!. @@!. @@@.          @@@!!. @@!. @@@.",
".!@!.      !@!. @!@. !@!. @!@. !@!. !@!. @!@.            !@!. !@!. @!@.",
".!@!.      @!@. !@!. @!@. !@!. !!@. @!@. !@!. @!@!@!@!@. @!@. !!@!!@!!.",
".!!!.      !@!. !!!. !@!. !!!. !!!. !@!. !!!. !!!@!@!!!. !@!.   !!@!!!.",
".:!!.      !!:. !!!. :!:. !!:. !!:. !!:. !!!.            !!:.      !!!.",
".:!:.      :!:. !:!.  ::!!:!.  :!:. :!:. !:!.            :!:.      !:!.",
". :::.:::  :::::.::.   ::::.    ::.  ::::.::.            :::. :::::.::.",
". ::.::.:   :.:. :.     :.     :.   ::.:. :.              ::.  :.:. :. ",
												};

char intro[29][256]={

        "C---------aabbbb. bbbb.           bb.     aaaaaabbbb. bbbbaa---XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
		"C---------aabb.   bb.             aa.             bb.   bbaa--XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
		"C---------aabb.   bb.             aa.             bb.   bbaa--XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
		"C---------aabb.   bb.             aa.                   bbaa-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
		"C---------aabb.     bb.           aa.           bb.     bbaa--XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
		"C---------aabb.     bb.           aa.           bb.     bbaa-xxxxxxxMMMMMMMMMMMMMMMMMMMMMMMMMMM,xxxxxxxxxC",
		"C-----------aabb. bbbb.           aa.           bbbb. bbaa---xxxxxxxMMM*7???????+I7I7III777NMMM,xxxxxxxxxC",
		"C-----------aabb. bb.             aa.             bb. bbaa-xxxxxxxxxMMM****************** *7IDM,xxxxxxxxxC",
		"C-------------aa. aa. aaaabb.     aa.     bbaaaa. aa. aa--xxxxxxxxxxMMM***,****************7IDM,xxxxxxxxxC",
		"C-------------aa. aa. aaaaaabb.   aa.   bbccccaa. aa. aa---xxxxxxxxxxMMMMM*$7$7$7$I?II7I7MMMMMMMMMxxxxxxxC",
		"C-------aaaaaabbbbaa. aaaccaaa.   ccccccccaaacccccccccbbaa--yyyyyyyyyMMMMM*??+????I7I7IIIMMMMMMMMMyyyyyyyC",
		"C-------aabbbb. bbaa. aaacccaa.   aa.   ccaaacaa. aabb. aa--yyyyyyyyyyMMM***************IOMMM,yyyNMyyyyyyC",
		"C---------aabb. aaaa. bbacccaa. bbaabb. ccccccbb. aaaaaa---yyyyyyyyyyyMMM**************,IOMMyyyyyNMyyyyyyC",
		"C-----------aabbbbaabbbbaaaaaa. bbaabb. aaaaaabbbbaabbaa----yyyyyyyyyyMMM*Z7Z7$7$7?I?7IIMMMMyyyyyNMyyyyyyC",
		"C-----------aabbbbaabb. ccaaaa. aaaaaa. aaaabb. bbaabbaa----yyyyyyyyyyyMMM*???+??+II777I?MMMMyyyMMyyyyyYyC",
		"C------------aa.  aaaa. ccccccbbaaaaaabb.       aaaa. aa-zzzzzzzzzzzzzzMMMM*** *****,I7MMMMMMMMMzzzzzzzzZC",
		"C-------------aabbaaaabbccccccbbaaaaaabb. aabbbbaaaabbaa---zzzzzzzzzzzzzzzMM*********,I7M?zzzzzzzzzzzzzzzC",
		"C---------------aaaaaaaacccccc. bbaabb.   aabbaaaaaaaa--------zzzzzzzzzzzzMM*********,MMM?zzzzzzzzzzzzzzzC",
		"C---------------aabbaaaaaaccaaaa. aa.   aaaaaaaaaabbaa-------zzzzzzzzzzzzzMM*********,MMM?zzzzzzzzzzzzzzzC",
		"C---------------aabb. aaaaaaaaaaaaaaaaaaaaaaaaaaaabbaa-------zzzzzzzzzzzzzMMMMMMMMMMMMMMM?zzzzzzzzzzzzzzzC",
		"C-----------------aabbaaaaaaaaaaaaaaaaaaaaaaaa. bbaa--------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C-----------------aabbbbaaaaaaaaaaaaaaaaaaaaaabbbbaa-------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C-------------------aabb. aaaaaa aaaaaaaaaaaccbbaa---------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C---------------------aabb. aaaaaaaaaaaaaaccccaa------------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C-----------------------aabbaaaa. aa. aa. cccc-------------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C-----------------------aabbbb.   aa.   bbcccc------------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C-------------------------aabbbb. aa. bbbbcccc--------------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",
		"C---------------------------aabbbbaabbbbaacccc---------------zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzC",

};



char soda[64][256] = {
"      ----------o       o       o       o",
"      ------------o o     o         o ",
"      -------------------------- ",
"      ------------MMMMMMMMMMMMMM ",
"      ------------MMMMMMMMMMMMMM   ",
"      ----------OMMMMMMMMMMMMMMMMM ",
"      ----------OMMMMMMMMMMMMMMMMM  ",
"      ----------OMMMMMMMMMMMMMMMMM ",
"      ----------OMMMMMMMMMMMMMMMMM ",
"      ------------MMN........,MM ",
"      ------------MMN........,MM ",
"               MMM   .........  NMM ",
"      ---------MMM...++I:7+.....DMM ",
"      ------MMMMMM777..,=.,=?,=+...DMM ",
"      ------MMMMMMIII..,+.,=+.=?...DMM. ",
"      ---?IIMMM88O~~~...,..:~.:~...DMM7II ",
"      ---DMMMMM77?............... .DMMMMM, ",
"      ---DMMMMMII?                .DMMMMM, ",
"      ---DMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM, ",
"      ---DMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,  ",
"      ---DMM...........,MMMMMN       .DMM, ",
"      ---DMM...........,MMMMMN       .DMM, ",
"      ---DMM........,MMD.....        .DMM, ",
"      ---DMM........,MMD.....        .DMM, ",
"      ---DMM...........,MMMMMN       .DMM,  ",
"      ---DMM...........,MMMMMN       .DMM, ",
"      ---DMM..............,MMN       .DMM,  ",
"      ---DMM..............,MMN       .DMM, ",
"      ---DMM........,MMMMMD..        .DMM, ",
"      ---DMM........,MMMMMD..        .DMM,  ",
"      ---DMM.................        .DMM,  ",
"      ---DMM.................        .DMM,  ",
"      ---DMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,   ",
"      ---DMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,   ",
"      ---DMMMMM....................NMMMMM,   ",
"      ---DMMMMM..............     .DMMMMM,   ",
"      ---NMMMMM....................DMMMMM,   ",
"      ------MMMMMMMMMMMMMMMMMMMMMMMMMM,      ",
"      ------MMMMMMMMMMMMMMMMMMMMMMMMMM,      "

};

char syrup[64][256]=
{
   "                  NMMMMMMMMMMMMMM           ",
   "                  NMMMMMMMMMMMMMM             ",
   "                ....................      ",
   "                ....................        ",
   "                ....................          ",
   "                    NMD  .  .MM                 ",
   "                    NMD.    .MM                   ",
   "                    NMD     .MM                ",
   "                  NM,..     ...MM.               ",
   "                  NM,.        .MM           ",
   "                MMMMMMMMMMMMMMMMMMM,          ",
   "                MM$7..  ,I?????I?MM,            ",
   "                MM$7.   ,I+?+??IIMM,              ",
   "            MMMM. I7..  ,I+?+??I?MMMMMM?.           ",
   "           MMM7?II777I77II++++?I?7?7INMMO             ",
   "           MMMIIII7I77IIII+?+??I?7I77NMMO               ",
   "           MMM7III77777II7+++??I?7I77NMMO                ",
   "           MMMMMMMMMMMMMMMMMMMM..MMMMMMMO             ",
   "           MMMMMMMMMMMMMMMMMMMM .MMMMMMMO              ",
   "           MMMMMMMMMMMMMMMMMMMM .MMMMMMMO               ",
   "            MMMMMMMMMMMMMMMMMMMMM..NMMMI.               ",
   "            MMMMMMMMMMMMMMMMMMMMM. DMMM?.              ",
   "            MMMMMMMMMMMMMMMMMMMMM. DMMM?.            ",
   "            MMMMII777777II+?+??I?. MMMMI.             ",
   "                MMMMMMMMMMMMMMMMMMM,               ",
   "                MMMMMMMMMMMMMMMMMMM,               ",
   "                MMMMMMMMMMMMMMMMMMM,     "

};

char ice[64][256]=
{



 "                        DMMMMMMD                  ",
 "                   NMMMMMMMMMMMMMMMMD             ",
 "                   DMMMMNNNNNNNNMMMMD              ",
 "               DMMMM,................,MMMMN        ",
 "               DMMMMZII+?III+?77I+IIIIMMMMN         ",
 "          DMMMM,.  .......,........... .NMMMM       ",
 "          DMM..NMMMNNNN.........,NNNNMMM,....MMN    ",
 "          DMN$IMMMMMMMN.........,NMMMMMM+?IZIMMD     ",
 "          DMN....  .NMMMMNNNNNNNMMM.   ......MMD      ",
 "          DMM+?..  .NMMMMMMMMMMMMMM.   .III+?MMD       ",
 "          DMN. ............,MM,..............MMD     ",
 "          DMN. 7II+?III+?77IMM$I?..II7+II7I??MMD   ",
 "          DMN. ............,MM,..............MMD    ",
 "          DMM+I7II??. .+II7IMMZI7+I7I7??...??MMD    ",
 "          DMN..............,MM,.......... ...MMD    ",
 "          DMN$I$II$I~ .$I$?IMM??IZ?I?I$I: .$IMMD    ",
 "          DMN...............MM,.......... ...MMD    ",
 "          DMMMMMMN.........,MM,....... .NMMMM       ",
 "          DMMMMMMN..III+?77IMMZ7I+?7I? .NMMMM       ",
 "               DMMMM,......,MM,......,MMMMN          ",
 "                    DMMMMMMMMMMMMMMMMN              ",
 "                    NMMMMMMMMMMMMMMMMD              ",
 "                           ,MMMMN                   ",
 "                           ,MMMMD                   "
};

char cup[64][256]=
{
   "        MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMD         ",
   "        MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMD         ",
   "        MMMM.,77I?II?II?I7+I77?77?7I?I7?I7IMMMMMD         ",
   "        MMMM...............................777MMD         ",
   "        MMMM..............................,7I7MMD         ",
   "        MMMM.....,.........................7IIMMD         ",
   "        MMMMMMM.,?I7??I?I7+?77?77?II+MMMMMMMMMMMMMMD      ",
   "        MMMMMMM.,?II+?I?I7?I77?7I+7?+MMMMMMMMMMMMMMD      ",
   "        MMMMMMM.,?II+?I?I7??77?77?7I?MMMMMMMMMMMMMMN      ",
   "           MMMM......................I7+MMMMMN     ,MM+   ",
   "           MMMM......................II+MMMMMN     ,MM+   ",
   "           MMMM......................II?MMMM       ,MM+   ",
   "           MMMM..+II+?I??7+?77?7I?II+MMMMMMM       ,MM+   ",
   "           MMMM.,?II+?I?I7?I77?7I?7I?MMMMMMM       ,MM+   ",
   "           MMMM,,?II?I7?I7+I7I?77+7I?MMMMMMM       :MM+   ",
   "             ,MMMMMD..............77?MMMMMMMMMMMMMMD      ",
   "             ,MMMMMD... ..........II+MMMMMMMMMMMMMMD      ",
   "                ,MMN..............7I+MMM  ",
   "                ,MMM??I??7+I77?7I?MMMMMM  ",
   "                ,MMN..............NMMMMM  ",
   "                ,MMN..............NMMMMM  ",
   "                ,MMMMMMMMMMMMMMMMMMMMMMM  ",
   "                ,MMMMMMMMMMMMMMMMMMMMMMM  "

};

char ssoda[64][256]=
{

" @@@@@@    @@@@@@   @@@@@@@    @@@@@@   ",
"@@@@@@@   @@@@@@@@  @@@@@@@@  @@@@@@@@  ",
"!@@       @@!  @@@  @@!  @@@  @@!  @@@  ",
"!@!       !@!  @!@  !@!  @!@  !@!  @!@  ",
"!!@@!!    @!@  !@!  @!@  !@!  @!@!@!@!  ",
" !!@!!!   !@!  !!!  !@!  !!!  !!!@!!!!  ",
"     !:!  !!:  !!!  !!:  !!!  !!:  !!!  ",
"    !:!   :!:  !:!  :!:  !:!  :!:  !:!  ",
":::: ::   ::::::::  ::::::::  ::   :::  ",
":: : :     : :  :   :::::::    :   : :  "
};

char ssyrup[64][256]=
{
" @@@@@@   @@@ @@@  @@@@@@@   @@@  @@@  @@@@@@@   ",
"@@@@@@@   @@@ @@@  @@@@@@@@  @@@  @@@  @@@@@@@@  ",
"!@@       @@! !@@  @@!  @@@  @@!  @@@  @@!  @@@  ",
"!@!       !@! @!!  !@!  @!@  !@!  @!@  !@!  @!@  ",
"!!@@!!     !@!@!   @!@!!@!   @!@  !@!  @!@@!@!   ",
" !!@!!!     @!!!   !!@!@!    !@!  !!!  !!@!!!    ",
"     !:!    !!:    !!: :!!   !!:  !!!  !!:       ",
"    !:!     :!:    :!:  !:!  :!:  !:!  :!:       ",
":::: ::      ::    ::   :::  ::::: ::   ::       ",
":: : :       :      :   : :   : :  :    :        "
};


char iice[64][256]=
{
"@@@   @@@@@@@  @@@@@@@@  ",
"@@@  @@@@@@@@  @@@@@@@@  ",
"@@!  !@@       @@!       ",
"!@!  !@!       !@!       ",
"!!@  !@!       @!!!:!    ",
"!!!  !!!       !!!!!:    ",
"!!:  :!!       !!:       ",
":!:  :!:       :!:       ",
" ::   ::: :::   :: ::::  ",
":     :: :: :  : :: ::   "
};

char ccup[64][256]=
{
" @@@@@@@  @@@  @@@  @@@@@@@   ",
"@@@@@@@@  @@@  @@@  @@@@@@@@  ",
"!@@       @@!  @@@  @@!  @@@  ",
"!@!       !@!  @!@  !@!  @!@  ",
"!@!       @!@  !@!  @!@@!@!   ",
"!!!       !@!  !!!  !!@!!!    ",
":!!       !!:  !!!  !!:       ",
":!:       :!:  !:!  :!:       ",
" ::: :::  ::::: ::   ::       ",
" :: :: :   : :  :    :      "
};

char covidsoda[64][256]=
{

"..@@@@@@@.  @@@@@@.  @@@. @@@. @@@. @@@@@@@.     @@@. @@@.  @@@@@@.      @@@@@@.   @@@@@@.  @@@@@@@.   @@@@@@.  ",
".@@@@@@@@. @@@@@@@@. @@@. @@@. @@@. @@@@@@@@.    @@@. @@@. @@@@@@@.     @@@@@@@.  @@@@@@@@. @@@@@@@@. @@@@@@@@. ",
".!@@.      @@!. @@@. @@!. @@@. @@!. @@!. @@@.    @@!. @@@. !@@.         !@@.      @@!. @@@. @@!. @@@. @@!. @@@. ",
".!@!.      !@!. @!@. !@!. @!@. !@!. !@!. @!@.    !@!. @!@. !@!.         !@!.      !@!. @!@. !@!. @!@. !@!. @!@. ",
".!@!.      @!@. !@!. @!@. !@!. !!@. @!@. !@!.    @!@. !@!. !!@@!!.      !!@@!!.   @!@. !@!. @!@. !@!. @!@!@!@!. ",
".!!!.      !@!. !!!. !@!. !!!. !!!. !@!. !!!.    !@!. !!!.  !!@!!!.      !!@!!!.  !@!. !!!. !@!. !!!. !!!@!!!!. ",
".:!!.      !!:. !!!. :!:. !!:. !!:. !!:. !!!.    :!:. !!:.      !:!.         !:!. !!:. !!!. !!:. !!!. !!:. !!!. ",
".:!:.      :!:. !:!.  ::!!:!.  :!:. :!:. !:!.     ::!!:!.      !:!.         !:!.  :!:. !:!. :!:. !:!. :!:. !:!. ",
"..:::.:::. ::::: ::.   ::::.    ::.  ::::.::.      ::::.   ::::.::.     ::::.::.  ::::: ::.  ::::.::. ::.  :::. ",
"..::.::.:.  :.:. :.     :.     :.   ::.:. :.        :.     ::.:.:.      ::.:.:.    :.:. :.  ::.:. :.   :.  : :. "

};
