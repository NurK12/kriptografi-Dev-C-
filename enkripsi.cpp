void enkripsi()
{
 	int ascii, ascii_kunci,i;
	char enkripsi[255];
 	cout<<"\nPESAN\n";
 	cout<<"-----\n";
 	for (i = 0; i <= pjg_pesan-1 ; i++)
	{
	 	ascii = int(pesan[i]);
		 cout<<"ASCII dari karakter "<<pesan[i]<<" adalah :"<<ascii<<"\n";
 	}
 	cout<<"\nKUNCI\n";
 	cout<<"-----\n";
 	for (i = 0; i <= pjg_kunci-1 ; i++)
	 {
		 ascii = int(kunci[i]);
		 cout<<"ASCII dari karakter "<<kunci[i]<<" adalah :"<<ascii<<"\n";
 	}
	
 	int j= 0 ;
 	cout<<"\n\nProses Enkripsi\n" ;
	for (i = 0; i<= pjg_pesan-1; i++)
	{
		 ascii = int(pesan[i]);
		 ascii_kunci = int(kunci[j]);

 		enkripsi[i] = pesan[i] ^ kunci[j];
 		cout<<pesan[i]<<" XOR " <<kunci[j]<< " = "<<enkripsi[i]<<"\n";
		j++;
		if (j == pjg_kunci)
 		{
			j=0;
		}
 	}

 	cout<<"\n\nPesan Enkripsi = ";
	for (i=0; i<=pjg_pesan-1; i++)
 	{
 		cout<<enkripsi[i];
 	}
} 
