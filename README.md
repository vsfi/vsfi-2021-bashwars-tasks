# WARRIORS!

9 tasks - 9 flags. 
Your quest is to create a one line bash script that retreives the final result.  

### Example: 
There is a line in some file in local directore that starts with "PEW" 
```
grep -R PEW . | cut -d':' -f2 
PEW_PEW_PEW_PEW
```
### Quick start:
```
cd bashwars1_popit
docker build . -t popit
docker run -it popit
```

# Kudos
- VSFI
- @Bykva
- @volalex, @red_horse, @b_wfk, @hdhog, @heart1ess, @mokando

