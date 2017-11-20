# struct_dirent_seekoff


gcc main.c -o seekoff
./seekoff ./test

Response of Mac Sierra
Name : .	 - Type : 4	 - Seekoff : 1
Name : ..	 - Type : 4	 - Seekoff : 2
Name : .hidfile	 - Type : 8	 - Seekoff : 3141274655784963
Name : file	 - Type : 8	 - Seekoff : 3141291835654148
Name : folder	 - Type : 4	 - Seekoff : 3141334785327109
Name : lkfile	 - Type : 10	 - Seekoff : 3141467929313286
Name : pyfile.py	 - Type : 8	 - Seekoff : 9223372032559808519
exit

Response of Mac High Sierra
Name : .	 - Type : 4	 - Seekoff : 0
Name : ..	 - Type : 4	 - Seekoff : 0
Name : .hidfile	 - Type : 8	 - Seekoff : 0
Name : file	 - Type : 8	 - Seekoff : 0
Name : folder	 - Type : 4	 - Seekoff : 0
Name : lkfile	 - Type : 10	 - Seekoff : 0
Name : pyfile.py	 - Type : 8	 - Seekoff : 0
exit
