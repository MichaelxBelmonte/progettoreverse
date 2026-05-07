// Function: FUN_00e9ff20
// Address: 00e9ff20
// Size: 3434 bytes
// Class: GNString
// String references:
//   "    block %d: crc = 0x%08x, combined CRC = 0x%08x, size = %d\n"
//   "    final combined CRC = 0x%08x\n   "
//   "0000000000000000@@@@@@@@@@@@@@@@PPPPPPPPPPPPPPPP````````````````pppppppppppppppp"


void FUN_00e9ff20(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  FILE *pFVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  char unaff_SIL;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_RDI;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte local_138 [256];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar8 = *(int *)(unaff_RDI + 0x6c);
  if (0 < iVar8) {
    uVar11 = ~*(uint *)(unaff_RDI + 0x288);
    *(uint *)(unaff_RDI + 0x288) = uVar11;
    uVar19 = (*(int *)(unaff_RDI + 0x28c) << 1 | (uint)(*(int *)(unaff_RDI + 0x28c) < 0)) ^ uVar11;
    param_3 = (byte *)(ulonglong)uVar19;
    *(uint *)(unaff_RDI + 0x28c) = uVar19;
    if (1 < (int)*(uint *)(unaff_RDI + 0x294)) {
      *(undefined4 *)(unaff_RDI + 0x74) = 0;
    }
    if (1 < *(int *)(unaff_RDI + 0x290)) {
      _fprintf((FILE *)(ulonglong)uVar11,(char *)(ulonglong)*(uint *)(unaff_RDI + 0x294));
    }
    FUN_00e9af00();
    iVar8 = *(int *)(unaff_RDI + 0x6c);
  }
  lVar9 = (longlong)iVar8 + *(longlong *)(unaff_RDI + 0x20);
  *(longlong *)(unaff_RDI + 0x50) = lVar9;
  if (*(int *)(unaff_RDI + 0x294) == 1) {
    *(undefined8 *)(unaff_RDI + 0x280) = 0x842000000;
    *(undefined1 *)(lVar9 + *(int *)(unaff_RDI + 0x74)) = 0x42;
    iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
    *(int *)(unaff_RDI + 0x74) = iVar7;
    uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    iVar8 = *(int *)(unaff_RDI + 0x284);
    *(int *)(unaff_RDI + 0x284) = iVar8 + -8;
    while (0xf < iVar8) {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
      iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar7;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar8 = *(int *)(unaff_RDI + 0x284);
      *(int *)(unaff_RDI + 0x284) = iVar8 + -8;
    }
    uVar11 = 0x5a << (-(char)iVar8 & 0x1fU) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar8;
    if (7 < iVar8) {
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
        iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar7;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar8 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar8;
      } while (0xf < iVar3);
    }
    uVar19 = iVar8 + 8;
    uVar11 = 0x68 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(uint *)(unaff_RDI + 0x284) = uVar19;
    iVar3 = *(int *)(unaff_RDI + 0x298);
    if (-1 < iVar8) {
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
        iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar7;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar8 = *(int *)(unaff_RDI + 0x284);
        uVar19 = iVar8 - 8;
        *(uint *)(unaff_RDI + 0x284) = uVar19;
      } while (0xf < iVar8);
    }
    param_3 = (byte *)(ulonglong)uVar19;
    *(uint *)(unaff_RDI + 0x280) = (iVar3 + 0x30U & 0xff) << (0x18U - (char)uVar19 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x284) = uVar19 + 8;
    iVar8 = *(int *)(unaff_RDI + 0x6c);
  }
  if (iVar8 < 1) goto LAB_00ea094b;
  uVar11 = *(uint *)(unaff_RDI + 0x280);
  iVar8 = *(int *)(unaff_RDI + 0x284);
  if (7 < iVar8) {
    iVar7 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
      iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar7;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar8 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar8;
    } while (0xf < iVar3);
  }
  iVar7 = iVar8 + 8;
  uVar11 = 0x31 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
  *(uint *)(unaff_RDI + 0x280) = uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar7;
  if (-1 < iVar8) {
    iVar8 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
      iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar8;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar7 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar7;
    } while (0xf < iVar3);
  }
  iVar8 = iVar7 + 8;
  uVar11 = 0x41 << (0x18U - (char)iVar7 & 0x1f) | uVar11;
  *(uint *)(unaff_RDI + 0x280) = uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar8;
  if (-1 < iVar7) {
    iVar7 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
      iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar7;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar8 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar8;
    } while (0xf < iVar3);
  }
  iVar7 = iVar8 + 8;
  uVar11 = 0x59 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
  *(uint *)(unaff_RDI + 0x280) = uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar7;
  if (-1 < iVar8) {
    iVar8 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
      iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar8;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar7 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar7;
    } while (0xf < iVar3);
  }
  iVar8 = iVar7 + 8;
  uVar11 = 0x26 << (0x18U - (char)iVar7 & 0x1f) | uVar11;
  *(uint *)(unaff_RDI + 0x280) = uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar8;
  if (-1 < iVar7) {
    iVar7 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
      iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar7;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar8 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar8;
    } while (0xf < iVar3);
  }
  iVar7 = iVar8 + 8;
  uVar11 = 0x53 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
  *(uint *)(unaff_RDI + 0x280) = uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar7;
  if (-1 < iVar8) {
    iVar8 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
      iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar8;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar7 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar7;
    } while (0xf < iVar3);
  }
  bVar18 = 0x18 - (char)iVar7;
  param_3 = (byte *)CONCAT71((int7)((ulonglong)param_3 >> 8),bVar18);
  *(uint *)(unaff_RDI + 0x280) = 0x59 << (bVar18 & 0x1f) | uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar7 + 8;
  FUN_00ea0cc0();
  uVar11 = *(uint *)(unaff_RDI + 0x280);
  iVar8 = *(int *)(unaff_RDI + 0x284);
  if (7 < iVar8) {
    iVar7 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
      iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar7;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar3 = *(int *)(unaff_RDI + 0x284);
      iVar8 = iVar3 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar8;
    } while (0xf < iVar3);
  }
  iVar7 = iVar8 + 1;
  *(uint *)(unaff_RDI + 0x280) = uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar7;
  iVar3 = *(int *)(unaff_RDI + 0x30);
  if (6 < iVar8) {
    iVar8 = *(int *)(unaff_RDI + 0x74);
    do {
      *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
      iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
      *(int *)(unaff_RDI + 0x74) = iVar8;
      uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
      *(uint *)(unaff_RDI + 0x280) = uVar11;
      iVar4 = *(int *)(unaff_RDI + 0x284);
      iVar7 = iVar4 + -8;
      *(int *)(unaff_RDI + 0x284) = iVar7;
    } while (0xf < iVar4);
  }
  *(uint *)(unaff_RDI + 0x280) = iVar3 << (8U - (char)iVar7 & 0x1f) | uVar11;
  *(int *)(unaff_RDI + 0x284) = iVar7 + 0x18;
  lVar9 = *(longlong *)(unaff_RDI + 0x38);
  lVar5 = *(longlong *)(unaff_RDI + 0x40);
  lVar6 = *(longlong *)(unaff_RDI + 0x48);
  *(undefined4 *)(unaff_RDI + 0x7c) = 0;
  uVar11 = 0;
  lVar10 = 0x181;
  do {
    if (*(char *)(unaff_RDI + -0x101 + lVar10) != '\0') {
      *(char *)(unaff_RDI + -1 + lVar10) = (char)uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)(unaff_RDI + 0x7c) = uVar11;
    }
    if (*(char *)(unaff_RDI + -0x100 + lVar10) != '\0') {
      *(char *)(unaff_RDI + lVar10) = (char)uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)(unaff_RDI + 0x7c) = uVar11;
    }
    lVar10 = lVar10 + 2;
  } while (lVar10 != 0x281);
  if ((-2 < (int)uVar11) && (___bzero(), 0 < (int)uVar11)) {
    if (uVar11 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulonglong)(uVar11 & 0xffffffe0);
      uVar16 = (uVar12 - 0x20 >> 5) + 1;
      uVar14 = (ulonglong)((uint)uVar16 & 3);
      bVar18 = DAT_023e2040;
      bVar20 = UNK_023e2041;
      bVar21 = UNK_023e2042;
      bVar22 = UNK_023e2043;
      bVar23 = UNK_023e2044;
      bVar24 = UNK_023e2045;
      bVar25 = UNK_023e2046;
      bVar26 = UNK_023e2047;
      bVar27 = UNK_023e2048;
      bVar28 = UNK_023e2049;
      bVar29 = UNK_023e204a;
      bVar30 = UNK_023e204b;
      bVar31 = UNK_023e204c;
      bVar32 = UNK_023e204d;
      bVar33 = UNK_023e204e;
      bVar34 = UNK_023e204f;
      if (uVar12 - 0x20 < 0x60) {
        lVar17 = 0;
      }
      else {
        lVar10 = -(uVar16 & 0xfffffffffffffffc);
        lVar17 = 0;
        do {
          local_138[lVar17] = bVar18;
          local_138[lVar17 + 1] = bVar20;
          local_138[lVar17 + 2] = bVar21;
          local_138[lVar17 + 3] = bVar22;
          local_138[lVar17 + 4] = bVar23;
          local_138[lVar17 + 5] = bVar24;
          local_138[lVar17 + 6] = bVar25;
          local_138[lVar17 + 7] = bVar26;
          local_138[lVar17 + 8] = bVar27;
          local_138[lVar17 + 9] = bVar28;
          local_138[lVar17 + 10] = bVar29;
          local_138[lVar17 + 0xb] = bVar30;
          local_138[lVar17 + 0xc] = bVar31;
          local_138[lVar17 + 0xd] = bVar32;
          local_138[lVar17 + 0xe] = bVar33;
          local_138[lVar17 + 0xf] = bVar34;
          local_138[lVar17 + 0x10] = bVar18 + DAT_023e2050;
          local_138[lVar17 + 0x11] = bVar20 + UNK_023e2051;
          local_138[lVar17 + 0x12] = bVar21 + UNK_023e2052;
          local_138[lVar17 + 0x13] = bVar22 + UNK_023e2053;
          local_138[lVar17 + 0x14] = bVar23 + UNK_023e2054;
          local_138[lVar17 + 0x15] = bVar24 + UNK_023e2055;
          local_138[lVar17 + 0x16] = bVar25 + UNK_023e2056;
          local_138[lVar17 + 0x17] = bVar26 + UNK_023e2057;
          local_138[lVar17 + 0x18] = bVar27 + UNK_023e2058;
          local_138[lVar17 + 0x19] = bVar28 + UNK_023e2059;
          local_138[lVar17 + 0x1a] = bVar29 + UNK_023e205a;
          local_138[lVar17 + 0x1b] = bVar30 + UNK_023e205b;
          local_138[lVar17 + 0x1c] = bVar31 + UNK_023e205c;
          local_138[lVar17 + 0x1d] = bVar32 + UNK_023e205d;
          local_138[lVar17 + 0x1e] = bVar33 + UNK_023e205e;
          local_138[lVar17 + 0x1f] = bVar34 + UNK_023e205f;
          local_138[lVar17 + 0x20] = bVar18 + DAT_02410fa0;
          local_138[lVar17 + 0x21] = bVar20 + UNK_02410fa1;
          local_138[lVar17 + 0x22] = bVar21 + UNK_02410fa2;
          local_138[lVar17 + 0x23] = bVar22 + UNK_02410fa3;
          local_138[lVar17 + 0x24] = bVar23 + UNK_02410fa4;
          local_138[lVar17 + 0x25] = bVar24 + UNK_02410fa5;
          local_138[lVar17 + 0x26] = bVar25 + UNK_02410fa6;
          local_138[lVar17 + 0x27] = bVar26 + UNK_02410fa7;
          local_138[lVar17 + 0x28] = bVar27 + UNK_02410fa8;
          local_138[lVar17 + 0x29] = bVar28 + UNK_02410fa9;
          local_138[lVar17 + 0x2a] = bVar29 + UNK_02410faa;
          local_138[lVar17 + 0x2b] = bVar30 + UNK_02410fab;
          local_138[lVar17 + 0x2c] = bVar31 + UNK_02410fac;
          local_138[lVar17 + 0x2d] = bVar32 + UNK_02410fad;
          local_138[lVar17 + 0x2e] = bVar33 + UNK_02410fae;
          local_138[lVar17 + 0x2f] = bVar34 + UNK_02410faf;
          local_138[lVar17 + 0x30] = bVar18 + s_0000000000000000_________________023e2060[0];
          local_138[lVar17 + 0x31] = bVar20 + s_0000000000000000_________________023e2060[1];
          local_138[lVar17 + 0x32] = bVar21 + s_0000000000000000_________________023e2060[2];
          local_138[lVar17 + 0x33] = bVar22 + s_0000000000000000_________________023e2060[3];
          local_138[lVar17 + 0x34] = bVar23 + s_0000000000000000_________________023e2060[4];
          local_138[lVar17 + 0x35] = bVar24 + s_0000000000000000_________________023e2060[5];
          local_138[lVar17 + 0x36] = bVar25 + s_0000000000000000_________________023e2060[6];
          local_138[lVar17 + 0x37] = bVar26 + s_0000000000000000_________________023e2060[7];
          local_138[lVar17 + 0x38] = bVar27 + s_0000000000000000_________________023e2060[8];
          local_138[lVar17 + 0x39] = bVar28 + s_0000000000000000_________________023e2060[9];
          local_138[lVar17 + 0x3a] = bVar29 + s_0000000000000000_________________023e2060[10];
          local_138[lVar17 + 0x3b] = bVar30 + s_0000000000000000_________________023e2060[0xb];
          local_138[lVar17 + 0x3c] = bVar31 + s_0000000000000000_________________023e2060[0xc];
          local_138[lVar17 + 0x3d] = bVar32 + s_0000000000000000_________________023e2060[0xd];
          local_138[lVar17 + 0x3e] = bVar33 + s_0000000000000000_________________023e2060[0xe];
          local_138[lVar17 + 0x3f] = bVar34 + s_0000000000000000_________________023e2060[0xf];
          local_138[lVar17 + 0x40] = bVar18 + s_0000000000000000_________________023e2060[0x10];
          local_138[lVar17 + 0x41] = bVar20 + s_0000000000000000_________________023e2060[0x11];
          local_138[lVar17 + 0x42] = bVar21 + s_0000000000000000_________________023e2060[0x12];
          local_138[lVar17 + 0x43] = bVar22 + s_0000000000000000_________________023e2060[0x13];
          local_138[lVar17 + 0x44] = bVar23 + s_0000000000000000_________________023e2060[0x14];
          local_138[lVar17 + 0x45] = bVar24 + s_0000000000000000_________________023e2060[0x15];
          local_138[lVar17 + 0x46] = bVar25 + s_0000000000000000_________________023e2060[0x16];
          local_138[lVar17 + 0x47] = bVar26 + s_0000000000000000_________________023e2060[0x17];
          local_138[lVar17 + 0x48] = bVar27 + s_0000000000000000_________________023e2060[0x18];
          local_138[lVar17 + 0x49] = bVar28 + s_0000000000000000_________________023e2060[0x19];
          local_138[lVar17 + 0x4a] = bVar29 + s_0000000000000000_________________023e2060[0x1a];
          local_138[lVar17 + 0x4b] = bVar30 + s_0000000000000000_________________023e2060[0x1b];
          local_138[lVar17 + 0x4c] = bVar31 + s_0000000000000000_________________023e2060[0x1c];
          local_138[lVar17 + 0x4d] = bVar32 + s_0000000000000000_________________023e2060[0x1d];
          local_138[lVar17 + 0x4e] = bVar33 + s_0000000000000000_________________023e2060[0x1e];
          local_138[lVar17 + 0x4f] = bVar34 + s_0000000000000000_________________023e2060[0x1f];
          local_138[lVar17 + 0x50] = bVar18 + s_0000000000000000_________________023e2060[0x20];
          local_138[lVar17 + 0x51] = bVar20 + s_0000000000000000_________________023e2060[0x21];
          local_138[lVar17 + 0x52] = bVar21 + s_0000000000000000_________________023e2060[0x22];
          local_138[lVar17 + 0x53] = bVar22 + s_0000000000000000_________________023e2060[0x23];
          local_138[lVar17 + 0x54] = bVar23 + s_0000000000000000_________________023e2060[0x24];
          local_138[lVar17 + 0x55] = bVar24 + s_0000000000000000_________________023e2060[0x25];
          local_138[lVar17 + 0x56] = bVar25 + s_0000000000000000_________________023e2060[0x26];
          local_138[lVar17 + 0x57] = bVar26 + s_0000000000000000_________________023e2060[0x27];
          local_138[lVar17 + 0x58] = bVar27 + s_0000000000000000_________________023e2060[0x28];
          local_138[lVar17 + 0x59] = bVar28 + s_0000000000000000_________________023e2060[0x29];
          local_138[lVar17 + 0x5a] = bVar29 + s_0000000000000000_________________023e2060[0x2a];
          local_138[lVar17 + 0x5b] = bVar30 + s_0000000000000000_________________023e2060[0x2b];
          local_138[lVar17 + 0x5c] = bVar31 + s_0000000000000000_________________023e2060[0x2c];
          local_138[lVar17 + 0x5d] = bVar32 + s_0000000000000000_________________023e2060[0x2d];
          local_138[lVar17 + 0x5e] = bVar33 + s_0000000000000000_________________023e2060[0x2e];
          local_138[lVar17 + 0x5f] = bVar34 + s_0000000000000000_________________023e2060[0x2f];
          local_138[lVar17 + 0x60] = bVar18 + s_0000000000000000_________________023e2060[0x30];
          local_138[lVar17 + 0x61] = bVar20 + s_0000000000000000_________________023e2060[0x31];
          local_138[lVar17 + 0x62] = bVar21 + s_0000000000000000_________________023e2060[0x32];
          local_138[lVar17 + 99] = bVar22 + s_0000000000000000_________________023e2060[0x33];
          local_138[lVar17 + 100] = bVar23 + s_0000000000000000_________________023e2060[0x34];
          local_138[lVar17 + 0x65] = bVar24 + s_0000000000000000_________________023e2060[0x35];
          local_138[lVar17 + 0x66] = bVar25 + s_0000000000000000_________________023e2060[0x36];
          local_138[lVar17 + 0x67] = bVar26 + s_0000000000000000_________________023e2060[0x37];
          local_138[lVar17 + 0x68] = bVar27 + s_0000000000000000_________________023e2060[0x38];
          local_138[lVar17 + 0x69] = bVar28 + s_0000000000000000_________________023e2060[0x39];
          local_138[lVar17 + 0x6a] = bVar29 + s_0000000000000000_________________023e2060[0x3a];
          local_138[lVar17 + 0x6b] = bVar30 + s_0000000000000000_________________023e2060[0x3b];
          local_138[lVar17 + 0x6c] = bVar31 + s_0000000000000000_________________023e2060[0x3c];
          local_138[lVar17 + 0x6d] = bVar32 + s_0000000000000000_________________023e2060[0x3d];
          local_138[lVar17 + 0x6e] = bVar33 + s_0000000000000000_________________023e2060[0x3e];
          local_138[lVar17 + 0x6f] = bVar34 + s_0000000000000000_________________023e2060[0x3f];
          local_138[lVar17 + 0x70] = bVar18 + s_0000000000000000_________________023e2060[0x40];
          local_138[lVar17 + 0x71] = bVar20 + s_0000000000000000_________________023e2060[0x41];
          local_138[lVar17 + 0x72] = bVar21 + s_0000000000000000_________________023e2060[0x42];
          local_138[lVar17 + 0x73] = bVar22 + s_0000000000000000_________________023e2060[0x43];
          local_138[lVar17 + 0x74] = bVar23 + s_0000000000000000_________________023e2060[0x44];
          local_138[lVar17 + 0x75] = bVar24 + s_0000000000000000_________________023e2060[0x45];
          local_138[lVar17 + 0x76] = bVar25 + s_0000000000000000_________________023e2060[0x46];
          local_138[lVar17 + 0x77] = bVar26 + s_0000000000000000_________________023e2060[0x47];
          local_138[lVar17 + 0x78] = bVar27 + s_0000000000000000_________________023e2060[0x48];
          local_138[lVar17 + 0x79] = bVar28 + s_0000000000000000_________________023e2060[0x49];
          local_138[lVar17 + 0x7a] = bVar29 + s_0000000000000000_________________023e2060[0x4a];
          local_138[lVar17 + 0x7b] = bVar30 + s_0000000000000000_________________023e2060[0x4b];
          local_138[lVar17 + 0x7c] = bVar31 + s_0000000000000000_________________023e2060[0x4c];
          local_138[lVar17 + 0x7d] = bVar32 + s_0000000000000000_________________023e2060[0x4d];
          local_138[lVar17 + 0x7e] = bVar33 + s_0000000000000000_________________023e2060[0x4e];
          local_138[lVar17 + 0x7f] = bVar34 + s_0000000000000000_________________023e2060[0x4f];
          lVar17 = lVar17 + 0x80;
          bVar18 = bVar18 ^ DAT_023ebb50;
          bVar20 = bVar20 ^ UNK_023ebb51;
          bVar21 = bVar21 ^ UNK_023ebb52;
          bVar22 = bVar22 ^ UNK_023ebb53;
          bVar23 = bVar23 ^ UNK_023ebb54;
          bVar24 = bVar24 ^ UNK_023ebb55;
          bVar25 = bVar25 ^ UNK_023ebb56;
          bVar26 = bVar26 ^ UNK_023ebb57;
          bVar27 = bVar27 ^ UNK_023ebb58;
          bVar28 = bVar28 ^ UNK_023ebb59;
          bVar29 = bVar29 ^ UNK_023ebb5a;
          bVar30 = bVar30 ^ UNK_023ebb5b;
          bVar31 = bVar31 ^ UNK_023ebb5c;
          bVar32 = bVar32 ^ UNK_023ebb5d;
          bVar33 = bVar33 ^ UNK_023ebb5e;
          bVar34 = bVar34 ^ UNK_023ebb5f;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0);
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        do {
          pbVar1 = local_138 + lVar10 + lVar17;
          *pbVar1 = bVar18;
          pbVar1[1] = bVar20;
          pbVar1[2] = bVar21;
          pbVar1[3] = bVar22;
          pbVar1[4] = bVar23;
          pbVar1[5] = bVar24;
          pbVar1[6] = bVar25;
          pbVar1[7] = bVar26;
          pbVar1[8] = bVar27;
          pbVar1[9] = bVar28;
          pbVar1[10] = bVar29;
          pbVar1[0xb] = bVar30;
          pbVar1[0xc] = bVar31;
          pbVar1[0xd] = bVar32;
          pbVar1[0xe] = bVar33;
          pbVar1[0xf] = bVar34;
          pbVar1 = local_138 + lVar10 + lVar17 + 0x10;
          *pbVar1 = bVar18 + DAT_023e2050;
          pbVar1[1] = bVar20 + UNK_023e2051;
          pbVar1[2] = bVar21 + UNK_023e2052;
          pbVar1[3] = bVar22 + UNK_023e2053;
          pbVar1[4] = bVar23 + UNK_023e2054;
          pbVar1[5] = bVar24 + UNK_023e2055;
          pbVar1[6] = bVar25 + UNK_023e2056;
          pbVar1[7] = bVar26 + UNK_023e2057;
          pbVar1[8] = bVar27 + UNK_023e2058;
          pbVar1[9] = bVar28 + UNK_023e2059;
          pbVar1[10] = bVar29 + UNK_023e205a;
          pbVar1[0xb] = bVar30 + UNK_023e205b;
          pbVar1[0xc] = bVar31 + UNK_023e205c;
          pbVar1[0xd] = bVar32 + UNK_023e205d;
          pbVar1[0xe] = bVar33 + UNK_023e205e;
          pbVar1[0xf] = bVar34 + UNK_023e205f;
          bVar18 = bVar18 + DAT_02410fa0;
          bVar20 = bVar20 + UNK_02410fa1;
          bVar21 = bVar21 + UNK_02410fa2;
          bVar22 = bVar22 + UNK_02410fa3;
          bVar23 = bVar23 + UNK_02410fa4;
          bVar24 = bVar24 + UNK_02410fa5;
          bVar25 = bVar25 + UNK_02410fa6;
          bVar26 = bVar26 + UNK_02410fa7;
          bVar27 = bVar27 + UNK_02410fa8;
          bVar28 = bVar28 + UNK_02410fa9;
          bVar29 = bVar29 + UNK_02410faa;
          bVar30 = bVar30 + UNK_02410fab;
          bVar31 = bVar31 + UNK_02410fac;
          bVar32 = bVar32 + UNK_02410fad;
          bVar33 = bVar33 + UNK_02410fae;
          bVar34 = bVar34 + UNK_02410faf;
          lVar10 = lVar10 + 0x20;
        } while (uVar14 << 5 != lVar10);
      }
      if (uVar12 == uVar11) goto LAB_00ea0730;
    }
    do {
      local_138[uVar12] = (byte)uVar12;
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
LAB_00ea0730:
  uVar19 = *(uint *)(unaff_RDI + 0x6c);
  if ((int)uVar19 < 1) {
    iVar8 = 0;
  }
  else {
    lVar10 = 0;
    param_3 = local_138;
    iVar7 = 0;
    iVar8 = 0;
    do {
      while (iVar3 = *(int *)(lVar9 + lVar10 * 4),
            bVar18 = *(byte *)(unaff_RDI + 0x180 +
                              (ulonglong)
                              *(byte *)(lVar5 + (int)(iVar3 + (iVar3 + -1 >> 0x1f & uVar19) + -1))),
            local_138[0] == bVar18) {
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 1;
        if ((int)uVar19 <= lVar10) goto LAB_00ea089a;
      }
      pbVar1 = local_138;
      if (0 < iVar7) {
        uVar19 = iVar7 - 1;
        lVar17 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        puVar15 = (undefined2 *)(lVar6 + lVar17 * 2);
        if ((uVar19 & 1) != 0) goto LAB_00ea0820;
        do {
          *(int *)(unaff_RDI + 0x2a0) = *(int *)(unaff_RDI + 0x2a0) + 1;
          *puVar15 = 0;
          while( true ) {
            if ((int)uVar19 < 2) {
              iVar7 = 0;
              goto joined_r0x00ea086c;
            }
            uVar19 = uVar19 - 2 >> 1;
            iVar8 = iVar8 + 1;
            puVar15 = puVar15 + 1;
            if ((uVar19 & 1) == 0) break;
LAB_00ea0820:
            *(int *)(unaff_RDI + 0x2a4) = *(int *)(unaff_RDI + 0x2a4) + 1;
            *puVar15 = 1;
          }
        } while( true );
      }
joined_r0x00ea086c:
      while (pbVar1 = pbVar1 + 1, bVar18 != local_138[1]) {
        bVar20 = pbVar1[1];
        pbVar1[1] = local_138[1];
        local_138[1] = bVar20;
      }
      local_138[1] = local_138[0];
      *(short *)(lVar6 + (longlong)iVar8 * 2) = (short)((longlong)pbVar1 - (longlong)param_3) + 1;
      iVar8 = iVar8 + 1;
      piVar2 = (int *)(unaff_RDI + 0x2a4 + (longlong)(int)((longlong)pbVar1 - (longlong)param_3) * 4
                      );
      *piVar2 = *piVar2 + 1;
      uVar19 = *(uint *)(unaff_RDI + 0x6c);
      lVar10 = lVar10 + 1;
      local_138[0] = bVar18;
    } while (lVar10 < (int)uVar19);
LAB_00ea089a:
    if (0 < iVar7) {
      uVar19 = iVar7 - 1;
      lVar9 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      puVar15 = (undefined2 *)(lVar6 + lVar9 * 2);
      if ((uVar19 & 1) != 0) goto LAB_00ea08f0;
      do {
        *(int *)(unaff_RDI + 0x2a0) = *(int *)(unaff_RDI + 0x2a0) + 1;
        *puVar15 = 0;
        while( true ) {
          if ((int)uVar19 < 2) goto LAB_00ea0920;
          uVar19 = uVar19 - 2 >> 1;
          iVar8 = iVar8 + 1;
          puVar15 = puVar15 + 1;
          if ((uVar19 & 1) == 0) break;
LAB_00ea08f0:
          *(int *)(unaff_RDI + 0x2a4) = *(int *)(unaff_RDI + 0x2a4) + 1;
          *puVar15 = 1;
        }
      } while( true );
    }
  }
LAB_00ea0920:
  *(short *)(lVar6 + (longlong)iVar8 * 2) = (short)(uVar11 + 1);
  piVar2 = (int *)(unaff_RDI + 0x2a0 + (longlong)(int)(uVar11 + 1) * 4);
  *piVar2 = *piVar2 + 1;
  *(int *)(unaff_RDI + 0x29c) = iVar8 + 1;
  FUN_00ea0e90();
LAB_00ea094b:
  if (unaff_SIL != '\0') {
    uVar11 = *(uint *)(unaff_RDI + 0x280);
    iVar8 = *(int *)(unaff_RDI + 0x284);
    if (7 < iVar8) {
      iVar7 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
        iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar7;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar8 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar8;
      } while (0xf < iVar3);
    }
    iVar7 = iVar8 + 8;
    uVar11 = 0x17 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar7;
    if (-1 < iVar8) {
      iVar8 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
        iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar8;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar7 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar7;
      } while (0xf < iVar3);
    }
    iVar8 = iVar7 + 8;
    uVar11 = 0x72 << (0x18U - (char)iVar7 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar8;
    if (-1 < iVar7) {
      iVar7 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
        iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar7;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar8 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar8;
      } while (0xf < iVar3);
    }
    iVar7 = iVar8 + 8;
    uVar11 = 0x45 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar7;
    if (-1 < iVar8) {
      iVar8 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
        iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar8;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar7 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar7;
      } while (0xf < iVar3);
    }
    iVar8 = iVar7 + 8;
    uVar11 = 0x38 << (0x18U - (char)iVar7 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar8;
    if (-1 < iVar7) {
      iVar7 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)(uVar11 >> 0x18);
        iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar7;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar8 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar8;
      } while (0xf < iVar3);
    }
    iVar7 = iVar8 + 8;
    uVar11 = 0x50 << (0x18U - (char)iVar8 & 0x1f) | uVar11;
    *(uint *)(unaff_RDI + 0x280) = uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar7;
    if (-1 < iVar8) {
      iVar8 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar8) = (char)(uVar11 >> 0x18);
        iVar8 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar8;
        uVar11 = *(int *)(unaff_RDI + 0x280) << 8;
        *(uint *)(unaff_RDI + 0x280) = uVar11;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        iVar7 = iVar3 + -8;
        *(int *)(unaff_RDI + 0x284) = iVar7;
      } while (0xf < iVar3);
    }
    pFVar13 = (FILE *)(CONCAT71((int7)((ulonglong)param_3 >> 8),'\x18' - (char)iVar7) & 0xffffffff);
    *(uint *)(unaff_RDI + 0x280) = 0x90 << ((byte)pFVar13 & 0x1f) | uVar11;
    *(int *)(unaff_RDI + 0x284) = iVar7 + 8;
    FUN_00ea0cc0();
    if (1 < *(int *)(unaff_RDI + 0x290)) {
      _fprintf(pFVar13,(char *)(ulonglong)*(uint *)(unaff_RDI + 0x28c));
    }
    if (0 < *(int *)(unaff_RDI + 0x284)) {
      iVar8 = *(int *)(unaff_RDI + 0x280);
      iVar7 = *(int *)(unaff_RDI + 0x74);
      do {
        *(char *)(*(longlong *)(unaff_RDI + 0x50) + (longlong)iVar7) = (char)((uint)iVar8 >> 0x18);
        iVar7 = *(int *)(unaff_RDI + 0x74) + 1;
        *(int *)(unaff_RDI + 0x74) = iVar7;
        iVar8 = *(int *)(unaff_RDI + 0x280) << 8;
        *(int *)(unaff_RDI + 0x280) = iVar8;
        iVar3 = *(int *)(unaff_RDI + 0x284);
        *(int *)(unaff_RDI + 0x284) = iVar3 + -8;
      } while (8 < iVar3);
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


