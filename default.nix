with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "website";

  buildInputs = [ gnumake wml ];
}
