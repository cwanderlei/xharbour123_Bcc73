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
#DEFINE LISTA_ORIGEM_PRODUTO  {'0-Nacional, exceto as indicadas nos códigos 3 a 5',;
				                   '1-Estrangeira - Importação direta, exceto a indicada no código 6',;
									    '2-Estrangeira - Adquirida no mercado interno, exceto a indicada no código 7',;
									    '3-Nacional, mercadoria ou bem com Conteúdo de Importação superior a 40% (quarenta por cento)',;
									    '4-Nacional, cuja produção tenha sido feita em conformidade com os processos produtivos básicos de que tratam o Decreto-Lei nº 288/67, e as Leis nºs 8.248/91, 8.',;
									    '5-Nacional, mercadoria ou bem com Conteúdo de Importação inferior ou igual a 40% (quarenta por cento)',;
									    '6-Estrangeira - Importação direta, sem similar nacional, constante em lista de Resolução CAMEX',;
									    '7-Estrangeira - Adquirida no mercado interno, sem similar nacional, constante em lista de Resolução CAMEX?',;
									    '8-Nacional, mercadoria ou bem com Conteúdo de Importação superior a 70% (setenta por cento)'}

#DEFINE aCst1 {'01','02','03','04','05','06','07','08','09','49'}
#DEFINE aCst  {'01 - Op. Tributável com Alíquota Básica',;
				   '02 - Op. Tributável com Alíquota Diferenciada',;
				   '03 - Op. Tributável com Alíquota por Unidade de Medida de Produto',;
				   '04 - Op. Tributável Monofásica - Revenda a Alíquota Zero',;
				   '05 - Op. Tributável por Substituição Tributária',;
				   '06 - Op. Tributável a Alíquota Zero',;
				   '07 - Operação Isenta da Contribuição',;
				   '08 - Operação sem Incidência da Contribuição',;
				   '09 - Operação com Suspensão da Contribuição',;
				   '49 - Outras Operações de Saída'}


#DEFINE aTribut2 {'TR','IS','NT','ST'}
#DEFINE aTribut {'Tributado','Isento','Não Tributado','Substituição'}
                                      
#DEFINE aTpProd {"Medicamento","Perfumaria","Outros"}

#DEFINE aUnidade {'UN','CX','AM','KG','PC','TB','TO','MT','LT','FR'}

#DEFINE aUnidadeSN {'01 - Caixa','02 - Frasco'}

#DEFINE aSimNao {'Sim','Não'}

#DEFINE aCDST {'00','10','20','30','40','41','50','51','60','70','90'}

#DEFINE aLista {'Positiva','Negativa',''}

#DEFINE aTpDesc {'Especial','Normal'}

#DEFINE aCurva {'A','B','C'}

#DEFINE aTpPreco {'Preço de Compra','Preço Médio','Preço da Últ. Compra'}

#DEFINE aPortaria {'A1','A2','A3','AM','B1','B2','C1','C2','C3','C4','C5',''}

#DEFINE aTarja {"Preta","Vermelha",""}

#DEFINE aSituacao {"Liberado","Monitorado"}

#DEFINE aInativo {"Ativo","Inativo"}

#DEFINE aImpDanfe {"1-Direto","2-Não Imprime","3-Pergunta"}

#DEFINE aValores { "01ª -             0.00 até   180000.00"	,"02ª -   180000.01 até   360000.00"	,;
  		 	  	 		 "03ª -   360000.01 até   540000.00"		,"04ª -   540000.01 até   720000.00" 	,;
				 	    "05ª -   720000.01 até   900000.00"		,"06ª -   900000.01 até 1080000.00"		,;
				 	    "07ª - 1080000.01 até 1260000.00"			,"08ª - 1260000.01 até 1440000.00"		,;
		  	 	 	    "09ª - 1440000.01 até 1600000.00"			,"10ª - 1600000.01 até 1800000.00" 		,;
				 	    "11ª - 1800000.01 até 1980000.00"			,"12ª - 1980000.01 até 2160000.00"		,;
				 	    "13ª - 2160000.01 até 2340000.00"			,"14ª - 2340000.01 até 2520000.00"		,;
			  	 	    "15ª - 2520000.01 até 2700000.00"			,"16ª - 2700000.01 até 2880000.00"		,;
				 	    "17ª - 2880000.01 até 3060000.00"			,"18ª - 3060000.01 até 3240000.00"		,;
				 	    "19ª - 3240000.01 até 3420000.00"			,"20ª - 3240000.01 até 3600000.00" ,""  }


#DEFINE RGB( nR,nG,nB ) ( nR + ( nG * 256 ) + ( nB * 256 * 256 ) )


#xcommand DEFAULT <uVar1> := <uVal1> ;
             [, <uVarN> := <uValN> ] ;
          => ;
          <uVar1> := IIf( <uVar1> == nil, <uVal1>, <uVar1> ) ;;
          [ <uVarN> := IIf( <uVarN> == nil, <uValN>, <uVarN> ); ]


