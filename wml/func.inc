m4_define(EMAIL, decrew@indivia.net)
m4_define(CREW, DECrew)
m4_define(LONGCREW, Denatured Ethyl Crew)

<define-tag filesize>
  <:{
     use Math::BigFloat;
     my $fname = q|%0|;
     my $size = -s $fname;
     $size = Math::BigFloat->new ($size / 1024 / 1024);
     $size = $size->bfround (-1);
     $size =~ s/\./,/;
     print $size;
  }:>
</define-tag>

<define-tag download>
  <a href="$(ROOT)/downloads/%1">%1</a> (<em><filesize "$(ROOT)/../downloads/%1"> MB</em>)
</define-tag>
