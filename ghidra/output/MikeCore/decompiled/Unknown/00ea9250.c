// Function: FUN_00ea9250
// Address: 00ea9250
// Size: 1158 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea9250(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 (*unaff_RSI) [16];
  undefined1 (*unaff_RDI) [16];
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  uint local_res8;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  if ((int)param_4 < (int)param_3) {
LAB_00ea926e:
    *(undefined1 (*) [16])(unaff_RSI[4] + 0xc) = (undefined1  [16])0x0;
    unaff_RSI[4] = (undefined1  [16])0x0;
    unaff_RSI[3] = (undefined1  [16])0x0;
    unaff_RSI[2] = (undefined1  [16])0x0;
    unaff_RSI[1] = (undefined1  [16])0x0;
    *unaff_RSI = (undefined1  [16])0x0;
    if (0 < (int)local_res8) {
      if (local_res8 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          *(int *)(*unaff_RSI + (ulonglong)*(byte *)(param_1 + uVar18) * 4 + 4) =
               *(int *)(*unaff_RSI + (ulonglong)*(byte *)(param_1 + uVar18) * 4 + 4) + 1;
          *(int *)(*unaff_RSI + (ulonglong)*(byte *)(param_1 + 1 + uVar18) * 4 + 4) =
               *(int *)(*unaff_RSI + (ulonglong)*(byte *)(param_1 + 1 + uVar18) * 4 + 4) + 1;
          uVar18 = uVar18 + 2;
        } while ((local_res8 & 0xfffffffe) != uVar18);
      }
      if ((local_res8 & 1) != 0) {
        *(int *)(*unaff_RSI + (ulonglong)*(byte *)(param_1 + uVar18) * 4 + 4) =
             *(int *)(*unaff_RSI + (ulonglong)*(byte *)(param_1 + uVar18) * 4 + 4) + 1;
      }
      local_38 = *(int *)(*unaff_RSI + 4);
      iVar16 = *(int *)(*unaff_RSI + 8);
      iVar15 = *(int *)(*unaff_RSI + 0xc);
      iVar13 = *(int *)unaff_RSI[1];
      iVar17 = *(int *)(unaff_RSI[1] + 4);
      iVar27 = *(int *)(unaff_RSI[1] + 8);
      iVar26 = *(int *)(unaff_RSI[1] + 0xc);
      iVar29 = *(int *)unaff_RSI[2];
      iVar28 = *(int *)(unaff_RSI[2] + 4);
      iVar25 = *(int *)(unaff_RSI[2] + 8);
      iVar21 = *(int *)(unaff_RSI[2] + 0xc);
      local_34 = *(int *)unaff_RSI[3];
      local_3c = *(int *)(unaff_RSI[3] + 4);
      local_40 = *(int *)(unaff_RSI[3] + 8);
      local_44 = *(int *)(unaff_RSI[3] + 0xc);
      local_48 = *(int *)unaff_RSI[4];
      local_4c = *(int *)(unaff_RSI[4] + 4);
      local_50 = *(int *)(unaff_RSI[4] + 8);
      local_54 = *(int *)(unaff_RSI[4] + 0xc);
      local_58 = *(int *)unaff_RSI[5];
      iVar20 = *(int *)(unaff_RSI[5] + 4);
      local_5c = *(int *)(unaff_RSI[5] + 8);
      goto LAB_00ea946b;
    }
  }
  else {
    if (0 < (int)local_res8) {
      iVar16 = 0;
      uVar5 = param_3;
      do {
        uVar18 = 0;
        if (local_res8 != 1) {
          do {
            if (uVar5 == *(byte *)(param_1 + uVar18)) {
              *(int *)(param_2 + (longlong)iVar16 * 4) = (int)uVar18;
              iVar16 = iVar16 + 1;
              bVar4 = *(byte *)(param_1 + 1 + uVar18);
            }
            else {
              bVar4 = *(byte *)(param_1 + 1 + uVar18);
            }
            if (uVar5 == bVar4) {
              *(int *)(param_2 + (longlong)iVar16 * 4) = (int)uVar18 + 1;
              iVar16 = iVar16 + 1;
            }
            uVar18 = uVar18 + 2;
          } while ((local_res8 & 0xfffffffe) != uVar18);
        }
        if (((local_res8 & 1) != 0) && (uVar5 == *(byte *)(param_1 + uVar18))) {
          *(int *)(param_2 + (longlong)iVar16 * 4) = (int)uVar18;
          iVar16 = iVar16 + 1;
        }
        bVar30 = uVar5 != param_4;
        uVar5 = uVar5 + 1;
      } while (bVar30);
      goto LAB_00ea926e;
    }
    *(undefined4 *)*unaff_RSI = 0;
  }
  local_5c = 0;
  iVar20 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  iVar21 = 0;
  iVar25 = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar26 = 0;
  iVar27 = 0;
  iVar17 = 0;
  iVar13 = 0;
  iVar15 = 0;
  iVar16 = 0;
  local_38 = 0;
LAB_00ea946b:
  *(int *)(*unaff_RSI + 4) = local_38;
  iVar15 = iVar15 + iVar16 + local_38;
  *(int *)(*unaff_RSI + 8) = iVar16 + local_38;
  iVar13 = iVar13 + iVar15;
  *(int *)(*unaff_RSI + 0xc) = iVar15;
  iVar17 = iVar17 + iVar13;
  *(int *)unaff_RSI[1] = iVar13;
  iVar27 = iVar27 + iVar17;
  *(int *)(unaff_RSI[1] + 4) = iVar17;
  iVar26 = iVar26 + iVar27;
  *(int *)(unaff_RSI[1] + 8) = iVar27;
  iVar29 = iVar29 + iVar26;
  *(int *)(unaff_RSI[1] + 0xc) = iVar26;
  iVar28 = iVar28 + iVar29;
  *(int *)unaff_RSI[2] = iVar29;
  iVar25 = iVar25 + iVar28;
  *(int *)(unaff_RSI[2] + 4) = iVar28;
  iVar21 = iVar21 + iVar25;
  *(int *)(unaff_RSI[2] + 8) = iVar25;
  local_34 = local_34 + iVar21;
  *(int *)(unaff_RSI[2] + 0xc) = iVar21;
  local_3c = local_3c + local_34;
  *(int *)unaff_RSI[3] = local_34;
  local_40 = local_40 + local_3c;
  *(int *)(unaff_RSI[3] + 4) = local_3c;
  local_44 = local_44 + local_40;
  *(int *)(unaff_RSI[3] + 8) = local_40;
  local_48 = local_48 + local_44;
  *(int *)(unaff_RSI[3] + 0xc) = local_44;
  local_4c = local_4c + local_48;
  *(int *)unaff_RSI[4] = local_48;
  local_50 = local_50 + local_4c;
  *(int *)(unaff_RSI[4] + 4) = local_4c;
  local_54 = local_54 + local_50;
  *(int *)(unaff_RSI[4] + 8) = local_50;
  local_58 = local_58 + local_54;
  *(int *)(unaff_RSI[4] + 0xc) = local_54;
  iVar20 = iVar20 + local_58;
  *(int *)unaff_RSI[5] = local_58;
  *(int *)(unaff_RSI[5] + 4) = iVar20;
  *(int *)(unaff_RSI[5] + 8) = local_5c + iVar20;
  *(undefined1 (*) [16])(unaff_RDI[4] + 0xc) = (undefined1  [16])0x0;
  unaff_RDI[4] = (undefined1  [16])0x0;
  unaff_RDI[3] = (undefined1  [16])0x0;
  unaff_RDI[2] = (undefined1  [16])0x0;
  unaff_RDI[1] = (undefined1  [16])0x0;
  *unaff_RDI = (undefined1  [16])0x0;
  if ((int)param_3 <= (int)param_4) {
    uVar18 = (ulonglong)(int)param_3;
    uVar22 = (longlong)(int)(param_4 + 1) - uVar18;
    iVar16 = 0;
    if (~uVar18 + (longlong)(int)(param_4 + 1) != 0) {
      lVar14 = -(uVar22 & 0xfffffffffffffffe);
      iVar16 = 0;
      uVar23 = uVar18;
      do {
        iVar13 = *(int *)(*unaff_RSI + uVar23 * 4 + 4) - *(int *)(*unaff_RSI + uVar23 * 4);
        iVar15 = iVar13 + iVar16;
        *(int *)(*unaff_RDI + uVar23 * 4) = iVar16 + iVar13 + -1;
        uVar18 = uVar23 + 2;
        iVar16 = *(int *)(*unaff_RSI + uVar23 * 4 + 8) - *(int *)(*unaff_RSI + uVar23 * 4 + 4);
        *(int *)(*unaff_RDI + uVar23 * 4 + 4) = iVar16 + iVar15 * 2 + -1;
        iVar16 = (iVar16 + iVar15 * 2) * 2;
        lVar14 = lVar14 + 2;
        uVar23 = uVar18;
      } while (lVar14 != 0);
    }
    if ((uVar22 & 1) != 0) {
      *(int *)(*unaff_RDI + uVar18 * 4) =
           (*(int *)(*unaff_RSI + uVar18 * 4 + 4) - *(int *)(*unaff_RSI + uVar18 * 4)) + iVar16 + -1
      ;
    }
  }
  iVar17 = _UNK_0240e21c;
  iVar13 = _UNK_0240e218;
  iVar15 = _UNK_0240e214;
  iVar16 = _DAT_0240e210;
  if ((int)param_3 < (int)param_4) {
    uVar18 = (ulonglong)(int)param_3;
    uVar23 = (ulonglong)(int)param_4;
    uVar22 = uVar23 - uVar18;
    if ((7 < uVar22) &&
       ((*unaff_RDI + uVar23 * 4 <= *unaff_RSI + uVar18 * 4 + 4 ||
        (*unaff_RSI + uVar23 * 4 + 4 <= *unaff_RDI + uVar18 * 4)))) {
      uVar24 = uVar22 & 0xfffffffffffffff8;
      lVar14 = uVar18 * 4 + 0x14;
      uVar19 = 0;
      do {
        piVar2 = (int *)(*unaff_RDI + uVar19 * 4 + uVar18 * 4);
        iVar27 = piVar2[1];
        iVar26 = piVar2[2];
        iVar29 = piVar2[3];
        piVar1 = (int *)(unaff_RDI[1] + uVar19 * 4 + uVar18 * 4);
        iVar28 = *piVar1;
        iVar25 = piVar1[1];
        iVar21 = piVar1[2];
        iVar20 = piVar1[3];
        piVar3 = (int *)(*unaff_RSI + uVar19 * 4 + uVar18 * 4 + 4);
        iVar6 = piVar3[1];
        iVar7 = piVar3[2];
        iVar8 = piVar3[3];
        piVar1 = (int *)(unaff_RSI[1] + uVar19 * 4 + lVar14 + -0x10);
        iVar9 = *piVar1;
        iVar10 = piVar1[1];
        iVar11 = piVar1[2];
        iVar12 = piVar1[3];
        piVar1 = (int *)(*unaff_RSI + uVar19 * 4 + uVar18 * 4 + 4);
        *piVar1 = (*piVar2 * 2 - *piVar3) + iVar16;
        piVar1[1] = (iVar27 * 2 - iVar6) + iVar15;
        piVar1[2] = (iVar26 * 2 - iVar7) + iVar13;
        piVar1[3] = (iVar29 * 2 - iVar8) + iVar17;
        piVar1 = (int *)(unaff_RSI[1] + uVar19 * 4 + lVar14 + -0x10);
        *piVar1 = (iVar28 * 2 - iVar9) + iVar16;
        piVar1[1] = (iVar25 * 2 - iVar10) + iVar15;
        piVar1[2] = (iVar21 * 2 - iVar11) + iVar13;
        piVar1[3] = (iVar20 * 2 - iVar12) + iVar17;
        uVar19 = uVar19 + 8;
      } while (uVar24 != uVar19);
      uVar18 = uVar24 + uVar18;
      if (uVar22 == uVar24) {
        return;
      }
    }
    uVar22 = ~uVar18;
    if ((param_4 - (int)uVar18 & 1) != 0) {
      *(int *)(*unaff_RSI + uVar18 * 4 + 4) =
           (*(int *)(*unaff_RDI + uVar18 * 4) * 2 - *(int *)(*unaff_RSI + uVar18 * 4 + 4)) + 2;
      uVar18 = uVar18 + 1;
    }
    if (uVar22 + uVar23 != 0) {
      do {
        *(int *)(*unaff_RSI + uVar18 * 4 + 4) =
             (*(int *)(*unaff_RDI + uVar18 * 4) * 2 - *(int *)(*unaff_RSI + uVar18 * 4 + 4)) + 2;
        *(int *)(*unaff_RSI + uVar18 * 4 + 8) =
             (*(int *)(*unaff_RDI + uVar18 * 4 + 4) * 2 - *(int *)(*unaff_RSI + uVar18 * 4 + 8)) + 2
        ;
        uVar18 = uVar18 + 2;
      } while (uVar23 != uVar18);
    }
  }
  return;
}


