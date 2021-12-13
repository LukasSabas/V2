# V2
V1.1 dalyje buvo įgyvendinta:
1. Vietoje sturct sukurta ir įgyvendinta class.
2. Palyginti laikai struct greičiausios skirstymo strayegijos ir class.
3. Programos veikimas palygintas su flag'ais O1, O2, Ox.


Greičiausiai atlikta antra dalijimo strategija.

Class ir Struct palyginimas:

|Duomenų kieki|Struct|Class|
| --- | --- | --- |
|100000|0.020s|0.014s|
|1000000|0.210s|0.157s|

Flag'ų palyginimas

|Duomenų kieki|O1|O2|Ox|
| --- | --- | --- | --- |
|100000 nuskaitymas|0.525s|0.549s|0.527s|
|100000 skirstymas|0.018s|0.014s|0.020s|
|1000000 nuskaitymas|5.327s|5.251s|5.179s|
|1000000 skirstymas|0.171s|0.157|0.162s|

|flag'as|.exe faiko dydis|
| --- | --- |
|O1|53.50kb|
|O2|60.00kb|
|Ox|60.50kb|
