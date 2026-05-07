// Function: FUN_00eaa490
// Address: 00eaa490
// Size: 2691 bytes
// Class: Unknown


ulonglong FUN_00eaa490(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  sbyte sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  longlong unaff_RSI;
  longlong lVar11;
  undefined1 *unaff_RDI;
  ulonglong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ulonglong local_res8;
  uint local_58;
  int local_54;
  longlong local_50;
  
  local_54 = 0xff;
  if (local_res8 < 0x204) {
    return 0xffffffffffffffff;
  }
  local_50 = param_1;
  uVar5 = _FSE_readNCount_bmi2(param_2,&local_58,param_1,1);
  if (0xffffffffffffff88 < uVar5) {
    return uVar5;
  }
  if (param_3 < local_58) {
    return 0xffffffffffffffd4;
  }
  lVar11 = (longlong)(1 << (local_58 & 0x1f));
  if (local_res8 <
      ((1L << ((ulonglong)local_58 & 0x3f)) + lVar11 * 4 + (ulonglong)(local_54 + 1) * 2 + 0x217 &
      0xfffffffffffffffc)) {
    return 0xffffffffffffffd4;
  }
  uVar6 = FUN_00ea96f2((ulonglong)local_58,local_54,param_4 + lVar11 * 4 + 0x208);
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  pbVar13 = (byte *)(param_2 + uVar5);
  uVar5 = local_50 - uVar5;
  if (*(short *)(param_4 + 0x202) == 0) {
    if (uVar5 == 0) {
      return 0xffffffffffffffb8;
    }
    if (uVar5 < 8) {
      uVar6 = (ulonglong)*pbVar13;
      switch(uVar5) {
      case 7:
        uVar6 = uVar6 | (ulonglong)pbVar13[6] << 0x30;
      case 6:
        uVar6 = uVar6 + ((ulonglong)pbVar13[5] << 0x28);
      case 5:
        uVar6 = uVar6 + ((ulonglong)pbVar13[4] << 0x20);
      case 4:
        uVar6 = uVar6 + (ulonglong)pbVar13[3] * 0x1000000;
      case 3:
        uVar6 = uVar6 + (ulonglong)pbVar13[2] * 0x10000;
      case 2:
        uVar6 = uVar6 + (ulonglong)pbVar13[1] * 0x100;
      }
      if (pbVar13[uVar5 - 1] == 0) {
        return 0xffffffffffffffec;
      }
      iVar16 = LZCOUNT((uint)pbVar13[uVar5 - 1]) + (int)uVar5 * -8 + 0x29;
      uVar12 = 0;
    }
    else {
      if (pbVar13[uVar5 - 1] == 0) {
        return 0xffffffffffffffff;
      }
      if (0xffffffffffffff88 < uVar5) {
        return uVar5;
      }
      uVar6 = *(ulonglong *)(pbVar13 + (uVar5 - 8));
      uVar12 = uVar5 - 8;
      iVar16 = LZCOUNT((uint)pbVar13[uVar5 - 1]) + -0x17;
    }
    uVar3 = *(ushort *)(param_4 + 0x200);
    uVar17 = iVar16 + (uint)uVar3;
    uVar5 = uVar6 >> ((ulonglong)(byte)-(char)uVar17 & 0x3f);
    if (uVar17 < 0x41) {
      if ((longlong)uVar12 < 8) {
        if (uVar12 == 0) {
          uVar12 = 0;
          goto LAB_00eaa8ca;
        }
        uVar18 = (uint)uVar12;
        if (-1 < (longlong)(uVar12 - (uVar17 >> 3))) {
          uVar18 = uVar17 >> 3;
        }
        uVar17 = uVar17 + uVar18 * -8;
      }
      else {
        uVar18 = uVar17 >> 3;
        uVar17 = uVar17 & 7;
      }
      uVar12 = uVar12 - uVar18;
      uVar6 = *(ulonglong *)(pbVar13 + uVar12);
    }
LAB_00eaa8ca:
    sVar4 = ((byte)uVar3 < 0x41) * ('@' - (byte)uVar3);
    uVar9 = (uVar5 << sVar4) >> sVar4;
    uVar17 = uVar17 + uVar3;
    uVar5 = uVar6 >> ((ulonglong)(byte)-(char)uVar17 & 0x3f) & ~(-1L << ((ulonglong)uVar3 & 0x3f));
    puVar15 = unaff_RDI;
    if (uVar17 < 0x41) {
      if (7 < (longlong)uVar12) {
        uVar18 = uVar17 >> 3;
        uVar17 = uVar17 & 7;
        uVar12 = uVar12 - uVar18;
        uVar6 = *(ulonglong *)(pbVar13 + uVar12);
LAB_00eaac25:
        do {
          if ((longlong)uVar12 < 8) {
            if (uVar12 == 0) {
              uVar12 = 0;
              goto LAB_00eaad7e;
            }
            lVar11 = uVar12 - (uVar17 >> 3);
            uVar18 = (uint)uVar12;
            if (-1 < lVar11) {
              uVar18 = uVar17 >> 3;
            }
            uVar8 = (uint)((ulonglong)lVar11 >> 0x3f);
            uVar17 = uVar17 + uVar18 * -8;
          }
          else {
            uVar18 = uVar17 >> 3;
            uVar17 = uVar17 & 7;
            uVar8 = 0;
          }
          uVar12 = uVar12 - uVar18;
          uVar6 = *(ulonglong *)(pbVar13 + uVar12);
          if ((unaff_RDI + unaff_RSI + -3 <= puVar15) || (uVar8 != 0)) goto LAB_00eaad7e;
          bVar1 = *(byte *)(param_4 + 0x207 + uVar9 * 4);
          sVar4 = (bVar1 < 0x41) * ('@' - bVar1);
          lVar7 = (((uVar6 >> ((ulonglong)(byte)-(char)(uVar17 + bVar1) & 0x3f)) << sVar4) >> sVar4)
                  + (ulonglong)*(ushort *)(param_4 + 0x204 + uVar9 * 4);
          *puVar15 = *(undefined1 *)(param_4 + 0x206 + uVar9 * 4);
          bVar2 = *(byte *)(param_4 + 0x207 + uVar5 * 4);
          iVar16 = uVar17 + bVar1 + (uint)bVar2;
          sVar4 = (bVar2 < 0x41) * ('@' - bVar2);
          lVar11 = (((uVar6 >> ((ulonglong)(byte)-(char)iVar16 & 0x3f)) << sVar4) >> sVar4) +
                   (ulonglong)*(ushort *)(param_4 + 0x204 + uVar5 * 4);
          puVar15[1] = *(undefined1 *)(param_4 + 0x206 + uVar5 * 4);
          bVar1 = *(byte *)(param_4 + 0x207 + lVar7 * 4);
          iVar16 = iVar16 + (uint)bVar1;
          sVar4 = (bVar1 < 0x41) * ('@' - bVar1);
          uVar9 = (((uVar6 >> ((ulonglong)(byte)-(char)iVar16 & 0x3f)) << sVar4) >> sVar4) +
                  (ulonglong)*(ushort *)(param_4 + 0x204 + lVar7 * 4);
          puVar15[2] = *(undefined1 *)(param_4 + 0x206 + lVar7 * 4);
          bVar1 = *(byte *)(param_4 + 0x207 + lVar11 * 4);
          uVar17 = iVar16 + (uint)bVar1;
          sVar4 = (bVar1 < 0x41) * ('@' - bVar1);
          uVar5 = (ulonglong)*(ushort *)(param_4 + 0x204 + lVar11 * 4) +
                  (((uVar6 >> ((ulonglong)(byte)-(char)uVar17 & 0x3f)) << sVar4) >> sVar4);
          puVar15[3] = *(undefined1 *)(param_4 + 0x206 + lVar11 * 4);
          puVar15 = puVar15 + 4;
          if (0x40 < uVar17) goto LAB_00eaad7e;
        } while( true );
      }
      if (uVar12 == 0) {
        uVar12 = 0;
        goto LAB_00eaac25;
      }
      uVar6 = uVar12 & 0xffffffff;
      if (-1 < (longlong)(uVar12 - (uVar17 >> 3))) {
        uVar6 = (ulonglong)(uVar17 >> 3);
      }
      uVar17 = uVar17 + (int)uVar6 * -8;
      uVar12 = uVar12 - uVar6;
      uVar6 = *(ulonglong *)(pbVar13 + uVar12);
      if (uVar17 < 0x41) goto LAB_00eaac25;
    }
LAB_00eaad7e:
    puVar20 = unaff_RDI + unaff_RSI + -2;
    if (puVar20 < puVar15) {
      return 0xffffffffffffffba;
    }
    lVar11 = (longlong)puVar15 - (longlong)unaff_RDI;
    puVar15 = puVar15 + 1;
    while( true ) {
      uVar3 = *(ushort *)(param_4 + 0x204 + uVar9 * 4);
      bVar1 = *(byte *)(param_4 + 0x207 + uVar9 * 4);
      uVar17 = uVar17 + bVar1;
      puVar15[-1] = *(undefined1 *)(param_4 + 0x206 + uVar9 * 4);
      if (0x40 < uVar17) break;
      if ((longlong)uVar12 < 8) {
        if (uVar12 != 0) {
          uVar8 = (uint)uVar12;
          if (-1 < (longlong)(uVar12 - (uVar17 >> 3))) {
            uVar8 = uVar17 >> 3;
          }
          uVar18 = uVar17 + uVar8 * -8;
          goto LAB_00eaae0c;
        }
        lVar7 = 0;
        uVar19 = uVar6;
        uVar18 = uVar17;
      }
      else {
        uVar8 = uVar17 >> 3;
        uVar18 = uVar17 & 7;
LAB_00eaae0c:
        lVar7 = uVar12 - uVar8;
        uVar19 = *(ulonglong *)(pbVar13 + lVar7);
      }
      if (puVar20 < puVar15) {
        return 0xffffffffffffffba;
      }
      sVar4 = (bVar1 < 0x41) * ('@' - bVar1);
      uVar9 = (ulonglong)uVar3 +
              (((uVar6 >> ((ulonglong)(byte)-(char)uVar17 & 0x3f)) << sVar4) >> sVar4);
      uVar3 = *(ushort *)(param_4 + 0x204 + uVar5 * 4);
      bVar1 = *(byte *)(param_4 + 0x207 + uVar5 * 4);
      uVar17 = uVar18 + bVar1;
      *puVar15 = *(undefined1 *)(param_4 + 0x206 + uVar5 * 4);
      if (0x40 < uVar17) {
        puVar15 = puVar15 + 1;
        lVar7 = 3;
        uVar5 = uVar9;
        goto LAB_00eaaef3;
      }
      cVar10 = (char)uVar17;
      sVar4 = (bVar1 < 0x41) * ('@' - bVar1);
      if (lVar7 < 8) {
        if (lVar7 != 0) {
          uVar18 = (uint)lVar7;
          if (-1 < (longlong)(lVar7 - (ulonglong)(uVar17 >> 3))) {
            uVar18 = uVar17 >> 3;
          }
          uVar17 = uVar17 + uVar18 * -8;
          goto LAB_00eaae9a;
        }
        uVar12 = 0;
        uVar6 = uVar19;
      }
      else {
        uVar18 = uVar17 >> 3;
        uVar17 = uVar17 & 7;
LAB_00eaae9a:
        uVar12 = lVar7 - (ulonglong)uVar18;
        uVar6 = *(ulonglong *)(pbVar13 + uVar12);
      }
      uVar5 = (((uVar19 >> ((ulonglong)(byte)-cVar10 & 0x3f)) << sVar4) >> sVar4) + (ulonglong)uVar3
      ;
      lVar11 = lVar11 + 2;
      puVar14 = puVar15 + 1;
      puVar15 = puVar15 + 2;
      if (puVar20 < puVar14) {
        return 0xffffffffffffffba;
      }
    }
    lVar7 = 2;
LAB_00eaaef3:
    *puVar15 = *(undefined1 *)(param_4 + 0x206 + uVar5 * 4);
    goto LAB_00eaaf01;
  }
  if (uVar5 == 0) {
    return 0xffffffffffffffb8;
  }
  if (uVar5 < 8) {
    uVar6 = (ulonglong)*pbVar13;
    switch(uVar5) {
    case 7:
      uVar6 = uVar6 | (ulonglong)pbVar13[6] << 0x30;
    case 6:
      uVar6 = uVar6 + ((ulonglong)pbVar13[5] << 0x28);
    case 5:
      uVar6 = uVar6 + ((ulonglong)pbVar13[4] << 0x20);
    case 4:
      uVar6 = uVar6 + (ulonglong)pbVar13[3] * 0x1000000;
    case 3:
      uVar6 = uVar6 + (ulonglong)pbVar13[2] * 0x10000;
    case 2:
      uVar6 = uVar6 + (ulonglong)pbVar13[1] * 0x100;
    }
    if (pbVar13[uVar5 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    iVar16 = LZCOUNT((uint)pbVar13[uVar5 - 1]) + (int)uVar5 * -8 + 0x29;
    uVar12 = 0;
  }
  else {
    if (pbVar13[uVar5 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
    uVar6 = *(ulonglong *)(pbVar13 + (uVar5 - 8));
    uVar12 = uVar5 - 8;
    iVar16 = LZCOUNT((uint)pbVar13[uVar5 - 1]) + -0x17;
  }
  uVar3 = *(ushort *)(param_4 + 0x200);
  uVar17 = iVar16 + (uint)uVar3;
  uVar5 = uVar6 >> ((ulonglong)(byte)-(char)uVar17 & 0x3f);
  if (uVar17 < 0x41) {
    if ((longlong)uVar12 < 8) {
      if (uVar12 == 0) {
        uVar12 = 0;
        goto LAB_00eaa843;
      }
      uVar18 = (uint)uVar12;
      if (-1 < (longlong)(uVar12 - (uVar17 >> 3))) {
        uVar18 = uVar17 >> 3;
      }
      uVar17 = uVar17 + uVar18 * -8;
    }
    else {
      uVar18 = uVar17 >> 3;
      uVar17 = uVar17 & 7;
    }
    uVar12 = uVar12 - uVar18;
    uVar6 = *(ulonglong *)(pbVar13 + uVar12);
  }
LAB_00eaa843:
  sVar4 = ((byte)uVar3 < 0x41) * ('@' - (byte)uVar3);
  uVar9 = (uVar5 << sVar4) >> sVar4;
  uVar17 = uVar17 + uVar3;
  uVar19 = (ulonglong)uVar17;
  uVar5 = uVar6 >> ((ulonglong)(byte)-(char)uVar17 & 0x3f) & ~(-1L << ((ulonglong)uVar3 & 0x3f));
  puVar15 = unaff_RDI;
  if (uVar17 < 0x41) {
    if (7 < (longlong)uVar12) {
      uVar19 = (ulonglong)(uVar17 & 7);
      uVar12 = uVar12 - (uVar17 >> 3);
      uVar6 = *(ulonglong *)(pbVar13 + uVar12);
LAB_00eaa955:
      do {
        if ((longlong)uVar12 < 8) {
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_00eaaa8e;
          }
          lVar11 = uVar12 - (uVar19 >> 3);
          uVar6 = uVar12 & 0xffffffff;
          if (-1 < lVar11) {
            uVar6 = uVar19 >> 3;
          }
          uVar17 = (uint)((ulonglong)lVar11 >> 0x3f);
          uVar18 = (uint)uVar19 + (int)uVar6 * -8;
        }
        else {
          uVar6 = uVar19 >> 3;
          uVar18 = (uint)uVar19 & 7;
          uVar17 = 0;
        }
        uVar19 = (ulonglong)uVar18;
        uVar12 = uVar12 - uVar6;
        uVar6 = *(ulonglong *)(pbVar13 + uVar12);
        if ((unaff_RDI + unaff_RSI + -3 <= puVar15) || (uVar17 != 0)) goto LAB_00eaaa8e;
        bVar1 = *(byte *)(param_4 + 0x207 + uVar9 * 4);
        uVar18 = uVar18 + bVar1;
        lVar7 = ((uVar6 << (uVar19 & 0x3f)) >> ((ulonglong)(byte)-bVar1 & 0x3f)) +
                (ulonglong)*(ushort *)(param_4 + 0x204 + uVar9 * 4);
        *puVar15 = *(undefined1 *)(param_4 + 0x206 + uVar9 * 4);
        bVar1 = *(byte *)(param_4 + 0x207 + uVar5 * 4);
        uVar17 = uVar18 + bVar1;
        lVar11 = ((uVar6 << ((ulonglong)uVar18 & 0x3f)) >> ((ulonglong)(byte)-bVar1 & 0x3f)) +
                 (ulonglong)*(ushort *)(param_4 + 0x204 + uVar5 * 4);
        puVar15[1] = *(undefined1 *)(param_4 + 0x206 + uVar5 * 4);
        bVar1 = *(byte *)(param_4 + 0x207 + lVar7 * 4);
        uVar18 = uVar17 + bVar1;
        uVar9 = ((uVar6 << ((ulonglong)uVar17 & 0x3f)) >> ((ulonglong)(byte)-bVar1 & 0x3f)) +
                (ulonglong)*(ushort *)(param_4 + 0x204 + lVar7 * 4);
        puVar15[2] = *(undefined1 *)(param_4 + 0x206 + lVar7 * 4);
        bVar1 = *(byte *)(param_4 + 0x207 + lVar11 * 4);
        uVar17 = uVar18 + bVar1;
        uVar19 = (ulonglong)uVar17;
        uVar5 = (ulonglong)*(ushort *)(param_4 + 0x204 + lVar11 * 4) +
                ((uVar6 << ((ulonglong)uVar18 & 0x3f)) >> ((ulonglong)(byte)-bVar1 & 0x3f));
        puVar15[3] = *(undefined1 *)(param_4 + 0x206 + lVar11 * 4);
        puVar15 = puVar15 + 4;
        if (0x40 < uVar17) goto LAB_00eaaa8e;
      } while( true );
    }
    if (uVar12 == 0) {
      uVar12 = 0;
      goto LAB_00eaa955;
    }
    uVar6 = uVar12 & 0xffffffff;
    if (-1 < (longlong)(uVar12 - (uVar17 >> 3))) {
      uVar6 = (ulonglong)(uVar17 >> 3);
    }
    uVar17 = uVar17 + (int)uVar6 * -8;
    uVar19 = (ulonglong)uVar17;
    uVar12 = uVar12 - uVar6;
    uVar6 = *(ulonglong *)(pbVar13 + uVar12);
    if (uVar17 < 0x41) goto LAB_00eaa955;
  }
LAB_00eaaa8e:
  puVar20 = unaff_RDI + unaff_RSI + -2;
  if (puVar20 < puVar15) {
    return 0xffffffffffffffba;
  }
  lVar11 = (longlong)puVar15 - (longlong)unaff_RDI;
  puVar15 = puVar15 + 1;
  while( true ) {
    uVar3 = *(ushort *)(param_4 + 0x204 + uVar9 * 4);
    bVar1 = *(byte *)(param_4 + 0x207 + uVar9 * 4);
    uVar17 = (uint)bVar1 + (int)uVar19;
    puVar15[-1] = *(undefined1 *)(param_4 + 0x206 + uVar9 * 4);
    if (0x40 < uVar17) break;
    if ((longlong)uVar12 < 8) {
      if (uVar12 != 0) {
        uVar9 = uVar12 & 0xffffffff;
        if (-1 < (longlong)(uVar12 - (uVar17 >> 3))) {
          uVar9 = (ulonglong)(uVar17 >> 3);
        }
        uVar17 = uVar17 + (int)uVar9 * -8;
        goto LAB_00eaab18;
      }
      uVar12 = 0;
      uVar21 = uVar6;
    }
    else {
      uVar9 = (ulonglong)(uVar17 >> 3);
      uVar17 = uVar17 & 7;
LAB_00eaab18:
      uVar12 = uVar12 - uVar9;
      uVar21 = *(ulonglong *)(pbVar13 + uVar12);
    }
    if (puVar20 < puVar15) {
      return 0xffffffffffffffba;
    }
    uVar9 = ((uVar6 << (uVar19 & 0x3f)) >> ((ulonglong)(byte)-bVar1 & 0x3f)) + (ulonglong)uVar3;
    uVar3 = *(ushort *)(param_4 + 0x204 + uVar5 * 4);
    bVar1 = *(byte *)(param_4 + 0x207 + uVar5 * 4);
    uVar18 = uVar17 + bVar1;
    *puVar15 = *(undefined1 *)(param_4 + 0x206 + uVar5 * 4);
    if (0x40 < uVar18) {
      puVar15 = puVar15 + 1;
      lVar7 = 3;
      uVar5 = uVar9;
      goto LAB_00eaac06;
    }
    if ((longlong)uVar12 < 8) {
      if (uVar12 != 0) {
        uVar5 = uVar12 & 0xffffffff;
        if (-1 < (longlong)(uVar12 - (uVar18 >> 3))) {
          uVar5 = (ulonglong)(uVar18 >> 3);
        }
        uVar18 = uVar18 + (int)uVar5 * -8;
        goto LAB_00eaaba2;
      }
      uVar12 = 0;
      uVar6 = uVar21;
    }
    else {
      uVar5 = (ulonglong)(uVar18 >> 3);
      uVar18 = uVar18 & 7;
LAB_00eaaba2:
      uVar12 = uVar12 - uVar5;
      uVar6 = *(ulonglong *)(pbVar13 + uVar12);
    }
    uVar19 = (ulonglong)uVar18;
    uVar5 = ((uVar21 << ((ulonglong)uVar17 & 0x3f)) >> ((ulonglong)(byte)-bVar1 & 0x3f)) +
            (ulonglong)uVar3;
    lVar11 = lVar11 + 2;
    puVar14 = puVar15 + 1;
    puVar15 = puVar15 + 2;
    if (puVar20 < puVar14) {
      return 0xffffffffffffffba;
    }
  }
  lVar7 = 2;
LAB_00eaac06:
  *puVar15 = *(undefined1 *)(param_4 + 0x206 + uVar5 * 4);
LAB_00eaaf01:
  return lVar7 + lVar11;
}


