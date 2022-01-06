#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{   
  std::cout << R"(                                                                                      
  `._`-._                                           _,-'_,'
     `._ `-._                                   _,-' _,'
        `._  `-._        __.-----.__        _,-'  _,'
           `._   `#==="""           """===#'   _,'
              `._/)  ._               _.  (\_,'
               )*'     **.__     __.**     '*( 
               #  .==..__  ""   ""  __..==,  # 
              #   `"._(_).       .(_)_."'     # )" << '\n';
    std::cout << "You are being chased by daemons in the dark.....\n"; 
    std::cout << ".........You must leave this place............\n";
    std::cout << "Crack the code to escape this hellish nightmare...\n";
    std::cout << "this is a level " << Difficulty <<" door\n";
    }

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    //declared variables 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
 
    const int CodeSum = CodeA + CodeB + CodeC; 
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    //print sum and product to the terminal 
    std::cout << "+ There are three digits to the code....you must hurry!\n";
    std::cout << "+ The code adds up to: " << CodeSum << std::endl;
    std::cout << "+ The code multiplies to: " << CodeProduct << std::endl;
    
    //store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //check if the players guess is correct 
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "The door opens suddenly, and immediately shuts behind you,\n";
        std::cout << "..Your daemons slam into the door!!.....\n";
        std::cout << "Run to The next door!!!\n\n\n";
    return true;
    }
    else
    {
        std::cout << "The panel explodes,\n";
        std::cout << "Your daemons tear you apart from the inside\n";
        std::cout << R"(                                        
               ...                            
             ;::::;                           
           ;::::; :;                          
         ;:::::'   :;                         
        ;:::::;     ;.                        
       ,:::::'       ;           OOO\         
       ::::::;       ;          OOOOO\        
       ;:::::;       ;         OOOOOOOO       
      ,;::::::;     ;'         / OOOOOOO      
    ;:::::::::`. ,,,;.        /  / DOOOOOO    
  .';:::::::::::::::::;,     /  /     DOOOO   
 ,::::::;::::::;;;;::::;,   /  /        DOOO  
;`::::::`'::::::;;;::::: ,#/  /          DOOO 
:`:::::::`;::::::;;::: ;::#  /            DOOO
::`:::::::`;:::::::: ;::::# /              DOO
`:`:::::::`;:::::: ;::::::#/               DOO
 :::`:::::::`;; ;:::::::::##                OO
 ::::`:::::::`;::::::::;:::#                OO
 `:::::`::::::::::::;'`:;::#                O 
  `:::::`::::::::;' /  / `:# )" << '\n';                 
  
    
    return false;
    }
}

int main() 
{
  srand(time(NULL));
  int LevelDifficulty = 1;
  int const MaxDifficulty = 10;
   
    while (LevelDifficulty <= MaxDifficulty) // loop game untill all levels complete
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer

      if (bLevelComplete)
      {
        ++ LevelDifficulty;
      }
    }
  std::cout << R"(       
           ;M;.           ,      ,           ;SMM;
          ;;Mm;         ,;  ____  ;,         ;SMM;
         ;;;MM;        ; (.MMMMMM.) ;       ,SSMM;;
       ,;;;mMp'        l  ';mmmm;/  j       SSSMM;;
     .;;;;;MM;         .\,.mmSSSm,,/,      ,SSSMM;;;
    ;;;;;;mMM;        .;MMmSSSSSSSmMm;     ;MSSMM;;;;
   ;;;;;;mMSM;     ,_ ;MMmS;;;;;;mmmM;  -,;MMMMMMm;;;;
  ;;;;;;;MMSMM;     \"*;M;( ( '') );m;*"/ ;MMMMMM;;;;;,
 .;;;;;;mMMSMM;      \(@;! _     _ !;@)/ ;MMMMMMMM;;;;;,
 ;;;;;;;MMSSSM;       ;,;.*o*> <*o*.;m; ;MMMMMMMMM;;;;;;,
.;;;;;;;MMSSSMM;     ;Mm;           ;M;,MMMMMMMMMMm;;;;;;.
;;;;;;;mmMSSSMMMM,   ;Mm;,   '-    ,;M;MMMMMMMSMMMMm;;;;;;;
;;;;;;;MMMSSSMMMMMMMm;Mm;;,  ___  ,;SmM;MMMMMMSSMMMM;;;;;;;;
;;'";;;MMMSSSSMMMMMM;MMmS;;,  "  ,;SmMM;MMMMMMSSMMMM;;;;;;;;.
!   ;;;MMMSSSSSMMMMM;MMMmSS;;._.;;SSmMM;MMMMMMSSMMMM;;;;;;;;;
    ;;;;*MSSSSSSMMMP;Mm*"'q;'   `;p*"*M;MMMMMSSSSMMM;;;;;;;;;
    ';;;  ;SS*SSM*M;M;'     `-.        ;;MMMMSSSSSMM;;;;;;;;;,
     ;;;. ;P  `q; qMM.                 ';MMMMSSSSSMp' ';;;;;;;
     ;;;; ',    ; .mm!     \.   `.   /  ;MMM' `qSS'    ';;;;;;
     ';;;       ' mmS';     ;     ,  `. ;'M'   `S       ';;;;;
      `;;.        mS;;`;    ;     ;    ;M,!     '        ';;;;
       ';;       .mS;;, ;   '. o  ;   oMM;                ;;;;
        ';;      MMmS;; `,   ;._.' -_.'MM;                 ;;;
         `;;     MMmS;;; ;   ;      ;  MM;                 ;;;
           `'.   'MMmS;; `;) ',    .' ,M;'                 ;;;
              \    '' ''; ;   ;    ;  ;'                   ;;
               ;        ; `,  ;    ;  ;                   ;;
                        |. ;  ; (. ;  ;      _.-.         ;;
           .-----..__  /   ;  ;   ;' ;\  _.-" .- `.      ;;
         ;' ___      `*;   `; ';  ;  ; ;'  .-'    :      ;
         ;     """*-.   `.  ;  ;  ;  ; ' ,'      /       |
         ',          `-_    (.--',`--'..'      .'        ',
           `-_          `*-._'.\\\;||\\)     ,'
              `"*-._        "*`-ll_ll'l    ,'
                 ,==;*-._           "-.  .'
              _-'    "*-=`*;-._        ;'
            ."            ;'  ;"*-.    `
            ;   ____      ;//'     "-   `,
            `+   .-/                 ".\\;
              `*" /                    "' )" << '\n'; 
  std::cout << "Well Done You Have Escaped!";           
 return 0;
}