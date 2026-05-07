// Function: FUN_018326c0
// Address: 018326c0
// Size: 1605 bytes
// Class: Unknown


void FUN_018326c0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *in_RCX;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  ulonglong uVar14;
  longlong *unaff_RDI;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar19;
  char local_res18;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  float local_84;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  float local_64;
  float local_60;
  float local_5c;
  longlong local_58;
  undefined8 *local_50;
  float local_44;
  longlong local_40;
  char local_38;
  
  iVar2 = *(int *)(**(longlong **)(*unaff_RSI + 0x10) + 0x18);
  iVar6 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  local_64 = param_4;
  local_60 = param_3;
  local_5c = param_2;
  local_44 = param_1;
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025f0d98;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  (*DAT_025f0db0)();
  FUN_00c8e690();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_50 = puVar8;
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar13 = *unaff_RDI;
  if (0 < *(int *)(lVar13 + 0xc)) {
    local_84 = local_64 - local_60;
    fVar17 = DAT_023d5000;
    if (local_44 / local_5c <= DAT_023d5000) {
      fVar17 = local_44 / local_5c;
    }
    uVar9 = 2;
    if (2 < iVar6 >> 2) {
      uVar9 = (ulonglong)(uint)(iVar6 >> 2);
    }
    lVar11 = 0;
    local_5c = fVar17;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar11 * 8);
      if (lVar13 != 0) {
        fVar17 = (float)FUN_00d50b00();
      }
      local_c0 = '\0';
      local_c8 = lVar13;
      FUN_0133ae40(fVar17,&local_c8);
      uVar5 = FUN_00d45870();
      uVar18 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      local_b0 = '\0';
      local_b8 = lVar13;
      FUN_0133ae40(uVar18,&local_b8);
      local_44 = (float)FUN_00d45870();
      uVar18 = extraout_XMM0_Da_00;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      local_70 = CONCAT44(local_70._4_4_,uVar5);
      local_a0 = '\0';
      local_a8 = lVar13;
      FUN_0133ae40(uVar18,&local_a8);
      iVar6 = FUN_00d45870();
      uVar18 = extraout_XMM0_Da_01;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      local_90 = '\0';
      local_98 = lVar13;
      FUN_0133ae40(uVar18,&local_98);
      iVar7 = FUN_00d45870();
      fVar17 = extraout_XMM0_Da_02;
      if ((local_38 != '\0') && (local_40 != 0)) {
        fVar17 = (float)FUN_00d50b20();
      }
      local_78 = lVar13;
      if ((local_90 != '\0') && (local_98 != 0)) {
        fVar17 = (float)FUN_00d50b20();
      }
      fVar19 = local_44;
      if (iVar6 == -1) {
        if ((local_res18 != '\0') && ((int)local_70 < (int)local_44)) {
          uVar12 = (ulonglong)(int)local_70;
          uVar15 = uVar12;
          if (((int)local_44 - (int)local_70 & 1U) != 0) {
            fVar17 = (float)___bzero();
            uVar15 = uVar12 + 1;
          }
          if (~uVar12 + (longlong)(int)fVar19 != 0) {
            do {
              ___bzero();
              fVar17 = (float)___bzero();
              uVar15 = uVar15 + 2;
            } while ((longlong)(int)fVar19 != uVar15);
          }
        }
      }
      else if (7 < iVar2) {
        uVar15 = (ulonglong)iVar6;
        local_44 = (float)(iVar7 - iVar6);
        lVar13 = uVar9 - 1;
        if (local_44 == 0.0 || iVar7 < iVar6) {
          do {
            local_80 = uVar15 * 4 + *(longlong *)(local_58 + 0x10);
            fVar17 = (float)FUN_015c15b0(local_5c,local_44);
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        else {
          uVar12 = (ulonglong)iVar7;
          local_70 = (ulonglong)(iVar7 - iVar6 & 3);
          uVar16 = 1;
          do {
            lVar4 = local_58;
            lVar13 = *(longlong *)(*unaff_RSI + 0x10);
            lVar3 = *(longlong *)(local_58 + 0x10);
            uVar10 = uVar15;
            for (uVar14 = local_70; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)(lVar3 + uVar10 * 4) =
                   *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar13 + uVar10 * 8) + 0x10) + uVar16 * 4);
              uVar10 = uVar10 + 1;
            }
            if (2 < ~uVar15 + uVar12) {
              do {
                *(undefined4 *)(lVar3 + uVar10 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar13 + uVar10 * 8) + 0x10) + uVar16 * 4);
                *(undefined4 *)(lVar3 + 4 + uVar10 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar13 + 8 + uVar10 * 8) + 0x10) + uVar16 * 4);
                *(undefined4 *)(lVar3 + 8 + uVar10 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar13 + 0x10 + uVar10 * 8) + 0x10) + uVar16 * 4)
                ;
                *(undefined4 *)(lVar3 + 0xc + uVar10 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar13 + 0x18 + uVar10 * 8) + 0x10) + uVar16 * 4)
                ;
                uVar10 = uVar10 + 4;
              } while (uVar12 != uVar10);
            }
            local_80 = uVar15 * 4 + *(longlong *)(local_58 + 0x10);
            FUN_015c15b0(local_5c,local_44);
            fVar17 = (float)(int)uVar16;
            lVar13 = *(longlong *)(lVar4 + 0x10);
            lVar3 = *(longlong *)(*in_RCX + 0x10);
            uVar10 = uVar15;
            do {
              fVar19 = *(float *)(lVar3 + uVar10 * 4) * fVar17;
              if (fVar19 < local_64) {
                fVar1 = *(float *)(lVar13 + uVar10 * 4);
                if (fVar19 < local_60) {
                  *(float *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar10 * 8) + 0x10)
                            + uVar16 * 4) = fVar1;
                }
                else {
                  fVar19 = DAT_02390124 - (fVar19 - local_60) / local_84;
                  lVar4 = *(longlong *)
                           (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar10 * 8) + 0x10);
                  *(float *)(lVar4 + uVar16 * 4) =
                       (DAT_02390124 - fVar19) * *(float *)(lVar4 + uVar16 * 4) + fVar1 * fVar19;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar12 != uVar10);
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar9);
        }
      }
      if (local_78 != 0) {
        fVar17 = (float)FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      lVar13 = *unaff_RDI;
    } while (lVar11 < *(int *)(lVar13 + 0xc));
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


