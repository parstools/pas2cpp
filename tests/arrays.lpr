program arrays;

var
  tabA: array[0..3] of array[0..4] of integer;
  tabB: array[0..3,0..4] of integer;
  tabC: array[5..10] of char;
  tabC1: array[-5..10] of char;
  tabD: array[-2..3,2..4] of integer;
  p: PChar;
  pint: ^integer;
  i,j: integer;
type PInteger = ^integer;
begin
  tabA[2][2] := 5;
  tabA[2,2] := 5;
  tabB[2][2] := 5;
  tabB[2,2] := 5;
  tabC[6]:='a';
  tabC1[6]:='a';
  tabB:=tabA;
  for i:=Low(tabC) to High(tabC) do
      tabC[i]:=char(i+ord('a'));
  p:=@tabC;
  writeln(p[0]);//f
  p:=@tabC[7];
  writeln(p[0]);//h
  for i:=Low(tabD) to High(tabD) do
      for j:=Low(tabD[i]) to High(tabD[i]) do
            tabD[i,j]:=1000*i+j;
  p:=@tabD;
  pint := PInteger(p);
  writeln(pint^);//-1998
  p:=@tabD[1];
  pint := PInteger(p);
  writeln(pint^);//1002
  p:=@tabD[1,3];
  pint := PInteger(p);
  writeln(pint^);//1003
end.

