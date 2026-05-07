// Function: FUN_00baeb90
// Address: 00baeb90
// Size: 1473 bytes
// Class: GNData


void FUN_00baeb90(int param_1,int param_2,longlong *param_3,int param_4)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort *unaff_RSI;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  longlong unaff_RDI;
  int iVar21;
  longlong lVar22;
  ushort uVar23;
  ulonglong uVar24;
  ushort uVar25;
  int iVar26;
  short sVar27;
  float fVar28;
  byte *local_58 [2];
  byte local_48 [2];
  ushort uStack_46;
  ushort uStack_44;
  ushort uStack_42;
  byte local_40 [8];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_58[0] = local_48;
  uVar25 = *(ushort *)(unaff_RDI + 0x3c);
  uVar11 = (ulonglong)uVar25;
  if (uVar11 == 2) {
    local_58[1] = local_40;
  }
  else {
    local_58[1] = local_58[0];
    if ((short)uVar25 < 1) goto LAB_00baed9b;
  }
  puVar18 = (ushort *)((longlong)unaff_RSI + 1);
  local_48[0] = (byte)*unaff_RSI;
  if (uVar25 != 1) {
    puVar1 = (ushort *)(uVar11 - 1);
    uVar24 = (ulonglong)((uint)puVar1 & 3);
    if (uVar11 - 2 < 3) {
      lVar15 = 1;
      puVar8 = puVar18;
      puVar18 = puVar1;
    }
    else {
      uVar11 = 0;
      do {
        uVar16 = uVar11;
        *local_58[uVar16 + 1] = *(byte *)((longlong)puVar18 + uVar16);
        **(byte **)(local_48 + uVar16 * 8) = *(byte *)((longlong)unaff_RSI + uVar16 + 2);
        **(byte **)(local_40 + uVar16 * 8) = *(byte *)((longlong)unaff_RSI + uVar16 + 3);
        *(byte *)(&local_38)[uVar16] = *(byte *)((longlong)unaff_RSI + uVar16 + 4);
        uVar11 = uVar16 + 4;
      } while (((ulonglong)puVar1 & 0xfffffffffffffffc) != uVar11);
      lVar15 = uVar16 + 5;
      puVar8 = (ushort *)((longlong)puVar18 + uVar11);
      puVar18 = (ushort *)((longlong)puVar18 + uVar11);
    }
    if (uVar24 != 0) {
      uVar11 = 0;
      do {
        *local_58[lVar15 + uVar11] = *(byte *)((longlong)puVar8 + uVar11);
        uVar11 = uVar11 + 1;
      } while (uVar24 != uVar11);
      puVar18 = (ushort *)((longlong)puVar8 + uVar11);
    }
  }
  uStack_46 = *puVar18;
  unaff_RSI = puVar18 + 1;
  uVar25 = *(ushort *)(unaff_RDI + 0x3c);
  if (1 < (short)uVar25) {
    lVar15 = 1;
    do {
      *(ushort *)(local_58[lVar15] + 2) = puVar18[lVar15];
      unaff_RSI = unaff_RSI + 1;
      lVar15 = lVar15 + 1;
      uVar25 = *(ushort *)(unaff_RDI + 0x3c);
    } while (lVar15 < (short)uVar25);
  }
  if (0 < (short)uVar25) {
    uStack_44 = *unaff_RSI;
    puVar18 = unaff_RSI + 1;
    uVar25 = *(ushort *)(unaff_RDI + 0x3c);
    if (1 < (short)uVar25) {
      lVar15 = 1;
      do {
        *(ushort *)(local_58[lVar15] + 4) = unaff_RSI[lVar15];
        puVar18 = puVar18 + 1;
        lVar15 = lVar15 + 1;
        uVar25 = *(ushort *)(unaff_RDI + 0x3c);
      } while (lVar15 < (short)uVar25);
    }
    unaff_RSI = puVar18;
    if (0 < (short)uVar25) {
      uStack_42 = *puVar18;
      unaff_RSI = puVar18 + 1;
      uVar25 = *(ushort *)(unaff_RDI + 0x3c);
      if (1 < (short)uVar25) {
        lVar15 = 1;
        do {
          *(ushort *)(local_58[lVar15] + 6) = puVar18[lVar15];
          unaff_RSI = unaff_RSI + 1;
          lVar15 = lVar15 + 1;
          uVar25 = *(ushort *)(unaff_RDI + 0x3c);
        } while (lVar15 < (short)uVar25);
      }
    }
  }
LAB_00baed9b:
  fVar10 = DAT_023d8d50;
  fVar9 = DAT_023d4ff4;
  bVar2 = *local_58[1];
  param_4 = param_4 - param_2;
  if (0 < (short)uVar25) {
    pbVar7 = local_48;
    lVar22 = (ulonglong)(uint)(int)(short)uVar25 - 1;
    lVar17 = 0;
    lVar15 = *param_3;
    while( true ) {
      if (((lVar15 != 0) && (param_2 < 1)) && (0 < param_1)) {
        fVar28 = (float)(int)*(short *)(pbVar7 + 6);
        if (*(short *)(pbVar7 + 6) < 1) {
          fVar28 = fVar28 * fVar9;
        }
        else {
          fVar28 = fVar28 / fVar10;
        }
        *(float *)(lVar15 + (longlong)param_4 * 4) = fVar28;
      }
      if (lVar22 == lVar17) break;
      pbVar7 = local_58[lVar17 + 1];
      lVar17 = lVar17 + 1;
      lVar15 = param_3[lVar17];
    }
    pbVar7 = local_48;
    lVar17 = 0;
    lVar15 = *param_3;
    while( true ) {
      if (((lVar15 != 0) && (param_2 < 2)) && (1 < param_1)) {
        fVar28 = (float)(int)*(short *)(pbVar7 + 4);
        if (*(short *)(pbVar7 + 4) < 1) {
          fVar28 = fVar28 * fVar9;
        }
        else {
          fVar28 = fVar28 / fVar10;
        }
        *(float *)(lVar15 + (longlong)(param_4 + 1) * 4) = fVar28;
      }
      if (lVar22 == lVar17) break;
      pbVar7 = local_58[lVar17 + 1];
      lVar17 = lVar17 + 1;
      lVar15 = param_3[lVar17];
    }
  }
  fVar10 = DAT_023d8d50;
  fVar9 = DAT_023d4ff4;
  iVar21 = (*(short *)(unaff_RDI + 0x68) + -2) * (int)(short)uVar25;
  if (0 < iVar21) {
    iVar3 = *(int *)(unaff_RDI + 0x80 + (ulonglong)local_48[0] * 8);
    iVar4 = *(int *)(unaff_RDI + 0x84 + (ulonglong)local_48[0] * 8);
    iVar5 = *(int *)(unaff_RDI + 0x80 + (ulonglong)bVar2 * 8);
    iVar6 = *(int *)(unaff_RDI + 0x84 + (ulonglong)bVar2 * 8);
    lVar15 = *param_3;
    iVar21 = iVar21 + 2;
    iVar26 = 1;
    do {
      bVar2 = (byte)*unaff_RSI >> 4;
      uVar14 = bVar2 - 0x10;
      if ((bVar2 & 8) == 0) {
        uVar14 = (uint)bVar2;
      }
      iVar19 = iVar3 * (short)uStack_44;
      iVar12 = (short)uStack_42 * iVar4;
      iVar13 = iVar12 + iVar19;
      iVar12 = iVar12 + iVar19 + 0xff;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      iVar12 = (iVar12 >> 8) + uVar14 * uStack_46;
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      iVar19 = (uint)uStack_46 * *(int *)(&DAT_023d8e50 + (ulonglong)bVar2 * 4);
      iVar13 = iVar19 + 0xff;
      if (-1 < iVar19) {
        iVar13 = iVar19;
      }
      iVar13 = iVar13 >> 8;
      if (iVar13 < 0x11) {
        iVar13 = 0x10;
      }
      uStack_46 = (ushort)iVar13;
      uStack_42 = uStack_44;
      if (iVar12 < -0x7fff) {
        iVar12 = 0x8000;
      }
      uVar23 = (ushort)iVar12;
      uVar20 = (byte)*unaff_RSI & 0xf;
      uVar14 = uVar20 - 0x10;
      if (((byte)*unaff_RSI & 8) == 0) {
        uVar14 = uVar20;
      }
      iVar19 = iVar5 * *(short *)(local_58[1] + 4);
      iVar12 = *(short *)(local_58[1] + 6) * iVar6;
      iVar13 = iVar12 + iVar19;
      iVar12 = iVar12 + iVar19 + 0xff;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      iVar12 = (iVar12 >> 8) + uVar14 * *(ushort *)(local_58[1] + 2);
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      iVar19 = (uint)*(ushort *)(local_58[1] + 2) * *(int *)(&DAT_023d8e50 + (ulonglong)uVar20 * 4);
      iVar13 = iVar19 + 0xff;
      if (-1 < iVar19) {
        iVar13 = iVar19;
      }
      iVar13 = iVar13 >> 8;
      if (iVar13 < 0x11) {
        iVar13 = 0x10;
      }
      if (iVar12 < -0x7fff) {
        iVar12 = 0x8000;
      }
      iVar19 = iVar26 + 1;
      uStack_44 = uVar23;
      *(short *)(local_58[1] + 2) = (short)iVar13;
      *(short *)(local_58[1] + 6) = *(short *)(local_58[1] + 4);
      sVar27 = (short)iVar12;
      *(short *)(local_58[1] + 4) = sVar27;
      if (((lVar15 != 0) && (param_2 <= iVar19)) && (iVar19 < param_1)) {
        if ((short)uVar23 < 1) {
          fVar28 = (float)(int)(short)uVar23 * fVar9;
        }
        else {
          fVar28 = (float)(int)(short)uVar23 / fVar10;
        }
        *(float *)(lVar15 + (longlong)(param_4 + iVar19) * 4) = fVar28;
      }
      if (uVar25 == 1) {
        iVar19 = iVar26 + 2;
        if (((lVar15 != 0) && (param_2 <= iVar19)) && (iVar19 < param_1)) {
          lVar17 = lVar15;
          if (sVar27 < 1) {
            fVar28 = (float)(int)sVar27 * fVar9;
          }
          else {
            fVar28 = (float)(int)sVar27 / fVar10;
          }
LAB_00baef20:
          *(float *)(lVar17 + (longlong)(param_4 + iVar19) * 4) = fVar28;
        }
      }
      else {
        lVar17 = param_3[1];
        if (((lVar17 != 0) && (param_2 <= iVar19)) && (iVar19 < param_1)) {
          if (sVar27 < 1) {
            fVar28 = (float)(int)sVar27 * fVar9;
          }
          else {
            fVar28 = (float)(int)sVar27 / fVar10;
          }
          goto LAB_00baef20;
        }
      }
      unaff_RSI = (ushort *)((longlong)unaff_RSI + 1);
      iVar21 = iVar21 + -2;
      iVar26 = iVar19;
    } while (2 < iVar21);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


