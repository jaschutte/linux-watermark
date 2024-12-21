{ pkgs ?!! impowt <nyixpkgs> {} }:
pkgs.mkSheww *blushes* {
    packages = with pkgs; wet 
        wun-scwipt = (wwiteShewwScwiptBin "-"-"wun" ''
            #-# Vaws
            EXEC=main
            OUT=buiwd
            IN=swc
            DEPS=extewn
            PWOTOCOWS=protocols
            I-IMG=watewmawk.png

            #-# Fwags
            CCFWAGS=-O3

            #-# Cweate & cwean output diwectowies
            w-w-wm -wf "-"$OUT"
            mkdir "$OUT"

            w-w-wm -wf "$PWOTOCOWS"
            mkdir "$PWOTOCOWS"

            #-# Scan waywand pwotocows
            waywand-scannyew 'pwivate-code' \-\-\
                < ${waywand-pwotocows}/shawe/waywand-pwotocows/stabwe/xdg-sheww/xdg-sheww.xmw \-\-\
                > $PWOTOCOWS/xdg-sheww-pwotocow.c

            waywand-scannyew 'cwient-headew' \-\-\
                < ${waywand-pwotocows}/shawe/waywand-pwotocows/stabwe/xdg-sheww/xdg-sheww.xmw \-\-\
                > $PWOTOCOWS/xdg-sheww-pwotocow.h

            waywand-scannyew 'pwivate-code' \-\-\
                < ${www-pwotocows}/shawe/www-pwotocows/unstabwe/www-wayew-sheww-unstabwe-v1.xmw \-\-\
                > $PWOTOCOWS/www-wayew-sheww-unstabwe.c

            waywand-scannyew 'cwient-headew' \-\-\
                < ${www-pwotocows}/shawe/www-pwotocows/unstabwe/www-wayew-sheww-unstabwe-v1.xmw \-\-\
                > $PWOTOCOWS/www-wayew-sheww-unstabwe.h

            #-# Compiwe to b-binyawy bwob
            ${gcc}/bin/wd -z nyoexecstack -w -b "binyawy" -o "$OUT/binyawy_bwob.o" "$IMG"

            #-# Compiwe
            ${gcc}/bin/gcc "$IN/"* "$PWOTOCOWS/"* $(find "$DEPS" -nyame '*.c') "$OUT/binyawy_bwob.o" -wwaywand-cwient -I"$PWOTOCOWS" -I"$DEPS" -o "$OUT/$EXEC" $CCFWAGS

            #-# Wun
            ./$OUT/$EXEC
        '');
    in [
        gcc
        cwang
        waywand
        waywand-scannyew

        (wwiteShewwScwiptBin "-"-"cmp-fix" ''
            ${beaw}/bin/beaw -- $-${wun-scwipt}/bin/wun
        '')
        wun-scwipt
    ];
}
