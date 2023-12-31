#include "Directry.ch"
#include "FILEIO.CH"
#include 'common.ch'

*-* Cores do browser *-*
#define x_BLUE       16711680
#define x_DARKBLUE   10027008
#define x_WHITE      16777215
#define x_CYAN       16776960
#define x_BLACK             0
#define x_RED             255
#define x_GREEN         32768
#define x_GRAY        8421504
#define x_YELLOW        65535
#define x_ORANGE        33023
#define x_LIGHT_GRAY 13224393 



#DEFINE Aspa  CHR(39)
#DEFINE ASPA  CHR(39)
#DEFINE aspa  CHR(39)

#define LF chr(13)+chr(10)

#DEFINE LISTA_ORIGEM_PRODUTO1 {'0','1','2','3','4','5','6','7','8'}
#DEFINE LISTA_ORIGEM_PRODUTO  {'0-Nacional, exceto as indicadas nos c�digos 3 a 5',;
				                   '1-Estrangeira - Importa��o direta, exceto a indicada no c�digo 6',;
									    '2-Estrangeira - Adquirida no mercado interno, exceto a indicada no c�digo 7',;
									    '3-Nacional, mercadoria ou bem com Conte�do de Importa��o superior a 40% (quarenta por cento)',;
									    '4-Nacional, cuja produ��o tenha sido feita em conformidade com os processos produtivos b�sicos de que tratam o Decreto-Lei n� 288/67, e as Leis n�s 8.248/91, 8.',;
									    '5-Nacional, mercadoria ou bem com Conte�do de Importa��o inferior ou igual a 40% (quarenta por cento)',;
									    '6-Estrangeira - Importa��o direta, sem similar nacional, constante em lista de Resolu��o CAMEX',;
									    '7-Estrangeira - Adquirida no mercado interno, sem similar nacional, constante em lista de Resolu��o CAMEX?',;
									    '8-Nacional, mercadoria ou bem com Conte�do de Importa��o superior a 70% (setenta por cento)'}

#DEFINE aCst1 {'01','02','03','04','05','06','07','08','09','49'}
#DEFINE aCst  {'01 - Op. Tribut�vel com Al�quota B�sica',;
				   '02 - Op. Tribut�vel com Al�quota Diferenciada',;
				   '03 - Op. Tribut�vel com Al�quota por Unidade de Medida de Produto',;
				   '04 - Op. Tribut�vel Monof�sica - Revenda a Al�quota Zero',;
				   '05 - Op. Tribut�vel por Substitui��o Tribut�ria',;
				   '06 - Op. Tribut�vel a Al�quota Zero',;
				   '07 - Opera��o Isenta da Contribui��o',;
				   '08 - Opera��o sem Incid�ncia da Contribui��o',;
				   '09 - Opera��o com Suspens�o da Contribui��o',;
				   '49 - Outras Opera��es de Sa�da'}


#DEFINE aTribut2 {'TR','IS','NT','ST'}
#DEFINE aTribut {'Tributado','Isento','N�o Tributado','Substitui��o'}
                                      
#DEFINE aTpProd {"Medicamento","Perfumaria","Outros"}

#DEFINE aUnidade {'UN','CX','AM','KG','PC','TB','TO','MT','LT','FR'}

#DEFINE aUnidadeSN {'01 - Caixa','02 - Frasco'}

#DEFINE aSimNao {'Sim','N�o'}

#DEFINE aCDST {'00','10','20','30','40','41','50','51','60','70','90'}

#DEFINE aLista {'Positiva','Negativa',''}

#DEFINE aTpDesc {'Especial','Normal'}

#DEFINE aCurva {'A','B','C'}

#DEFINE aTpPreco {'Pre�o de Compra','Pre�o M�dio','Pre�o da �lt. Compra'}

#DEFINE aPortaria {'A1','A2','A3','AM','B1','B2','C1','C2','C3','C4','C5',''}

#DEFINE aTarja {"Preta","Vermelha",""}

#DEFINE aSituacao {"Liberado","Monitorado"}

#DEFINE aInativo {"Ativo","Inativo"}

#DEFINE aImpDanfe {"1-Direto","2-N�o Imprime","3-Pergunta"}

#DEFINE aValores { "01� -             0.00 at�   180000.00"	,"02� -   180000.01 at�   360000.00"	,;
  		 	  	 		 "03� -   360000.01 at�   540000.00"		,"04� -   540000.01 at�   720000.00" 	,;
				 	    "05� -   720000.01 at�   900000.00"		,"06� -   900000.01 at� 1080000.00"		,;
				 	    "07� - 1080000.01 at� 1260000.00"			,"08� - 1260000.01 at� 1440000.00"		,;
		  	 	 	    "09� - 1440000.01 at� 1600000.00"			,"10� - 1600000.01 at� 1800000.00" 		,;
				 	    "11� - 1800000.01 at� 1980000.00"			,"12� - 1980000.01 at� 2160000.00"		,;
				 	    "13� - 2160000.01 at� 2340000.00"			,"14� - 2340000.01 at� 2520000.00"		,;
			  	 	    "15� - 2520000.01 at� 2700000.00"			,"16� - 2700000.01 at� 2880000.00"		,;
				 	    "17� - 2880000.01 at� 3060000.00"			,"18� - 3060000.01 at� 3240000.00"		,;
				 	    "19� - 3240000.01 at� 3420000.00"			,"20� - 3240000.01 at� 3600000.00" ,""  }


#DEFINE RGB( nR,nG,nB ) ( nR + ( nG * 256 ) + ( nB * 256 * 256 ) )


#xcommand DEFAULT <uVar1> := <uVal1> ;
             [, <uVarN> := <uValN> ] ;
          => ;
          <uVar1> := IIf( <uVar1> == nil, <uVal1>, <uVar1> ) ;;
          [ <uVarN> := IIf( <uVarN> == nil, <uValN>, <uVarN> ); ]


