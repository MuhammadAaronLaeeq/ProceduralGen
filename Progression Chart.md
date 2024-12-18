 Value: Biome_ + Landscape_ + Materials_

 Value Must be >= than 5 to Proc.

 Biome:
 ```
 A=3
 B=2
 G=1
 ```

 Landscape:
 ```
 R=3
 F=2
 O=1
 ```

 Materials:
 ```
 T=3
 V=2
 M=1
 ```


 Biome progression: 
 ```
 A--> B--> G--> A--> ...
           G--> B--> ...
 A--> A--> B-->      ...
 G--> G--> A-->      ...
 ```
 Meaning, A proceeds to B only, B proceeds to G only, G can split between A or B.

 Meaning, A can proceed to itself, but only once. G can proceed to itself, but only once, and then the next term must be A. 

 Meaning, only A and G can start. B cannot be the starting point.



 Landscape Progression: 
 ```
 R--> F--> O--> F-->  ...
 F--> R--> F-->       ...
 ```
 Meaning, F must be in between R and O. R and O cannot touch.

 Meaning, R must be the starting point, and no landscape can proceed to itself.

Meaning, the first two terms must be
```
R--> F--> ...
```


 Materials Progression:
 ``` 
 T--> V--> M--> T-->  ...
 ```
 Meaning, This is the only progression. The Progression can start with any material.



 Potential Starting Points:
 ```
 ART >= 5
 ARV >= 5
 ARM >= 5
 GRT >= 5 
 GRV >= 5
 GRM >= 5
 ```

 A method to determine whether two tiles are compatible

 Rejected tiles get added to list, which is checked before a new tile is created
 
 
