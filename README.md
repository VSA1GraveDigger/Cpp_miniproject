# Miniproject
LTTS Miniproject 
 
CPP Insights

PROJECT : ONLINE BANK MANAGEMENT SYSTEM


FOLDER STRUCTURE:
  |       Folder        |            Description                         |
  |:--------------------|:-----------------------------------------------|
  |1.Requirements       |Documents detailing requirements and research   |
  |2.Design             |Documents specifying design details             |
  |3.implementation     |All code and documentation                      |
  |4.Testplan           |Documents with test plans and procedures        |
  
  Challenges Faced:
|No.|	Challenge	|Solution|
|---|---------------|--------|
|1.|gcov generating *.gcda and *.gcno files in different directory than object file|added  steps in make file under coverage  and ran coverage then deleted all the unnecessary files.|
|2.|After program shutdown, not able to recover recorded data.|To solve problem file system is implemented|
  

 |Feature Id	|Feature|
 |--------------|-------|
|F_1	|Option to load older saved data|
|F_2	|Save data to file if only new data is added|
|F_3	|New records gets saved in file at program shut down|

