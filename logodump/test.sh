#!/bin/sh

TMP="$(mktemp -d)"
TOOL=cmake-build-debug/logotool
IMG0=logo.img
IMG1="$TMP/logo.img"

$TOOL r "$IMG0" "$TMP"
$TOOL w "$IMG1" "$TMP"

sha1sum "$IMG0" "$IMG1"

rm -r "$TMP"
