sort(a, a+n, sosanh);  
	bool s[n]; 
	for (int i=0; i<n; i++) 
		s[i] = false; 
    int r[n];
	for (int i=0; i<n; i++) { 
	    for (int j=min(n, a[i].Dead)-1; j>=0; j--) { 
		    if (s[j]==false) { 
			    r[j] = i; 
			    s[j] = true;
			    break; 
		    } 
	    } 
	} 
	for (int i=0; i<n; i++) 
	if (s[i]){
        dem1++;
        dem2+=a[r[i]].Profit;
    }