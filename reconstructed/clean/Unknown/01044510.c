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

void FUN_01044510(uint64_t param_1)

{
  byte bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  byte bVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int iVar14;
  uint64_t uVar15;
  bool bVar16;
  uint32_t uVar17;
  
  if (this_ptr != (int64_t *)0x0) {
    if ((this_ptr < g_028aba78) ||
       ((int64_t *)((int64_t)g_028aba78 + g_028aba80) <= this_ptr)) {
                          _OPENSSL_die(param_1,0x25f);
    }
    plVar3 = (int64_t *)((int64_t)this_ptr + (g_028aba80 - (int64_t)g_028aba78));
    uVar12 = g_028aba90 - 1;
    plVar8 = g_028aba98;
    if (g_028aba98 <= plVar3) {
      if (((uint64_t)plVar3 | (uint64_t)g_028aba98) >> 0x20 == 0) {
        plVar3 = (int64_t *)
                 (((uint64_t)plVar3 & 0xffffffff) / ((uint64_t)g_028aba98 & 0xffffffff));
      }
      else {
        plVar3 = (int64_t *)((uint64_t)plVar3 / (uint64_t)g_028aba98);
      }
      do {
        bVar7 = *(byte *)(g_028abaa0 + ((uint64_t)plVar3 >> 3));
        plVar8 = (int64_t *)(uint64_t)bVar7;
        if ((bVar7 >> ((byte)plVar3 & 7) & 1) != 0) break;
        if (((uint64_t)plVar3 & 1) != 0) {
                              _OPENSSL_die(plVar8,0x130);
        }
        plVar8 = (int64_t *)((uint64_t)plVar3 >> 1);
        uVar12 = uVar12 - 1;
        bVar16 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1) < plVar3;
        plVar3 = plVar8;
      } while (bVar16);
    }
    iVar14 = (int)uVar12;
    if ((iVar14 < 0) ||
       (plVar8 = (int64_t *)(uVar12 & 0xffffffff), g_028aba90 <= (int64_t)plVar8)) {
LAB_01044ada:
                          _OPENSSL_die(plVar8,0x13b);
    }
    uVar11 = g_028aba80 >> ((byte)plVar8 & 0x3f);
    uVar4 = (int64_t)this_ptr - (int64_t)g_028aba78;
    if ((uVar11 - 1 & uVar4) != 0) {
LAB_01044af2:
                          _OPENSSL_die(plVar8,0x13c);
    }
    plVar3 = (int64_t *)((uVar4 | uVar11) >> 0x20);
    if (plVar3 == (int64_t *)0x0) {
      uVar4 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
    }
    else {
      uVar4 = uVar4 / uVar11;
    }
    uVar4 = uVar4 + (1L << ((byte)plVar8 & 0x3f));
    if ((uVar4 == 0) || (g_028abab0 <= uVar4)) {
LAB_01044b0a:
                          _OPENSSL_die(plVar3,0x13e);
    }
    bVar7 = *(byte *)(g_028abaa0 + (uVar4 >> 3));
    if ((bVar7 >> ((byte)uVar4 & 7) & 1) == 0) {
                          _OPENSSL_die(bVar7,0x264);
    }
    FUN_01045250();
    FUN_01045180();
    while( true ) {
      plVar13 = g_028aba78;
      iVar14 = iVar14 + -1;
      lVar10 = 1L << ((byte)uVar12 & 0x3f);
      uVar11 = g_028aba80 >> ((byte)uVar12 & 0x3f);
      uVar4 = (int64_t)this_ptr - (int64_t)g_028aba78;
      if ((uVar4 | uVar11) >> 0x20 == 0) {
        uVar5 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar5 = uVar4 / uVar11;
      }
      uVar5 = uVar5 + lVar10;
      bVar7 = (byte)(uVar5 ^ 1) & 7;
      if ((((*(byte *)(g_028abaa0 + (uVar5 >> 3)) >> bVar7 & 1) == 0) ||
          (bVar1 = *(byte *)((int64_t)g_028abaa8 + (uVar5 >> 3)),
          ((uint)(1L << bVar7) & (uint)bVar1) != 0)) || (g_028aba78 == (int64_t *)0x0)) break;
      plVar8 = (int64_t *)(lVar10 + -1);
      uVar15 = ((uVar5 ^ 1) & (uint64_t)plVar8) * uVar11;
      if ((uVar15 | uVar11) >> 0x20 == 0) {
        uVar6 = (uVar15 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar6 = uVar15 / uVar11;
      }
      uVar9 = uVar6 + lVar10 ^ 1;
      bVar7 = (byte)uVar9 & 7;
      uVar6 = uVar6 + lVar10 >> 3;
      plVar3 = (int64_t *)(uint64_t)bVar7;
      if (((*(byte *)(g_028abaa0 + uVar6) >> bVar7 & 1) == 0) ||
         (plVar3 = plVar8,
         ((uint)(1L << bVar7) & (uint)*(byte *)((int64_t)g_028abaa8 + uVar6)) != 0)) {
        plVar8 = plVar3;
        if (this_ptr != (int64_t *)0x0) goto LAB_01044b3a;
      }
      else if (this_ptr !=
               (int64_t *)((uVar9 & (uint64_t)plVar8) * uVar11 + (int64_t)g_028aba78)) {
LAB_01044b3a:
                            _OPENSSL_die(plVar8,0x26a);
      }
      if (((int)uVar12 < 0) || (uVar6 = uVar12 & 0xffffffff, g_028aba90 <= (int64_t)uVar6))
      goto LAB_01044ada;
      if ((uVar11 - 1 & uVar4) != 0) goto LAB_01044af2;
      plVar3 = plVar8;
      if ((uVar5 == 0) || (g_028abab0 <= uVar5)) goto LAB_01044b0a;
      if ((bVar1 >> ((byte)uVar5 & 7) & 1) != 0) {
                            _OPENSSL_die(bVar1,0x26c);
      }
      FUN_01045250(bVar1,g_028abaa0);
      lVar2 = *this_ptr;
      if (lVar2 != 0) {
        *(int64_t *)(lVar2 + 8) = this_ptr[1];
      }
      plVar8 = (int64_t *)this_ptr[1];
      *plVar8 = lVar2;
      if (((*this_ptr != 0) &&
          ((plVar3 = *(int64_t **)(*this_ptr + 8), plVar3 < g_028aba88 ||
           (plVar8 = g_028aba88 + g_028aba90, plVar8 <= plVar3)))) &&
         ((plVar8 = g_028aba78, plVar3 < g_028aba78 ||
          (plVar8 = (int64_t *)((int64_t)g_028aba78 + g_028aba80), plVar8 <= plVar3)))) {
LAB_01044b22:
                            _OPENSSL_die(plVar8,0x17a);
      }
      if (g_028aba90 <= (int64_t)uVar6) goto LAB_01044ada;
      uVar11 = g_028aba80 >> ((byte)uVar6 & 0x3f);
      uVar4 = (int64_t)this_ptr - (int64_t)g_028aba78;
      plVar8 = (int64_t *)(uVar11 - 1);
      if (((uint64_t)plVar8 & uVar4) != 0) goto LAB_01044af2;
      if ((uVar4 | uVar11) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 / uVar11;
      }
      uVar4 = uVar4 + lVar10;
      plVar3 = g_028abaa8;
      if ((uVar4 == 0) || (g_028abab0 <= uVar4)) goto LAB_01044b0a;
      bVar7 = *(byte *)((int64_t)g_028abaa8 + (uVar4 >> 3));
      if ((bVar7 >> ((byte)uVar4 & 7) & 1) != 0) {
                            _OPENSSL_die(bVar7,0x26f);
      }
      plVar13 = (int64_t *)((int64_t)plVar13 + uVar15);
      FUN_01045250(bVar7,g_028abaa0);
      lVar10 = *plVar13;
      if (lVar10 != 0) {
        *(int64_t *)(lVar10 + 8) = plVar13[1];
      }
      plVar8 = (int64_t *)plVar13[1];
      *plVar8 = lVar10;
      if (((*plVar13 != 0) &&
          ((plVar3 = *(int64_t **)(*plVar13 + 8), plVar3 < g_028aba88 ||
           (plVar8 = g_028aba88 + g_028aba90, plVar8 <= plVar3)))) &&
         ((plVar8 = g_028aba78, plVar3 < g_028aba78 ||
          (plVar8 = (int64_t *)((int64_t)g_028aba78 + g_028aba80), plVar8 <= plVar3))))
      goto LAB_01044b22;
      plVar3 = plVar13;
      if (plVar13 < this_ptr) {
        plVar3 = this_ptr;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      if (plVar13 < this_ptr) {
        this_ptr = plVar13;
      }
      if (iVar14 < 0) goto LAB_01044ada;
      uVar12 = uVar12 - 1;
      plVar8 = (int64_t *)(uVar12 & 0xffffffff);
      if (g_028aba90 <= (int64_t)plVar8) goto LAB_01044ada;
      uVar11 = g_028aba80 >> ((byte)plVar8 & 0x3f);
      uVar4 = (int64_t)this_ptr - (int64_t)g_028aba78;
      if ((uVar11 - 1 & uVar4) != 0) goto LAB_01044af2;
      if ((uVar4 | uVar11) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 / uVar11;
      }
      uVar4 = uVar4 + (1L << ((byte)plVar8 & 0x3f));
      plVar3 = g_028abaa8;
      if ((uVar4 == 0) || (g_028abab0 <= uVar4)) goto LAB_01044b0a;
      bVar7 = *(byte *)((int64_t)g_028abaa8 + (uVar4 >> 3));
      if ((bVar7 >> ((byte)uVar4 & 7) & 1) != 0) {
                            _OPENSSL_die(bVar7,0x27a);
      }
      FUN_01045080();
      uVar17 = FUN_01045180();
      if ((int64_t *)g_028aba88[uVar12] != this_ptr) {
                            _OPENSSL_die(uVar17,0x27d);
      }
    }
  }
  return;
}

