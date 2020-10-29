uses crt;
var
a,x,total,total2,jmluang,kembali : integer;
npm:string;
nama : array[1..100] of string[20];
harga, jumlah : array[1..100] of integer;

begin
  clrscr;
  write('Masukkan jumlah item yang akan dibeli : ');readln(x);

  for a := 1 to x do
    begin
      write('input nama produk ',a,'   : ');readln(nama[a]);
      write('input harga produk ',a,'  : ');readln(harga[a]);
      write('input jumlah barang ',a,' : ');readln(jumlah[a]);
      writeln(' ');
    end;

  writeln(' ');
  writeln(' ');
  writeln('nama barang        jumlah beli         harga         total');
  writeln('==========================================================');
  for a := 1 to x do
    begin
    //Create Function
    
  readln;
end.
