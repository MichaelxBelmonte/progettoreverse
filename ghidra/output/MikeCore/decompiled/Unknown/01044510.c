// Function: FUN_01044510
// Address: 01044510
// Size: 1699 bytes
// Class: Unknown
// String references:
//   "crypto/mem_sec.c"
//   "assertion failed: list >= 0 && list < sh.freelist_size"
//   "assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0"
//   "assertion failed: bit > 0 && bit < sh.bittable_size"
//   "assertion failed: WITHIN_ARENA(ptr)"
//   "assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)"
//   "assertion failed: sh_testbit(ptr, list, sh.bittable)"
//   "assertion failed: ptr == sh_find_my_buddy(buddy, list)"
//   "assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)"
//   "assertion failed: sh.freelist[list] == ptr"
//   "assertion failed: (bit & 1) == 0"


void FUN_01044510(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  
  if (unaff_RDI != (longlong *)0x0) {
    if ((unaff_RDI < DAT_028aba78) ||
       ((longlong *)((longlong)DAT_028aba78 + DAT_028aba80) <= unaff_RDI)) {
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(param_1,0x25f);
    }
    plVar3 = (longlong *)((longlong)unaff_RDI + (DAT_028aba80 - (longlong)DAT_028aba78));
    uVar12 = DAT_028aba90 - 1;
    plVar8 = DAT_028aba98;
    if (DAT_028aba98 <= plVar3) {
      if (((ulonglong)plVar3 | (ulonglong)DAT_028aba98) >> 0x20 == 0) {
        plVar3 = (longlong *)
                 (((ulonglong)plVar3 & 0xffffffff) / ((ulonglong)DAT_028aba98 & 0xffffffff));
      }
      else {
        plVar3 = (longlong *)((ulonglong)plVar3 / (ulonglong)DAT_028aba98);
      }
      do {
        bVar7 = *(byte *)(DAT_028abaa0 + ((ulonglong)plVar3 >> 3));
        plVar8 = (longlong *)(ulonglong)bVar7;
        if ((bVar7 >> ((byte)plVar3 & 7) & 1) != 0) break;
        if (((ulonglong)plVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          _OPENSSL_die(plVar8,0x130);
        }
        plVar8 = (longlong *)((ulonglong)plVar3 >> 1);
        uVar12 = uVar12 - 1;
        bVar16 = (longlong *)((longlong)&MACH_HEADER.magic + 1) < plVar3;
        plVar3 = plVar8;
      } while (bVar16);
    }
    iVar14 = (int)uVar12;
    if ((iVar14 < 0) ||
       (plVar8 = (longlong *)(uVar12 & 0xffffffff), DAT_028aba90 <= (longlong)plVar8)) {
LAB_01044ada:
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(plVar8,0x13b);
    }
    uVar11 = DAT_028aba80 >> ((byte)plVar8 & 0x3f);
    uVar4 = (longlong)unaff_RDI - (longlong)DAT_028aba78;
    if ((uVar11 - 1 & uVar4) != 0) {
LAB_01044af2:
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(plVar8,0x13c);
    }
    plVar3 = (longlong *)((uVar4 | uVar11) >> 0x20);
    if (plVar3 == (longlong *)0x0) {
      uVar4 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
    }
    else {
      uVar4 = uVar4 / uVar11;
    }
    uVar4 = uVar4 + (1L << ((byte)plVar8 & 0x3f));
    if ((uVar4 == 0) || (DAT_028abab0 <= uVar4)) {
LAB_01044b0a:
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(plVar3,0x13e);
    }
    bVar7 = *(byte *)(DAT_028abaa0 + (uVar4 >> 3));
    if ((bVar7 >> ((byte)uVar4 & 7) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(bVar7,0x264);
    }
    FUN_01045250();
    FUN_01045180();
    while( true ) {
      plVar13 = DAT_028aba78;
      iVar14 = iVar14 + -1;
      lVar10 = 1L << ((byte)uVar12 & 0x3f);
      uVar11 = DAT_028aba80 >> ((byte)uVar12 & 0x3f);
      uVar4 = (longlong)unaff_RDI - (longlong)DAT_028aba78;
      if ((uVar4 | uVar11) >> 0x20 == 0) {
        uVar5 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar5 = uVar4 / uVar11;
      }
      uVar5 = uVar5 + lVar10;
      bVar7 = (byte)(uVar5 ^ 1) & 7;
      if ((((*(byte *)(DAT_028abaa0 + (uVar5 >> 3)) >> bVar7 & 1) == 0) ||
          (bVar1 = *(byte *)((longlong)DAT_028abaa8 + (uVar5 >> 3)),
          ((uint)(1L << bVar7) & (uint)bVar1) != 0)) || (DAT_028aba78 == (longlong *)0x0)) break;
      plVar8 = (longlong *)(lVar10 + -1);
      uVar15 = ((uVar5 ^ 1) & (ulonglong)plVar8) * uVar11;
      if ((uVar15 | uVar11) >> 0x20 == 0) {
        uVar6 = (uVar15 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar6 = uVar15 / uVar11;
      }
      uVar9 = uVar6 + lVar10 ^ 1;
      bVar7 = (byte)uVar9 & 7;
      uVar6 = uVar6 + lVar10 >> 3;
      plVar3 = (longlong *)(ulonglong)bVar7;
      if (((*(byte *)(DAT_028abaa0 + uVar6) >> bVar7 & 1) == 0) ||
         (plVar3 = plVar8,
         ((uint)(1L << bVar7) & (uint)*(byte *)((longlong)DAT_028abaa8 + uVar6)) != 0)) {
        plVar8 = plVar3;
        if (unaff_RDI != (longlong *)0x0) goto LAB_01044b3a;
      }
      else if (unaff_RDI !=
               (longlong *)((uVar9 & (ulonglong)plVar8) * uVar11 + (longlong)DAT_028aba78)) {
LAB_01044b3a:
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(plVar8,0x26a);
      }
      if (((int)uVar12 < 0) || (uVar6 = uVar12 & 0xffffffff, DAT_028aba90 <= (longlong)uVar6))
      goto LAB_01044ada;
      if ((uVar11 - 1 & uVar4) != 0) goto LAB_01044af2;
      plVar3 = plVar8;
      if ((uVar5 == 0) || (DAT_028abab0 <= uVar5)) goto LAB_01044b0a;
      if ((bVar1 >> ((byte)uVar5 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(bVar1,0x26c);
      }
      FUN_01045250(bVar1,DAT_028abaa0);
      lVar2 = *unaff_RDI;
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 8) = unaff_RDI[1];
      }
      plVar8 = (longlong *)unaff_RDI[1];
      *plVar8 = lVar2;
      if (((*unaff_RDI != 0) &&
          ((plVar3 = *(longlong **)(*unaff_RDI + 8), plVar3 < DAT_028aba88 ||
           (plVar8 = DAT_028aba88 + DAT_028aba90, plVar8 <= plVar3)))) &&
         ((plVar8 = DAT_028aba78, plVar3 < DAT_028aba78 ||
          (plVar8 = (longlong *)((longlong)DAT_028aba78 + DAT_028aba80), plVar8 <= plVar3)))) {
LAB_01044b22:
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(plVar8,0x17a);
      }
      if (DAT_028aba90 <= (longlong)uVar6) goto LAB_01044ada;
      uVar11 = DAT_028aba80 >> ((byte)uVar6 & 0x3f);
      uVar4 = (longlong)unaff_RDI - (longlong)DAT_028aba78;
      plVar8 = (longlong *)(uVar11 - 1);
      if (((ulonglong)plVar8 & uVar4) != 0) goto LAB_01044af2;
      if ((uVar4 | uVar11) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 / uVar11;
      }
      uVar4 = uVar4 + lVar10;
      plVar3 = DAT_028abaa8;
      if ((uVar4 == 0) || (DAT_028abab0 <= uVar4)) goto LAB_01044b0a;
      bVar7 = *(byte *)((longlong)DAT_028abaa8 + (uVar4 >> 3));
      if ((bVar7 >> ((byte)uVar4 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(bVar7,0x26f);
      }
      plVar13 = (longlong *)((longlong)plVar13 + uVar15);
      FUN_01045250(bVar7,DAT_028abaa0);
      lVar10 = *plVar13;
      if (lVar10 != 0) {
        *(longlong *)(lVar10 + 8) = plVar13[1];
      }
      plVar8 = (longlong *)plVar13[1];
      *plVar8 = lVar10;
      if (((*plVar13 != 0) &&
          ((plVar3 = *(longlong **)(*plVar13 + 8), plVar3 < DAT_028aba88 ||
           (plVar8 = DAT_028aba88 + DAT_028aba90, plVar8 <= plVar3)))) &&
         ((plVar8 = DAT_028aba78, plVar3 < DAT_028aba78 ||
          (plVar8 = (longlong *)((longlong)DAT_028aba78 + DAT_028aba80), plVar8 <= plVar3))))
      goto LAB_01044b22;
      plVar3 = plVar13;
      if (plVar13 < unaff_RDI) {
        plVar3 = unaff_RDI;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      if (plVar13 < unaff_RDI) {
        unaff_RDI = plVar13;
      }
      if (iVar14 < 0) goto LAB_01044ada;
      uVar12 = uVar12 - 1;
      plVar8 = (longlong *)(uVar12 & 0xffffffff);
      if (DAT_028aba90 <= (longlong)plVar8) goto LAB_01044ada;
      uVar11 = DAT_028aba80 >> ((byte)plVar8 & 0x3f);
      uVar4 = (longlong)unaff_RDI - (longlong)DAT_028aba78;
      if ((uVar11 - 1 & uVar4) != 0) goto LAB_01044af2;
      if ((uVar4 | uVar11) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 / uVar11;
      }
      uVar4 = uVar4 + (1L << ((byte)plVar8 & 0x3f));
      plVar3 = DAT_028abaa8;
      if ((uVar4 == 0) || (DAT_028abab0 <= uVar4)) goto LAB_01044b0a;
      bVar7 = *(byte *)((longlong)DAT_028abaa8 + (uVar4 >> 3));
      if ((bVar7 >> ((byte)uVar4 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(bVar7,0x27a);
      }
      FUN_01045080();
      uVar17 = FUN_01045180();
      if ((longlong *)DAT_028aba88[uVar12] != unaff_RDI) {
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(uVar17,0x27d);
      }
    }
  }
  return;
}


