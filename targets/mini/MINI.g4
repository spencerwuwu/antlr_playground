grammar MINI;
prog: '/' (ENDA)+ '/' (ENDB)+ ; 

NEWLINE : [\r\n]+ -> skip;
ENDA : [a-c] ;
ENDB : [a-d] ;
