// Function: FUN_00ea0e90
// Address: 00ea0e90
// Size: 14403 bytes
// Class: Unknown
// String references:
//   "      %d in block, %d after MTF & 1-2 coding, %d+2 syms in use\n"
//   "      initial group %d, [%d .. %d], has %d syms (%4.1f%%)\n"
//   "      pass %d: size is %d, grp uses are "
//   "%d "
//   "      bytes: mapping %d, "
//   "selectors %d, "
//   "code lengths %d, "
//   "codes %d\n"

void FUN_00ea0e90(FILE *param_1)

{
  void*puVar1;
  int64_t *plVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  short sVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int64_t lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  int64_t lVar38;
  int64_t lVar39;
  int64_t lVar40;
  int64_t lVar41;
  int64_t lVar42;
  int64_t lVar43;
  int64_t lVar44;
  int64_t lVar45;
  int64_t lVar46;
  int64_t lVar47;
  int64_t lVar48;
  int64_t lVar49;
  int64_t lVar50;
  int64_t lVar51;
  int64_t lVar52;
  int64_t lVar53;
  int64_t lVar54;
  int64_t lVar55;
  int64_t lVar56;
  int64_t lVar57;
  int64_t lVar58;
  int64_t lVar59;
  int64_t lVar60;
  int64_t lVar61;
  int64_t lVar62;
  int64_t lVar63;
  int64_t lVar64;
  int64_t lVar65;
  int64_t lVar66;
  int64_t lVar67;
  int64_t lVar68;
  int64_t lVar69;
  char *pcVar70;
  byte bVar71;
  ushort uVar72;
  int iVar73;
  FILE *pFVar74;
  int64_t lVar75;
  uint64_t uVar76;
  int64_t lVar77;
  FILE *pFVar78;
  int iVar79;
  int iVar80;
  uint uVar81;
  int iVar82;
  int64_t lVar83;
  uint64_t uVar84;
  FILE *pFVar85;
  byte bVar86;
  FILE *pFVar87;
  uint64_t uVar88;
  FILE *pFVar89;
  uint8_t uVar90;
  bool bVar91;
  int64_t lVar92;
  uint8_t uVar93;
  int64_t this_ptr;
  uint64_t uVar94;
  int64_t lVar95;
  size_t sVar96;
  int iVar97;
  uint uVar98;
  int64_t lVar99;
  uint uVar100;
  int iVar101;
  uint uVar102;
  uint uVar104;
  uint uVar105;
  uint8_t auVar103 [16];
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar113;
  uint uVar114;
  uint8_t auVar112 [16];
  uint uVar115;
  uint uVar116;
  uint uVar118;
  uint uVar119;
  uint8_t auVar117 [16];
  uint uVar120;
  uint8_t auVar121 [16];
  uint8_t in_XMM5 [16];
  uint64_t local_c0;
  FILE *local_b8;
  char local_78 [16];
  uint local_68 [9];
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar11 = *(int64_t *)(this_ptr + 0x48);
  if (2 < *(int *)(this_ptr + 0x290)) {
    param_1 = (FILE *)(uint64_t)*(uint *)(this_ptr + 0x29c);
    _fprintf(param_1,(char *)(uint64_t)*(uint *)(this_ptr + 0x6c),
             (uint64_t)*(uint *)(this_ptr + 0x7c));
  }
  uVar81 = *(uint *)(this_ptr + 0x7c);
  lVar92 = (int64_t)(int)uVar81;
  uVar102 = uVar81 + 2;
  if (lVar92 < -1) {
    iVar97 = *(int *)(this_ptr + 0x29c);
  }
  else {
    uVar23 = 1;
    if (1 < (int)uVar102) {
      uVar23 = uVar102;
    }
    lVar99 = this_ptr;
    _memset(param_1,uVar23,(size_t)this_ptr);
    sVar96 = (size_t)lVar99;
    _memset(param_1,uVar23,sVar96);
    _memset(param_1,uVar23,sVar96);
    _memset(param_1,uVar23,sVar96);
    _memset(param_1,uVar23,sVar96);
    _memset(param_1,uVar23,sVar96);
    iVar97 = *(int *)(this_ptr + 0x29c);
  }
  if (iVar97 < 1) {
    FUN_00e9e160();
    iVar97 = *(int *)(this_ptr + 0x29c);
  }
  if (iVar97 < 200) {
    uVar23 = 2;
    bVar12 = false;
  }
  else if (iVar97 < 600) {
    uVar23 = 3;
    bVar12 = false;
  }
  else if (iVar97 < 0x4b0) {
    uVar23 = 4;
    bVar12 = false;
  }
  else {
    bVar12 = 0x95f < iVar97;
    uVar23 = 6 - (iVar97 < 0x960);
  }
  uVar94 = 1;
  if (1 < (int)uVar102) {
    uVar94 = (uint64_t)uVar102;
  }
  pFVar87 = (FILE *)(uint64_t)uVar23;
  uVar98 = (uint)uVar94;
  if ((int)uVar81 < -1) {
    pFVar74 = (FILE *)0x0;
    pFVar78 = pFVar87;
    do {
      iVar79 = iVar97 / (int)pFVar78;
      uVar100 = (int)pFVar74 - 1;
      uVar76 = (uint64_t)uVar100;
      if (iVar79 < 1) {
        uVar88 = 0;
      }
      else {
        if ((int)uVar81 < (int)uVar100) {
          uVar88 = 0;
        }
        else {
          uVar88 = 0;
          uVar84 = (int64_t)(int)uVar100;
          do {
            uVar76 = uVar84 + 1;
            uVar100 = (int)uVar88 + *(int *)(this_ptr + 0x2a4 + uVar84 * 4);
            uVar88 = (uint64_t)uVar100;
            if (iVar79 <= (int)uVar100) break;
            bVar91 = (int64_t)uVar84 < lVar92;
            uVar84 = uVar76;
          } while (bVar91);
        }
        uVar100 = (uint)uVar76;
      }
      if (((((int)pFVar74 < (int)uVar100) && (pFVar78 != pFVar87)) &&
          (pFVar78 != (FILE *)((int64_t)&MACH_HEADER.magic + 1))) &&
         ((uVar23 - (int)pFVar78 & 1) != 0)) {
        uVar88 = (uint64_t)
                 (uint)((int)uVar88 - *(int *)(this_ptr + 0x2a0 + (int64_t)(int)uVar100 * 4));
        uVar100 = uVar100 - 1;
      }
      if (2 < *(int *)(this_ptr + 0x290)) {
        _fprintf(pFVar74,(char *)((uint64_t)pFVar78 & 0xffffffff),(uint64_t)uVar100,uVar88);
      }
      iVar97 = iVar97 - (int)uVar88;
      pFVar74 = (FILE *)(uint64_t)(uVar100 + 1);
      bVar91 = 1 < (int64_t)pFVar78;
      pFVar78 = (FILE *)((int64_t)&pFVar78[-1]._offset + 7);
    } while (bVar91);
  }
  else {
    lVar99 = this_ptr + (int64_t)pFVar87 * 0x102 + 0x924b;
    pFVar74 = (FILE *)0x0;
    pFVar78 = pFVar87;
    do {
      iVar24 = iVar97 / (int)pFVar78;
      iVar79 = (int)pFVar74;
      uVar100 = iVar79 - 1;
      uVar76 = (uint64_t)uVar100;
      if (iVar24 < 1) {
        uVar88 = 0;
      }
      else {
        if ((int)uVar81 < (int)uVar100) {
          uVar88 = 0;
        }
        else {
          uVar88 = 0;
          uVar84 = (int64_t)(int)uVar100;
          do {
            uVar76 = uVar84 + 1;
            uVar100 = (int)uVar88 + *(int *)(this_ptr + 0x2a4 + uVar84 * 4);
            uVar88 = (uint64_t)uVar100;
            if (iVar24 <= (int)uVar100) break;
            bVar91 = (int64_t)uVar84 < lVar92;
            uVar84 = uVar76;
          } while (bVar91);
        }
        uVar100 = (uint)uVar76;
      }
      if (((iVar79 < (int)uVar100) && (pFVar78 != pFVar87)) &&
         ((pFVar78 != (FILE *)((int64_t)&MACH_HEADER.magic + 1) &&
          ((uVar23 - (int)pFVar78 & 1) != 0)))) {
        uVar88 = (uint64_t)
                 (uint)((int)uVar88 - *(int *)(this_ptr + 0x2a0 + (int64_t)(int)uVar100 * 4));
        uVar100 = uVar100 - 1;
      }
      if (2 < *(int *)(this_ptr + 0x290)) {
        _fprintf(pFVar74,(char *)((uint64_t)pFVar78 & 0xffffffff),(uint64_t)uVar100,uVar88);
      }
      lVar83 = (int64_t)(int)uVar100;
      lVar75 = (int64_t)iVar79;
      if (uVar81 < 0x7ffffffe) {
        uVar76 = 0;
        do {
          uVar90 = 0;
          if (lVar83 < (int64_t)uVar76) {
            uVar90 = 0xf;
          }
          uVar93 = 0;
          if (lVar83 <= (int64_t)uVar76) {
            uVar93 = 0xf;
          }
          if ((int64_t)uVar76 < lVar75) {
            uVar90 = 0xf;
          }
          if ((int64_t)(uVar76 + 1) < lVar75) {
            uVar93 = 0xf;
          }
          *(void*)(lVar99 + -1 + uVar76) = uVar90;
          *(void*)(lVar99 + uVar76) = uVar93;
          uVar76 = uVar76 + 2;
        } while ((uVar98 & 0x7ffffffe) != uVar76);
      }
      else {
        uVar76 = 0;
      }
      if ((uVar94 & 1) != 0) {
        uVar90 = 0;
        if (lVar83 < (int64_t)uVar76) {
          uVar90 = 0xf;
        }
        if ((int64_t)uVar76 < lVar75) {
          uVar90 = 0xf;
        }
        *(void*)
         (uVar76 + 0x934c + (int64_t)((int64_t)&pFVar78[-1]._offset + 7) * 0x102 + this_ptr) =
             uVar90;
      }
      iVar97 = iVar97 - (int)uVar88;
      lVar99 = lVar99 + -0x102;
      pFVar74 = (FILE *)(uint64_t)(uVar100 + 1);
      bVar91 = 1 < (int64_t)pFVar78;
      pFVar78 = (FILE *)((int64_t)&pFVar78[-1]._offset + 7);
    } while (bVar91);
  }
  iVar97 = 0;
  do {
    ___bzero();
    if (-2 < (int)uVar81) {
      ___bzero();
      ___bzero();
      if (((uVar23 != 2) && (___bzero(), uVar23 != 3)) &&
         ((___bzero(), uVar23 != 4 && ((___bzero(), uVar23 != 5 && (___bzero(), uVar23 != 6)))))) {
        ___bzero();
      }
    }
    if (bVar12 && -2 < (int)uVar81) {
      uVar76 = 0;
      puVar25 = (uint *)(this_ptr + 0xc9c0);
      do {
        puVar25[-2] = (uint)*(byte *)(this_ptr + 0x934c + uVar76) |
                      (uint)*(byte *)(this_ptr + 0x944e + uVar76) << 0x10;
        puVar25[-1] = (uint)(byte)(&g_00009550)[uVar76 + this_ptr] |
                      (uint)*(byte *)(this_ptr + 0x9652 + uVar76) << 0x10;
        *puVar25 = (uint)*(byte *)(this_ptr + 0x9754 + uVar76) |
                   (uint)*(byte *)(this_ptr + 0x9856 + uVar76) << 0x10;
        uVar76 = uVar76 + 1;
        puVar25 = puVar25 + 4;
      } while (uVar94 != uVar76);
    }
    iVar79 = *(int *)(this_ptr + 0x29c);
    if (iVar79 < 1) {
      local_c0 = 0;
      iVar24 = 0;
      iVar79 = *(int *)(this_ptr + 0x290);
    }
    else {
      local_c0 = 0;
      iVar101 = 0;
      iVar24 = 0;
      do {
        iVar80 = iVar101 + 0x31;
        ___bzero();
        iVar82 = iVar79 + -1;
        if (iVar80 < iVar79) {
          iVar82 = iVar80;
        }
        bVar91 = (bool)(iVar82 - iVar101 == 0x31 & bVar12);
        if (bVar91) {
          lVar95 = (int64_t)iVar101;
          lVar92 = (uint64_t)*(ushort *)(lVar11 + lVar95 * 2) * 0x10;
          lVar77 = (uint64_t)*(ushort *)(lVar11 + 2 + lVar95 * 2) * 0x10;
          lVar99 = (uint64_t)*(ushort *)(lVar11 + 4 + lVar95 * 2) * 0x10;
          lVar75 = (uint64_t)*(ushort *)(lVar11 + 6 + lVar95 * 2) * 0x10;
          lVar83 = (uint64_t)*(ushort *)(lVar11 + 8 + lVar95 * 2) * 0x10;
          lVar26 = (uint64_t)*(ushort *)(lVar11 + 10 + lVar95 * 2) * 0x10;
          lVar27 = (uint64_t)*(ushort *)(lVar11 + 0xc + lVar95 * 2) * 0x10;
          lVar28 = (uint64_t)*(ushort *)(lVar11 + 0xe + lVar95 * 2) * 0x10;
          lVar29 = (uint64_t)*(ushort *)(lVar11 + 0x10 + lVar95 * 2) * 0x10;
          lVar30 = (uint64_t)*(ushort *)(lVar11 + 0x12 + lVar95 * 2) * 0x10;
          lVar31 = (uint64_t)*(ushort *)(lVar11 + 0x14 + lVar95 * 2) * 0x10;
          lVar32 = (uint64_t)*(ushort *)(lVar11 + 0x16 + lVar95 * 2) * 0x10;
          lVar33 = (uint64_t)*(ushort *)(lVar11 + 0x18 + lVar95 * 2) * 0x10;
          lVar34 = (uint64_t)*(ushort *)(lVar11 + 0x1a + lVar95 * 2) * 0x10;
          lVar35 = (uint64_t)*(ushort *)(lVar11 + 0x1c + lVar95 * 2) * 0x10;
          lVar36 = (uint64_t)*(ushort *)(lVar11 + 0x1e + lVar95 * 2) * 0x10;
          lVar37 = (uint64_t)*(ushort *)(lVar11 + 0x20 + lVar95 * 2) * 0x10;
          lVar38 = (uint64_t)*(ushort *)(lVar11 + 0x22 + lVar95 * 2) * 0x10;
          lVar39 = (uint64_t)*(ushort *)(lVar11 + 0x24 + lVar95 * 2) * 0x10;
          lVar40 = (uint64_t)*(ushort *)(lVar11 + 0x26 + lVar95 * 2) * 0x10;
          lVar41 = (uint64_t)*(ushort *)(lVar11 + 0x28 + lVar95 * 2) * 0x10;
          lVar42 = (uint64_t)*(ushort *)(lVar11 + 0x2a + lVar95 * 2) * 0x10;
          lVar43 = (uint64_t)*(ushort *)(lVar11 + 0x2c + lVar95 * 2) * 0x10;
          lVar44 = (uint64_t)*(ushort *)(lVar11 + 0x2e + lVar95 * 2) * 0x10;
          lVar45 = (uint64_t)*(ushort *)(lVar11 + 0x30 + lVar95 * 2) * 0x10;
          lVar46 = (uint64_t)*(ushort *)(lVar11 + 0x32 + lVar95 * 2) * 0x10;
          lVar47 = (uint64_t)*(ushort *)(lVar11 + 0x34 + lVar95 * 2) * 0x10;
          lVar48 = (uint64_t)*(ushort *)(lVar11 + 0x36 + lVar95 * 2) * 0x10;
          lVar49 = (uint64_t)*(ushort *)(lVar11 + 0x38 + lVar95 * 2) * 0x10;
          lVar50 = (uint64_t)*(ushort *)(lVar11 + 0x3a + lVar95 * 2) * 0x10;
          lVar51 = (uint64_t)*(ushort *)(lVar11 + 0x3c + lVar95 * 2) * 0x10;
          lVar52 = (uint64_t)*(ushort *)(lVar11 + 0x3e + lVar95 * 2) * 0x10;
          lVar53 = (uint64_t)*(ushort *)(lVar11 + 0x40 + lVar95 * 2) * 0x10;
          lVar54 = (uint64_t)*(ushort *)(lVar11 + 0x42 + lVar95 * 2) * 0x10;
          lVar55 = (uint64_t)*(ushort *)(lVar11 + 0x44 + lVar95 * 2) * 0x10;
          lVar56 = (uint64_t)*(ushort *)(lVar11 + 0x46 + lVar95 * 2) * 0x10;
          lVar57 = (uint64_t)*(ushort *)(lVar11 + 0x48 + lVar95 * 2) * 0x10;
          lVar58 = (uint64_t)*(ushort *)(lVar11 + 0x4a + lVar95 * 2) * 0x10;
          lVar59 = (uint64_t)*(ushort *)(lVar11 + 0x4c + lVar95 * 2) * 0x10;
          lVar60 = (uint64_t)*(ushort *)(lVar11 + 0x4e + lVar95 * 2) * 0x10;
          lVar61 = (uint64_t)*(ushort *)(lVar11 + 0x50 + lVar95 * 2) * 0x10;
          lVar62 = (uint64_t)*(ushort *)(lVar11 + 0x52 + lVar95 * 2) * 0x10;
          lVar63 = (uint64_t)*(ushort *)(lVar11 + 0x54 + lVar95 * 2) * 0x10;
          lVar64 = (uint64_t)*(ushort *)(lVar11 + 0x56 + lVar95 * 2) * 0x10;
          lVar65 = (uint64_t)*(ushort *)(lVar11 + 0x58 + lVar95 * 2) * 0x10;
          lVar66 = (uint64_t)*(ushort *)(lVar11 + 0x5a + lVar95 * 2) * 0x10;
          lVar67 = (uint64_t)*(ushort *)(lVar11 + 0x5c + lVar95 * 2) * 0x10;
          lVar68 = (uint64_t)*(ushort *)(lVar11 + 0x5e + lVar95 * 2) * 0x10;
          lVar95 = (uint64_t)*(ushort *)(lVar11 + 0x60 + lVar95 * 2) * 0x10;
          lVar69 = (uint64_t)*(ushort *)(lVar11 + (int64_t)iVar80 * 2) * 0x10;
          local_44 = *(int *)(this_ptr + 0xc9b8 + lVar77) + *(int *)(this_ptr + 0xc9b8 + lVar92) +
                     *(int *)(this_ptr + 0xc9b8 + lVar99) + *(int *)(this_ptr + 0xc9b8 + lVar75) +
                     *(int *)(this_ptr + 0xc9b8 + lVar83) + *(int *)(this_ptr + 0xc9b8 + lVar26) +
                     *(int *)(this_ptr + 0xc9b8 + lVar27) + *(int *)(this_ptr + 0xc9b8 + lVar28) +
                     *(int *)(this_ptr + 0xc9b8 + lVar29) + *(int *)(this_ptr + 0xc9b8 + lVar30) +
                     *(int *)(this_ptr + 0xc9b8 + lVar31) + *(int *)(this_ptr + 0xc9b8 + lVar32) +
                     *(int *)(this_ptr + 0xc9b8 + lVar33) + *(int *)(this_ptr + 0xc9b8 + lVar34) +
                     *(int *)(this_ptr + 0xc9b8 + lVar35) + *(int *)(this_ptr + 0xc9b8 + lVar36) +
                     *(int *)(this_ptr + 0xc9b8 + lVar37) + *(int *)(this_ptr + 0xc9b8 + lVar38) +
                     *(int *)(this_ptr + 0xc9b8 + lVar39) + *(int *)(this_ptr + 0xc9b8 + lVar40) +
                     *(int *)(this_ptr + 0xc9b8 + lVar41) + *(int *)(this_ptr + 0xc9b8 + lVar42) +
                     *(int *)(this_ptr + 0xc9b8 + lVar43) + *(int *)(this_ptr + 0xc9b8 + lVar44) +
                     *(int *)(this_ptr + 0xc9b8 + lVar45) + *(int *)(this_ptr + 0xc9b8 + lVar46) +
                     *(int *)(this_ptr + 0xc9b8 + lVar47) + *(int *)(this_ptr + 0xc9b8 + lVar48) +
                     *(int *)(this_ptr + 0xc9b8 + lVar49) + *(int *)(this_ptr + 0xc9b8 + lVar50) +
                     *(int *)(this_ptr + 0xc9b8 + lVar51) + *(int *)(this_ptr + 0xc9b8 + lVar52) +
                     *(int *)(this_ptr + 0xc9b8 + lVar53) + *(int *)(this_ptr + 0xc9b8 + lVar54) +
                     *(int *)(this_ptr + 0xc9b8 + lVar55) + *(int *)(this_ptr + 0xc9b8 + lVar56) +
                     *(int *)(this_ptr + 0xc9b8 + lVar57) + *(int *)(this_ptr + 0xc9b8 + lVar58) +
                     *(int *)(this_ptr + 0xc9b8 + lVar59) + *(int *)(this_ptr + 0xc9b8 + lVar60) +
                     *(int *)(this_ptr + 0xc9b8 + lVar61) + *(int *)(this_ptr + 0xc9b8 + lVar62) +
                     *(int *)(this_ptr + 0xc9b8 + lVar63) + *(int *)(this_ptr + 0xc9b8 + lVar64) +
                     *(int *)(this_ptr + 0xc9b8 + lVar65) + *(int *)(this_ptr + 0xc9b8 + lVar66) +
                     *(int *)(this_ptr + 0xc9b8 + lVar67) + *(int *)(this_ptr + 0xc9b8 + lVar68) +
                     *(int *)(this_ptr + 0xc9b8 + lVar95) + *(int *)(this_ptr + 0xc9b8 + lVar69);
          local_40 = *(int *)(this_ptr + 0xc9bc + lVar77) + *(int *)(this_ptr + 0xc9bc + lVar92) +
                     *(int *)(this_ptr + 0xc9bc + lVar99) + *(int *)(this_ptr + 0xc9bc + lVar75) +
                     *(int *)(this_ptr + 0xc9bc + lVar83) + *(int *)(this_ptr + 0xc9bc + lVar26) +
                     *(int *)(this_ptr + 0xc9bc + lVar27) + *(int *)(this_ptr + 0xc9bc + lVar28) +
                     *(int *)(this_ptr + 0xc9bc + lVar29) + *(int *)(this_ptr + 0xc9bc + lVar30) +
                     *(int *)(this_ptr + 0xc9bc + lVar31) + *(int *)(this_ptr + 0xc9bc + lVar32) +
                     *(int *)(this_ptr + 0xc9bc + lVar33) + *(int *)(this_ptr + 0xc9bc + lVar34) +
                     *(int *)(this_ptr + 0xc9bc + lVar35) + *(int *)(this_ptr + 0xc9bc + lVar36) +
                     *(int *)(this_ptr + 0xc9bc + lVar37) + *(int *)(this_ptr + 0xc9bc + lVar38) +
                     *(int *)(this_ptr + 0xc9bc + lVar39) + *(int *)(this_ptr + 0xc9bc + lVar40) +
                     *(int *)(this_ptr + 0xc9bc + lVar41) + *(int *)(this_ptr + 0xc9bc + lVar42) +
                     *(int *)(this_ptr + 0xc9bc + lVar43) + *(int *)(this_ptr + 0xc9bc + lVar44) +
                     *(int *)(this_ptr + 0xc9bc + lVar45) + *(int *)(this_ptr + 0xc9bc + lVar46) +
                     *(int *)(this_ptr + 0xc9bc + lVar47) + *(int *)(this_ptr + 0xc9bc + lVar48) +
                     *(int *)(this_ptr + 0xc9bc + lVar49) + *(int *)(this_ptr + 0xc9bc + lVar50) +
                     *(int *)(this_ptr + 0xc9bc + lVar51) + *(int *)(this_ptr + 0xc9bc + lVar52) +
                     *(int *)(this_ptr + 0xc9bc + lVar53) + *(int *)(this_ptr + 0xc9bc + lVar54) +
                     *(int *)(this_ptr + 0xc9bc + lVar55) + *(int *)(this_ptr + 0xc9bc + lVar56) +
                     *(int *)(this_ptr + 0xc9bc + lVar57) + *(int *)(this_ptr + 0xc9bc + lVar58) +
                     *(int *)(this_ptr + 0xc9bc + lVar59) + *(int *)(this_ptr + 0xc9bc + lVar60) +
                     *(int *)(this_ptr + 0xc9bc + lVar61) + *(int *)(this_ptr + 0xc9bc + lVar62) +
                     *(int *)(this_ptr + 0xc9bc + lVar63) + *(int *)(this_ptr + 0xc9bc + lVar64) +
                     *(int *)(this_ptr + 0xc9bc + lVar65) + *(int *)(this_ptr + 0xc9bc + lVar66) +
                     *(int *)(this_ptr + 0xc9bc + lVar67) + *(int *)(this_ptr + 0xc9bc + lVar68) +
                     *(int *)(this_ptr + 0xc9bc + lVar95) + *(int *)(this_ptr + 0xc9bc + lVar69);
          local_3c = *(int *)(this_ptr + 0xc9c0 + lVar77) + *(int *)(this_ptr + 0xc9c0 + lVar92) +
                     *(int *)(this_ptr + 0xc9c0 + lVar99) + *(int *)(this_ptr + 0xc9c0 + lVar75) +
                     *(int *)(this_ptr + 0xc9c0 + lVar83) + *(int *)(this_ptr + 0xc9c0 + lVar26) +
                     *(int *)(this_ptr + 0xc9c0 + lVar27) + *(int *)(this_ptr + 0xc9c0 + lVar28) +
                     *(int *)(this_ptr + 0xc9c0 + lVar29) + *(int *)(this_ptr + 0xc9c0 + lVar30) +
                     *(int *)(this_ptr + 0xc9c0 + lVar31) + *(int *)(this_ptr + 0xc9c0 + lVar32) +
                     *(int *)(this_ptr + 0xc9c0 + lVar33) + *(int *)(this_ptr + 0xc9c0 + lVar34) +
                     *(int *)(this_ptr + 0xc9c0 + lVar35) + *(int *)(this_ptr + 0xc9c0 + lVar36) +
                     *(int *)(this_ptr + 0xc9c0 + lVar37) + *(int *)(this_ptr + 0xc9c0 + lVar38) +
                     *(int *)(this_ptr + 0xc9c0 + lVar39) + *(int *)(this_ptr + 0xc9c0 + lVar40) +
                     *(int *)(this_ptr + 0xc9c0 + lVar41) + *(int *)(this_ptr + 0xc9c0 + lVar42) +
                     *(int *)(this_ptr + 0xc9c0 + lVar43) + *(int *)(this_ptr + 0xc9c0 + lVar44) +
                     *(int *)(this_ptr + 0xc9c0 + lVar45) + *(int *)(this_ptr + 0xc9c0 + lVar46) +
                     *(int *)(this_ptr + 0xc9c0 + lVar47) + *(int *)(this_ptr + 0xc9c0 + lVar48) +
                     *(int *)(this_ptr + 0xc9c0 + lVar49) + *(int *)(this_ptr + 0xc9c0 + lVar50) +
                     *(int *)(this_ptr + 0xc9c0 + lVar51) + *(int *)(this_ptr + 0xc9c0 + lVar52) +
                     *(int *)(this_ptr + 0xc9c0 + lVar53) + *(int *)(this_ptr + 0xc9c0 + lVar54) +
                     *(int *)(this_ptr + 0xc9c0 + lVar55) + *(int *)(this_ptr + 0xc9c0 + lVar56) +
                     *(int *)(this_ptr + 0xc9c0 + lVar57) + *(int *)(this_ptr + 0xc9c0 + lVar58) +
                     *(int *)(this_ptr + 0xc9c0 + lVar59) + *(int *)(this_ptr + 0xc9c0 + lVar60) +
                     *(int *)(this_ptr + 0xc9c0 + lVar61) + *(int *)(this_ptr + 0xc9c0 + lVar62) +
                     *(int *)(this_ptr + 0xc9c0 + lVar63) + *(int *)(this_ptr + 0xc9c0 + lVar64) +
                     *(int *)(this_ptr + 0xc9c0 + lVar65) + *(int *)(this_ptr + 0xc9c0 + lVar66) +
                     *(int *)(this_ptr + 0xc9c0 + lVar67) + *(int *)(this_ptr + 0xc9c0 + lVar68) +
                     *(int *)(this_ptr + 0xc9c0 + lVar95) + *(int *)(this_ptr + 0xc9c0 + lVar69);
        }
        else if (iVar101 <= iVar82) {
          lVar92 = 0;
          do {
            uVar76 = (uint64_t)*(ushort *)(lVar11 + (int64_t)iVar101 * 2 + lVar92 * 2);
            local_44 = CONCAT22(local_44._2_2_ + *(byte *)(this_ptr + 0x944e + uVar76),
                                (ushort)local_44 + *(byte *)(this_ptr + 0x934c + uVar76));
            if (uVar23 != 2) {
              sVar6 = (ushort)local_40 + (byte)(&g_00009550)[uVar76 + this_ptr];
              local_40 = CONCAT22(local_40._2_2_,sVar6);
              if ((uVar23 != 3) &&
                 (local_40 = CONCAT22(local_40._2_2_ + *(byte *)(this_ptr + 0x9652 + uVar76),sVar6)
                 , uVar23 != 4)) {
                sVar6 = (ushort)local_3c + *(byte *)(this_ptr + 0x9754 + uVar76);
                local_3c = CONCAT22(local_3c._2_2_,sVar6);
                if ((uVar23 != 5) &&
                   (local_3c = CONCAT22(local_3c._2_2_ + *(byte *)(this_ptr + 0x9856 + uVar76),
                                        sVar6), uVar23 != 6)) {
                  local_38 = CONCAT62(local_38._2_6_,
                                      (ushort)local_38 + (byte)(&UNK_00009958)[uVar76 + this_ptr]);
                }
              }
            }
            lVar92 = lVar92 + 1;
          } while ((iVar82 - iVar101) + 1 != (int)lVar92);
        }
        uVar76 = (uint64_t)(local_44._2_2_ < (ushort)local_44);
        uVar72 = local_44._2_2_;
        if ((ushort)local_44 < local_44._2_2_) {
          uVar72 = (ushort)local_44;
        }
        uVar100 = (uint)uVar72;
        if (uVar23 != 2) {
          if ((ushort)local_40 <= uVar72) {
            uVar100 = local_40 & 0xffff;
          }
          if ((ushort)local_40 < uVar72) {
            uVar76 = 2;
          }
          if (uVar23 != 3) {
            uVar72 = (ushort)uVar100;
            if (local_40._2_2_ <= uVar72) {
              uVar100 = (uint)local_40._2_2_;
            }
            if (local_40._2_2_ < uVar72) {
              uVar76 = 3;
            }
            if (uVar23 != 4) {
              uVar72 = (ushort)uVar100;
              if ((ushort)local_3c <= uVar72) {
                uVar100 = local_3c & 0xffff;
              }
              if ((ushort)local_3c < uVar72) {
                uVar76 = 4;
              }
              if (uVar23 != 5) {
                uVar72 = (ushort)uVar100;
                if (local_3c._2_2_ <= uVar72) {
                  uVar100 = (uint)local_3c._2_2_;
                }
                if (local_3c._2_2_ < uVar72) {
                  uVar76 = 5;
                }
                if (uVar23 != 6) {
                  uVar72 = (ushort)uVar100;
                  if ((ushort)local_38 <= uVar72) {
                    uVar100 = (uint)(ushort)local_38;
                  }
                  if ((ushort)local_38 < uVar72) {
                    uVar76 = 6;
                  }
                }
              }
            }
          }
        }
        local_68[uVar76] = local_68[uVar76] + 1;
        *(char *)(this_ptr + 0x6a8 + local_c0) = (char)uVar76;
        if (bVar91) {
          lVar99 = (int64_t)iVar101;
          lVar92 = uVar76 * 0x408 + this_ptr;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 2 + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 4 + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 6 + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 8 + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 10 + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0xc + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0xe + lVar99 * 2) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x10 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x12 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x14 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x16 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x18 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x1a + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x1c + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x1e + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x20 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x22 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x24 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x26 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x28 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x2a + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x2c + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x2e + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x30 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x32 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x34 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x36 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x38 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x3a + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x3c + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x3e + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x40 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x42 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x44 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x46 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x48 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x4a + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x4c + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x4e + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x50 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x52 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x54 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x56 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x58 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x5a + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x5c + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x5e + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 0x60 + lVar99 * 2) * 4)
          ;
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(lVar92 + 0xb188 +
                          (uint64_t)*(ushort *)(lVar11 + (int64_t)iVar80 * 2) * 4);
          *piVar4 = *piVar4 + 1;
        }
        else if (iVar101 <= iVar82) {
          lVar92 = (int64_t)iVar101;
          if (((iVar82 + 1) - iVar101 & 1U) != 0) {
            piVar4 = (int *)(uVar76 * 0x408 + this_ptr + 0xb188 +
                            (uint64_t)*(ushort *)(lVar11 + lVar92 * 2) * 4);
            *piVar4 = *piVar4 + 1;
            lVar92 = lVar92 + 1;
          }
          if (iVar82 != iVar101) {
            do {
              lVar99 = uVar76 * 0x408 + this_ptr;
              piVar4 = (int *)(lVar99 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + lVar92 * 2) * 4);
              *piVar4 = *piVar4 + 1;
              piVar4 = (int *)(lVar99 + 0xb188 + (uint64_t)*(ushort *)(lVar11 + 2 + lVar92 * 2) * 4
                              );
              *piVar4 = *piVar4 + 1;
              lVar92 = lVar92 + 2;
            } while (iVar82 + 1 != (int)lVar92);
          }
        }
        iVar24 = iVar24 + uVar100;
        local_c0 = local_c0 + 1;
        iVar101 = iVar82 + 1;
        iVar79 = *(int *)(this_ptr + 0x29c);
      } while (iVar101 < iVar79);
      iVar79 = *(int *)(this_ptr + 0x290);
    }
    pFVar78 = pFVar87;
    if (2 < iVar79) {
      iVar79 = iVar24 + 7;
      if (-1 < iVar24) {
        iVar79 = iVar24;
      }
      pFVar74 = (FILE *)(uint64_t)(uint)(iVar79 >> 3);
      _fprintf(pFVar74,(char *)(uint64_t)(iVar97 + 1));
      pFVar89 = (FILE *)0x0;
      do {
        pFVar85 = (FILE *)(uint64_t)local_68[(int64_t)pFVar89];
        _fprintf(pFVar74,(char *)pFVar85);
        pFVar89 = (FILE *)((int64_t)&pFVar89->_p + 1);
      } while (pFVar87 != pFVar89);
      _fputc((int)pFVar74,pFVar85);
    }
    do {
      FUN_00ea89d0();
      pFVar78 = (FILE *)((int64_t)&pFVar78[-1]._offset + 7);
    } while (pFVar78 != (FILE *)0x0);
    iVar97 = iVar97 + 1;
  } while (iVar97 != 4);
  iVar97 = (int)local_c0;
  if (0x4652 < iVar97) {
    FUN_00e9e160();
  }
  puVar1 = (void*)((int64_t)&pFVar87[-1]._offset + 7);
  auVar103._8_4_ = (int)puVar1;
  auVar103._0_8_ = puVar1;
  auVar103._12_4_ = (int)((uint64_t)puVar1 >> 0x20);
  auVar103 = auVar103 ^ g_023945e0;
  iVar79 = auVar103._0_4_;
  iVar24 = auVar103._4_4_;
  iVar101 = auVar103._8_4_;
  iVar80 = auVar103._12_4_;
  if ((bool)(~(_UNK_023e20b4 == iVar24 && iVar79 < ram0x023e20b0 || iVar24 < _UNK_023e20b4) & 1)) {
    local_78[0] = '\0';
  }
  if (_UNK_023e20bc <= iVar80 && (_UNK_023e20bc != iVar80 || _UNK_023e20b8 <= iVar101)) {
    local_78[1] = 1;
  }
  if (_UNK_023e20c4 <= iVar24 && (_UNK_023e20c4 != iVar24 || g_023e20c0 <= iVar79)) {
    local_78[2] = 2;
  }
  if (_UNK_023e20cc <= iVar80 && (_UNK_023e20cc != iVar80 || _UNK_023e20c8 <= iVar101)) {
    local_78[3] = 3;
  }
  auVar117._0_4_ = -(uint)(iVar79 < g_023e20d0);
  auVar117._4_4_ = -(uint)(iVar24 < _UNK_023e20d4);
  auVar117._8_4_ = -(uint)(iVar101 < _UNK_023e20d8);
  auVar117._12_4_ = -(uint)(iVar80 < _UNK_023e20dc);
  auVar121._4_4_ = -(uint)(_UNK_023e20d4 == iVar24);
  auVar121._0_4_ = -(uint)(_UNK_023e20d4 == iVar24);
  auVar121._8_4_ = -(uint)(_UNK_023e20dc == iVar80);
  auVar121._12_4_ = -(uint)(_UNK_023e20dc == iVar80);
  auVar121 = auVar121 & auVar117;
  auVar112._4_4_ = auVar117._4_4_;
  auVar112._0_4_ = auVar117._4_4_;
  auVar112._8_4_ = auVar117._12_4_;
  auVar112._12_4_ = auVar117._12_4_;
  if (((SUB161(auVar112 | auVar121,0) ^ 0xff) & 1) != 0) {
    local_78[4] = 4;
  }
  if (((SUB161(auVar112 | auVar121,8) ^ 0xff) & 1) != 0) {
    local_78[5] = 5;
  }
  if (_UNK_023e20e4 <= iVar24 && (_UNK_023e20e4 != iVar24 || g_023e20e0 <= iVar79)) {
    local_78[6] = 6;
    local_78[7] = 7;
  }
  if (0 < iVar97) {
    uVar76 = 0;
    cVar22 = local_78[0];
    do {
      cVar7 = *(char *)(this_ptr + 0x6a8 + uVar76);
      lVar92 = 0;
      cVar21 = cVar22;
      while (cVar7 != cVar21) {
        cVar8 = local_78[lVar92 + 1];
        local_78[lVar92 + 1] = cVar21;
        lVar92 = lVar92 + 1;
        cVar22 = cVar7;
        cVar21 = cVar8;
      }
      *(char *)(this_ptr + 0x4cfa + uVar76) = (char)lVar92;
      uVar76 = uVar76 + 1;
    } while (uVar76 != (local_c0 & 0xffffffff));
  }
  pFVar78 = pFVar87;
  if ((int)uVar81 < -1) {
    do {
      FUN_00ea91b0(0,0x20,uVar102);
      pFVar78 = (FILE *)((int64_t)&pFVar78[-1]._offset + 7);
    } while (pFVar78 != (FILE *)0x0);
  }
  else if (uVar98 < 8) {
    lVar92 = this_ptr + 0x934c;
    pFVar78 = (FILE *)0x0;
    do {
      bVar71 = 0x20;
      uVar76 = 0;
      bVar86 = 0;
      do {
        bVar9 = *(byte *)(lVar92 + uVar76);
        if (bVar86 < bVar9) {
          bVar86 = bVar9;
        }
        if (bVar9 < bVar71) {
          bVar71 = bVar9;
        }
        uVar76 = uVar76 + 1;
      } while (uVar94 != uVar76);
      if (0x11 < bVar86) {
        FUN_00e9e160();
      }
      if (bVar71 == 0) {
        FUN_00e9e160(this_ptr);
      }
      FUN_00ea91b0(bVar86,bVar71,uVar102);
      pFVar78 = (FILE *)((int64_t)&pFVar78->_p + 1);
      lVar92 = lVar92 + 0x102;
    } while (pFVar78 != pFVar87);
  }
  else {
    lVar92 = this_ptr + 0x9350;
    lVar99 = this_ptr + 0x934c;
    local_b8 = (FILE *)0x0;
    do {
      uVar111 = 0;
      uVar113 = 0;
      uVar114 = 0;
      uVar115 = 0;
      uVar76 = 0;
      uVar116 = 0;
      uVar118 = 0;
      uVar119 = 0;
      uVar120 = 0;
      uVar100 = g_023de310;
      uVar104 = _UNK_023de314;
      uVar105 = _UNK_023de318;
      uVar106 = _UNK_023de31c;
      uVar107 = g_023de310;
      uVar108 = _UNK_023de314;
      uVar109 = _UNK_023de318;
      uVar110 = _UNK_023de31c;
      do {
        auVar121 = pmovzxbd(auVar121,*(void*)(lVar92 + -4 + uVar76));
        in_XMM5 = pmovzxbd(in_XMM5,*(void*)(lVar92 + uVar76));
        uVar13 = auVar121._0_4_;
        uVar111 = (uVar111 < uVar13) * uVar13 | (uVar111 >= uVar13) * uVar111;
        uVar15 = auVar121._4_4_;
        uVar113 = (uVar113 < uVar15) * uVar15 | (uVar113 >= uVar15) * uVar113;
        uVar17 = auVar121._8_4_;
        uVar114 = (uVar114 < uVar17) * uVar17 | (uVar114 >= uVar17) * uVar114;
        uVar19 = auVar121._12_4_;
        uVar115 = (uVar115 < uVar19) * uVar19 | (uVar115 >= uVar19) * uVar115;
        uVar14 = in_XMM5._0_4_;
        uVar116 = (uVar116 < uVar14) * uVar14 | (uVar116 >= uVar14) * uVar116;
        uVar16 = in_XMM5._4_4_;
        uVar118 = (uVar118 < uVar16) * uVar16 | (uVar118 >= uVar16) * uVar118;
        uVar18 = in_XMM5._8_4_;
        uVar119 = (uVar119 < uVar18) * uVar18 | (uVar119 >= uVar18) * uVar119;
        uVar20 = in_XMM5._12_4_;
        uVar120 = (uVar120 < uVar20) * uVar20 | (uVar120 >= uVar20) * uVar120;
        uVar100 = ((int)uVar13 < (int)uVar100) * uVar13 | ((int)uVar13 >= (int)uVar100) * uVar100;
        uVar104 = ((int)uVar15 < (int)uVar104) * uVar15 | ((int)uVar15 >= (int)uVar104) * uVar104;
        uVar105 = ((int)uVar17 < (int)uVar105) * uVar17 | ((int)uVar17 >= (int)uVar105) * uVar105;
        uVar106 = ((int)uVar19 < (int)uVar106) * uVar19 | ((int)uVar19 >= (int)uVar106) * uVar106;
        uVar107 = ((int)uVar14 < (int)uVar107) * uVar14 | ((int)uVar14 >= (int)uVar107) * uVar107;
        uVar108 = ((int)uVar16 < (int)uVar108) * uVar16 | ((int)uVar16 >= (int)uVar108) * uVar108;
        uVar109 = ((int)uVar18 < (int)uVar109) * uVar18 | ((int)uVar18 >= (int)uVar109) * uVar109;
        uVar110 = ((int)uVar20 < (int)uVar110) * uVar20 | ((int)uVar20 >= (int)uVar110) * uVar110;
        uVar76 = uVar76 + 8;
      } while ((uVar98 & 0x7ffffff8) != uVar76);
      uVar111 = (uVar111 < uVar116) * uVar116 | (uVar111 >= uVar116) * uVar111;
      uVar113 = (uVar113 < uVar118) * uVar118 | (uVar113 >= uVar118) * uVar113;
      uVar114 = (uVar114 < uVar119) * uVar119 | (uVar114 >= uVar119) * uVar114;
      uVar115 = (uVar115 < uVar120) * uVar120 | (uVar115 >= uVar120) * uVar115;
      uVar111 = (uVar114 < uVar111) * uVar111 | (uVar114 >= uVar111) * uVar114;
      uVar113 = (uVar115 < uVar113) * uVar113 | (uVar115 >= uVar113) * uVar115;
      uVar111 = (uVar113 < uVar111) * uVar111 | (uVar113 >= uVar111) * uVar113;
      uVar100 = ((int)uVar107 < (int)uVar100) * uVar107 | ((int)uVar107 >= (int)uVar100) * uVar100;
      uVar104 = ((int)uVar108 < (int)uVar104) * uVar108 | ((int)uVar108 >= (int)uVar104) * uVar104;
      uVar105 = ((int)uVar109 < (int)uVar105) * uVar109 | ((int)uVar109 >= (int)uVar105) * uVar105;
      uVar106 = ((int)uVar110 < (int)uVar106) * uVar110 | ((int)uVar110 >= (int)uVar106) * uVar106;
      uVar100 = ((int)uVar100 < (int)uVar105) * uVar100 | ((int)uVar100 >= (int)uVar105) * uVar105;
      uVar104 = ((int)uVar104 < (int)uVar106) * uVar104 | ((int)uVar104 >= (int)uVar106) * uVar106;
      uVar100 = ((int)uVar100 < (int)uVar104) * uVar100 | ((int)uVar100 >= (int)uVar104) * uVar104;
      for (uVar76 = (uint64_t)(uVar98 & 0x7ffffff8); uVar76 != uVar94; uVar76 = uVar76 + 1) {
        bVar71 = *(byte *)(lVar99 + uVar76);
        if (uVar111 < bVar71) {
          uVar111 = (uint)bVar71;
        }
        if ((int)(uint)bVar71 < (int)uVar100) {
          uVar100 = (uint)bVar71;
        }
      }
      if (0x11 < (int)uVar111) {
        FUN_00e9e160();
      }
      if ((int)uVar100 < 1) {
        FUN_00e9e160(this_ptr);
      }
      FUN_00ea91b0(uVar111,uVar100,uVar102);
      local_b8 = (FILE *)((int64_t)&local_b8->_p + 1);
      lVar92 = lVar92 + 0x102;
      lVar99 = lVar99 + 0x102;
    } while (local_b8 != pFVar87);
  }
  pcVar70 = (char *)(this_ptr + 0x8f);
  lVar92 = 0;
  do {
    local_78[lVar92] = '\0';
    cVar22 = pcVar70[-0xf];
    local_78[lVar92] = cVar22 != '\0';
    bVar91 = pcVar70[-0xe] != '\0' || cVar22 != '\0';
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-0xd] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-0xc] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-0xb] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-10] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-9] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-8] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-7] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-6] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-5] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-4] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-3] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-2] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    bVar91 = pcVar70[-1] != '\0' || bVar91;
    local_78[lVar92] = bVar91;
    local_78[lVar92] = *pcVar70 != '\0' || bVar91;
    lVar92 = lVar92 + 1;
    pcVar70 = pcVar70 + 0x10;
  } while (lVar92 != 0x10);
  piVar4 = (int *)(this_ptr + 0x74);
  iVar79 = *(int *)(this_ptr + 0x74);
  piVar3 = (int *)(this_ptr + 0x284);
  puVar25 = (uint *)(this_ptr + 0x280);
  plVar2 = (int64_t *)(this_ptr + 0x50);
  lVar92 = 0;
  iVar24 = iVar79;
  do {
    iVar101 = *piVar3;
    uVar102 = *puVar25;
    if (local_78[lVar92] == '\0') {
      if (7 < iVar101) {
        do {
          *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
          iVar24 = *piVar4 + 1;
          *piVar4 = iVar24;
          uVar102 = *puVar25 << 8;
          *puVar25 = uVar102;
          iVar80 = *piVar3;
          iVar101 = iVar80 + -8;
          *piVar3 = iVar101;
        } while (0xf < iVar80);
      }
    }
    else {
      if (7 < iVar101) {
        do {
          *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
          iVar24 = *piVar4 + 1;
          *piVar4 = iVar24;
          uVar102 = *puVar25 << 8;
          *puVar25 = uVar102;
          iVar80 = *piVar3;
          iVar101 = iVar80 + -8;
          *piVar3 = iVar101;
        } while (0xf < iVar80);
      }
      uVar102 = uVar102 | 0x80000000U >> ((byte)iVar101 & 0x1f);
    }
    iVar101 = iVar101 + 1;
    *puVar25 = uVar102;
    *piVar3 = iVar101;
    lVar92 = lVar92 + 1;
  } while (lVar92 != 0x10);
  lVar92 = 0;
  do {
    if (local_78[lVar92] != '\0') {
      lVar99 = 0;
      do {
        if (*(char *)(this_ptr + 0x80 + lVar99 + lVar92 * 0x10) == '\0') {
          if (7 < iVar101) {
            do {
              *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
              iVar24 = *piVar4 + 1;
              *piVar4 = iVar24;
              uVar102 = *puVar25 << 8;
              *puVar25 = uVar102;
              iVar80 = *piVar3;
              iVar101 = iVar80 + -8;
              *piVar3 = iVar101;
            } while (0xf < iVar80);
          }
        }
        else {
          if (7 < iVar101) {
            do {
              *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
              iVar24 = *piVar4 + 1;
              *piVar4 = iVar24;
              uVar102 = *puVar25 << 8;
              *puVar25 = uVar102;
              iVar80 = *piVar3;
              iVar101 = iVar80 + -8;
              *piVar3 = iVar101;
            } while (0xf < iVar80);
          }
          uVar102 = uVar102 | 0x80000000U >> ((byte)iVar101 & 0x1f);
        }
        iVar101 = iVar101 + 1;
        *puVar25 = uVar102;
        *piVar3 = iVar101;
        lVar99 = lVar99 + 1;
      } while (lVar99 != 0x10);
    }
    lVar92 = lVar92 + 1;
  } while (lVar92 != 0x10);
  if (2 < *(int *)(this_ptr + 0x290)) {
    _fprintf((FILE *)PTR____stderrp_024a98a0,(char *)(uint64_t)(uint)(iVar24 - iVar79));
    iVar24 = *piVar4;
    iVar101 = *piVar3;
    uVar102 = *puVar25;
  }
  iVar79 = iVar24;
  if (7 < iVar101) {
    do {
      *(char *)(*plVar2 + (int64_t)iVar79) = (char)(uVar102 >> 0x18);
      iVar79 = *piVar4 + 1;
      *piVar4 = iVar79;
      uVar102 = *puVar25 << 8;
      *puVar25 = uVar102;
      iVar80 = *piVar3;
      iVar101 = iVar80 + -8;
      *piVar3 = iVar101;
    } while (0xf < iVar80);
  }
  iVar80 = iVar101 + 3;
  uVar102 = uVar23 << (0x1dU - (char)iVar101 & 0x1f) | uVar102;
  *puVar25 = uVar102;
  *piVar3 = iVar80;
  if (4 < iVar101) {
    do {
      *(char *)(*plVar2 + (int64_t)iVar79) = (char)(uVar102 >> 0x18);
      iVar79 = *piVar4 + 1;
      *piVar4 = iVar79;
      uVar102 = *puVar25 << 8;
      *puVar25 = uVar102;
      iVar101 = *piVar3;
      iVar80 = iVar101 + -8;
      *piVar3 = iVar80;
    } while (0xf < iVar101);
  }
  iVar101 = iVar80 + 0xf;
  uVar102 = iVar97 << (0x11U - (char)iVar80 & 0x1f) | uVar102;
  *puVar25 = uVar102;
  *piVar3 = iVar101;
  if (0 < iVar97) {
    uVar76 = 0;
    do {
      bVar71 = *(byte *)(this_ptr + 0x4cfa + uVar76);
      uVar98 = (uint)bVar71;
      if (bVar71 != 0) {
        uVar100 = 0;
        do {
          if (7 < iVar101) {
            do {
              *(char *)(*plVar2 + (int64_t)iVar79) = (char)(uVar102 >> 0x18);
              iVar79 = *piVar4 + 1;
              *piVar4 = iVar79;
              uVar102 = *puVar25 << 8;
              *puVar25 = uVar102;
              iVar80 = *piVar3;
              iVar101 = iVar80 + -8;
              *piVar3 = iVar101;
            } while (0xf < iVar80);
            uVar98 = (uint)*(byte *)(this_ptr + 0x4cfa + uVar76);
          }
          bVar71 = (byte)iVar101;
          iVar101 = iVar101 + 1;
          uVar102 = uVar102 | 0x80000000U >> (bVar71 & 0x1f);
          *puVar25 = uVar102;
          *piVar3 = iVar101;
          uVar100 = uVar100 + 1;
        } while (uVar100 < uVar98);
      }
      if (7 < iVar101) {
        do {
          *(char *)(*plVar2 + (int64_t)iVar79) = (char)(uVar102 >> 0x18);
          iVar79 = *piVar4 + 1;
          *piVar4 = iVar79;
          uVar102 = *puVar25 << 8;
          *puVar25 = uVar102;
          iVar80 = *piVar3;
          iVar101 = iVar80 + -8;
          *piVar3 = iVar101;
        } while (0xf < iVar80);
      }
      iVar101 = iVar101 + 1;
      *puVar25 = uVar102;
      *piVar3 = iVar101;
      uVar76 = uVar76 + 1;
    } while (uVar76 != (local_c0 & 0xffffffff));
  }
  if (2 < *(int *)(this_ptr + 0x290)) {
    _fprintf((FILE *)PTR____stderrp_024a98a0,(char *)(uint64_t)(uint)(iVar79 - iVar24));
    iVar79 = *piVar4;
    iVar101 = *piVar3;
    uVar102 = *puVar25;
  }
  pFVar78 = (FILE *)0x0;
  iVar24 = iVar79;
  do {
    uVar98 = (uint)*(byte *)(this_ptr + 0x934c + (int64_t)pFVar78 * 0x102);
    if (7 < iVar101) {
      do {
        *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
        iVar24 = *piVar4 + 1;
        *piVar4 = iVar24;
        uVar102 = *puVar25 << 8;
        *puVar25 = uVar102;
        iVar80 = *piVar3;
        iVar101 = iVar80 + -8;
        *piVar3 = iVar101;
      } while (0xf < iVar80);
    }
    iVar80 = iVar101 + 5;
    uVar102 = uVar98 << (0x1bU - (char)iVar101 & 0x1f) | uVar102;
    *puVar25 = uVar102;
    *piVar3 = iVar80;
    iVar101 = iVar80;
    if (-2 < (int)uVar81) {
      uVar76 = 0;
      do {
        lVar92 = (int64_t)pFVar78 * 0x102 + this_ptr;
        pbVar5 = (byte *)(uVar76 + 0x934c + lVar92);
        bVar71 = *(byte *)(uVar76 + 0x934c + lVar92);
        for (; uVar100 = (uint)bVar71, (int)uVar98 < (int)uVar100; uVar98 = uVar98 + 1) {
          if (7 < iVar101) {
            do {
              *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
              iVar24 = *piVar4 + 1;
              *piVar4 = iVar24;
              uVar102 = *puVar25 << 8;
              *puVar25 = uVar102;
              iVar80 = *piVar3;
              iVar101 = iVar80 + -8;
              *piVar3 = iVar101;
            } while (0xf < iVar80);
            bVar71 = *pbVar5;
          }
          cVar22 = (char)iVar101;
          iVar101 = iVar101 + 2;
          uVar102 = uVar102 | 2 << (0x1eU - cVar22 & 0x1f);
          *puVar25 = uVar102;
          *piVar3 = iVar101;
        }
        while ((int)uVar100 < (int)uVar98) {
          if (7 < iVar101) {
            do {
              *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
              iVar24 = *piVar4 + 1;
              *piVar4 = iVar24;
              uVar102 = *puVar25 << 8;
              *puVar25 = uVar102;
              iVar80 = *piVar3;
              iVar101 = iVar80 + -8;
              *piVar3 = iVar101;
            } while (0xf < iVar80);
            bVar71 = *pbVar5;
          }
          cVar22 = (char)iVar101;
          iVar101 = iVar101 + 2;
          uVar102 = uVar102 | 3 << (0x1eU - cVar22 & 0x1f);
          *puVar25 = uVar102;
          *piVar3 = iVar101;
          uVar98 = uVar98 - 1;
          uVar100 = (uint)bVar71;
        }
        if (7 < iVar101) {
          do {
            *(char *)(*plVar2 + (int64_t)iVar24) = (char)(uVar102 >> 0x18);
            iVar24 = *piVar4 + 1;
            *piVar4 = iVar24;
            uVar102 = *puVar25 << 8;
            *puVar25 = uVar102;
            iVar80 = *piVar3;
            iVar101 = iVar80 + -8;
            *piVar3 = iVar101;
          } while (0xf < iVar80);
        }
        iVar101 = iVar101 + 1;
        *puVar25 = uVar102;
        *piVar3 = iVar101;
        uVar76 = uVar76 + 1;
      } while (uVar76 != uVar94);
    }
    pFVar78 = (FILE *)((int64_t)&pFVar78->_p + 1);
  } while (pFVar78 != pFVar87);
  if (2 < *(int *)(this_ptr + 0x290)) {
    _fprintf(pFVar78,(char *)(uint64_t)(uint)(iVar24 - iVar79));
    iVar24 = *piVar4;
  }
  iVar79 = *(int *)(this_ptr + 0x29c);
  lVar92 = 0;
  if (0 < iVar79) {
    uVar81 = 0;
    do {
      iVar80 = uVar81 + 0x31;
      iVar101 = iVar79 + -1;
      if (iVar80 < iVar79) {
        iVar101 = iVar80;
      }
      if (uVar23 <= *(byte *)(this_ptr + 0x6a8 + lVar92)) {
        FUN_00e9e160();
      }
      if ((bool)(bVar12 & iVar101 - uVar81 == 0x31)) {
        uVar94 = (uint64_t)*(byte *)(this_ptr + 0x6a8 + lVar92);
        lVar99 = (int64_t)(int)uVar81;
        uVar76 = (uint64_t)*(ushort *)(lVar11 + lVar99 * 2);
        lVar75 = uVar94 * 0x102 + this_ptr;
        bVar71 = *(byte *)(uVar76 + 0x934c + lVar75);
        lVar83 = uVar94 * 0x408 + this_ptr;
        iVar82 = *(int *)(&UNK_00009958 + uVar76 * 4 + lVar83);
        uVar81 = *(uint *)(this_ptr + 0x280);
        iVar79 = *(int *)(this_ptr + 0x284);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 2 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 4 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 6 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 8 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 10 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0xc + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0xe + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x10 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x12 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x14 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x16 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x18 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x1a + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x1c + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x1e + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x20 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x22 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x24 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x26 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x28 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x2a + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x2c + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x2e + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x30 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x32 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x34 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x36 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x38 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x3a + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x3c + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x3e + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x40 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x42 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x44 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x46 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x48 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x4a + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x4c + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x4e + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x50 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x52 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x54 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x56 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x58 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x5a + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x5c + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x5e + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + 0x60 + lVar99 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar82 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar73 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar73) = (char)(uVar81 >> 0x18);
            iVar73 = *piVar4 + 1;
            *piVar4 = iVar73;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar10 = *piVar3;
            iVar79 = iVar10 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar10);
        }
        iVar79 = iVar79 + (uint)bVar71;
        uVar81 = iVar82 << (-(char)iVar79 & 0x1fU) | uVar81;
        *(uint *)(this_ptr + 0x280) = uVar81;
        *(int *)(this_ptr + 0x284) = iVar79;
        uVar94 = (uint64_t)*(ushort *)(lVar11 + (int64_t)iVar80 * 2);
        bVar71 = *(byte *)(uVar94 + 0x934c + lVar75);
        iVar80 = *(int *)(&UNK_00009958 + uVar94 * 4 + lVar83);
        if (7 < iVar79) {
          iVar82 = *piVar4;
          do {
            *(char *)(*plVar2 + (int64_t)iVar82) = (char)(uVar81 >> 0x18);
            iVar82 = *piVar4 + 1;
            *piVar4 = iVar82;
            uVar81 = *puVar25 << 8;
            *puVar25 = uVar81;
            iVar73 = *piVar3;
            iVar79 = iVar73 + -8;
            *piVar3 = iVar79;
          } while (0xf < iVar73);
        }
        iVar79 = iVar79 + (uint)bVar71;
        *puVar25 = iVar80 << (-(char)iVar79 & 0x1fU) | uVar81;
        *piVar3 = iVar79;
      }
      else if ((int)uVar81 <= iVar101) {
        lVar99 = (int64_t)(int)uVar81;
        iVar79 = *piVar3;
        uVar81 = *puVar25;
        do {
          uVar94 = (uint64_t)*(byte *)(this_ptr + 0x6a8 + lVar92);
          uVar76 = (uint64_t)*(ushort *)(lVar11 + lVar99 * 2);
          bVar71 = *(byte *)(uVar76 + 0x934c + uVar94 * 0x102 + this_ptr);
          iVar80 = *(int *)(&UNK_00009958 + uVar76 * 4 + uVar94 * 0x408 + this_ptr);
          if (7 < iVar79) {
            iVar82 = *piVar4;
            do {
              *(char *)(*plVar2 + (int64_t)iVar82) = (char)(uVar81 >> 0x18);
              iVar82 = *piVar4 + 1;
              *piVar4 = iVar82;
              uVar81 = *puVar25 << 8;
              *puVar25 = uVar81;
              iVar73 = *piVar3;
              iVar79 = iVar73 + -8;
              *piVar3 = iVar79;
            } while (0xf < iVar73);
          }
          iVar79 = iVar79 + (uint)bVar71;
          uVar81 = uVar81 | iVar80 << (-(char)iVar79 & 0x1fU);
          *puVar25 = uVar81;
          *piVar3 = iVar79;
          lVar99 = lVar99 + 1;
        } while (iVar101 + 1 != (int)lVar99);
      }
      uVar81 = iVar101 + 1;
      pFVar78 = (FILE *)(uint64_t)uVar81;
      lVar92 = lVar92 + 1;
      iVar79 = *(int *)(this_ptr + 0x29c);
    } while ((int)uVar81 < iVar79);
  }
  if ((int)lVar92 != iVar97) {
    FUN_00e9e160();
  }
  if (*(int *)(this_ptr + 0x290) < 3) {
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
      return;
    }
  }
  else if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    _fprintf(pFVar78,(char *)(uint64_t)(uint)(*piVar4 - iVar24));
    return;
  }
                      ___stack_chk_fail();
}

