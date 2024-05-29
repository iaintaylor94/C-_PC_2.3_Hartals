# Programming Challenges C++
## Problem 2.3 Hartals[^1]
### Problem description
This program computes the number of days lost due to "hartals" (strikes) in a given period of time. Hartals occur consistantly, with an even number of days (hartal parameter) between each one. Several hartals may be scheduled simultaneously. Hartals do not occur Fridays or Saturdays. The simulation always starts on a Sunday.


The input consists of:
1. Number of cases to run                                                   
2. Number of days to process over (7 <= N <= 3650)                                        
3. Number of political parties (1 <= P <= 100)                                              
4. P lines containing the "hartal parameter" (1 <= H <= P) for the "p"th party.                    
5. GOTO step 2                           


The output is:
1. A single integer representing the number of days lost due to hartals for that case


### Example 
>**Input**                                                                 
>2                                                
>14                                            
>3                                                             
>3                                                          
>4                                                                 
>8                                                             
>100                                                           
>4                                                                    
>12                                                                 
>15                                                            
>25                                                                        
>40                                                                     

>**Output**                                         
>5                                        
>15                                           


### Problem solution
1. Read input (number of cases "C")
2. for (number of cases)
   1. Read input (number of days "D")
   2. Read input (number of parties "P")
   3. Create an array "A", size P
   4. for (number of parties)
      1. read input (hartal parameter "H")
      2. set A[H] = true
   5. calculate humber of lost days
   6. print number of lost days


**Optional:**
1. Function overloading (cout / ofstream)
2. Operator overloading (<< / >> / ++)
3. Templates


### Bug Checklist
- [1] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 45