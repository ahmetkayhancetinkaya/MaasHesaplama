void isci_tbl()
	{
	struct kriterler{
		int diploma;
		int cocuk_say;
		int medeni_hal;
		int rapor_say;
		int mesai;
	}kategori;
	
	int i=5000;
	int evlilik;
	int cs;
	int gelmedigi_gun;
	int alinan_rap;
	int mesai_gunu;
		
	 printf("\n\n�scinin diploma turu nedir :  1.Ilkokul 2.Ortaokul 3.Lise 4.Onlisans 5.Lisans");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.diploma);
	 
	 switch (kategori.diploma)
	 {
	 	case 1: i-=((i*0.5)/100); printf("----Ilkokul diplomasi kesintisi yeni maas = %d",i); break;
	 	case 2: i-=((i*0.3)/100); printf("----Ortaokul diplomasi kesintisi yeni maas = %d",i); break;
	 	case 3: i+=((i*0.3)/100); printf("++++Lise diplomasi eklentisi yeni maas = %d",i); break;
	 	case 4: i+=((i*0.5)/100); printf("++++Onlisans diplomasi eklentisi yeni maas = %d",i); break;
	 	case 5: i+=((i*0.7)/100); printf("++++Lisans diplomasi eklentisi yeni maas = %d",i); break;
	 }
	 
	 
	 printf("\n\nIscinin kac cocugu var? :  1 / 2 / 3 / 4.(3+) ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.cocuk_say);
	
	 switch (kategori.cocuk_say)
	 {
	 	case 1: i+=100; printf("++++1 cocuk eklentisi yeni maas = %d",i); break;
	 	case 2: i+=150; printf("++++2 cocuk eklentisi yeni maas = %d",i); break;
	 	case 3: i+=250; printf("++++3 cocuk eklentisi yeni maas = %d",i); break;
	 	case 4:
		 {
		  printf("Iscinin kac cocugu var? = "); 
	      scanf("%d",&cs);	
	      i+=(150*cs);
	      printf("++++ %d cocuk eklentisi yeni maas = %d",cs,i);
		  } 
		  break;
	 	
	 }
	 
	 printf("\n\nIscinin medeni hali nedir:  1.Bekar 2.Evli ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.medeni_hal);
	 
	 switch (kategori.medeni_hal)
	 {
	 	case 1: i+=250; printf("++++Bekarlik eklentisi yeni maas = %d",i); break;
	 	case 2:
		 {
	 		printf("Es calisiyor mu?: 1.Evet 2.Hayir"); 
	 		printf("\nGirisiniz: ");
	 		scanf("%d",&evlilik);
	 		if (evlilik == 1 )
	 		{
	 		 i-=50;
	 		 printf("----Calisan es kesintisi yeni maas = %d",i);
	 	    }
	 	    else
	 	    {
	 	     i+=450;
	 		 printf("++++Calismayan es eklentisi yeni maas = %d",i);
			 }
			
		 } 
		 break;
		
	}
	
	 printf("\n\nIsci kac gun ise gelmedi: ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&gelmedigi_gun);
	 
	 i+=160-(6*gelmedigi_gun);
	 
	 printf("++++Yol ucreti eklentisi yeni maas = %d",i);
	 
	 
	 printf("\n\nIsci rapor aldi mi? 1. Evet 2. Hayir ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.rapor_say);
	 
	 switch (kategori.rapor_say)
	 {
	 	case 1:
		 {
		 	printf("Isci kac gun rapor almistir?"); 
		 	printf("\nGirisiniz: ");
		 	scanf("%d",&alinan_rap);
		 	i+=alinan_rap*-60;
		 	printf("----Alinan rapor kesintisi yeni maas = %d",i);
		}
		  break;
	 	case 2: printf("Isci rapor almadigi icin kesinti yapilmamistir."); break;
	 }
	 
	 i+= -((5000*5)/100) -535;
	 printf("\n\n----Gelir vergisi, damga vergisi ve SGK kesintisi yeni maas = %d",i);
	 
	 
	  printf("\n\nIsci mesai yapti mi? 1. Evet 2. Hayir ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.mesai);
	 
	 switch (kategori.mesai)
	 {
	 	case 1:
		 {
		 	printf("Isci kac gun mesai yapmistir?"); 
		 	printf("\nGirisiniz: ");
		 	scanf("%d",&mesai_gunu);
		 	i+=mesai_gunu*60;
		 	printf("++++Mesai eklentisi yeni maas = %d",i);
		}
		  break;
	 	case 2: printf("Isci mesai yapmadigi icin eklenti yapilmamistir."); break;
	 }
	 
	 
	 printf("\n\n\n\nISCININ UCRETI HERSEY DAHIL = %d tl'dir.",i);
	 
	 
	 		 
		 
	 
	 
	 
	
}
