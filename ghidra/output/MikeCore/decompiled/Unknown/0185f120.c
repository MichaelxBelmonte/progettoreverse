// Function: FUN_0185f120
// Address: 0185f120
// Size: 2127 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0185f120(longlong *param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float *local_res8;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined1 (*local_c8) [16];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  longlong *local_90;
  undefined4 *local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  longlong local_68;
  undefined8 *local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0xffffffff;
  }
  if (local_res8 != (float *)0x0) {
    *local_res8 = 0.0;
  }
  if (*unaff_RDI == 0) {
    return -1;
  }
  local_90 = param_1;
  local_88 = param_4;
  local_58 = unaff_ESI;
  local_50 = param_2;
  local_7c = FUN_01715480();
  iVar6 = local_50;
  local_e8 = *param_3;
  local_e0 = 0;
  local_54 = local_7c;
  FUN_0185e700(local_50,local_58,1,&local_e8);
  local_38 = CONCAT44(uStack_74,local_78);
  if ((local_70 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar10 = local_38;
  local_d0 = *(undefined8 *)(local_38 + 0x10);
  fVar11 = (float)FUN_015b32a0();
  fVar11 = fVar11 * DAT_02394288;
  pfVar4 = *(float **)(lVar10 + 0x10);
  local_48._0_4_ = fVar11;
  if (fVar11 < *pfVar4) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 0;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[1]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 1;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[2]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 2;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[3]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 3;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[4]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 4;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[5]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 5;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[6]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 6;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[7]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 7;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[8]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 8;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[9]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 9;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[10]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 10;
    pfVar4 = *(float **)(local_38 + 0x10);
    fVar11 = (float)local_48._0_4_;
  }
  if (fVar11 < pfVar4[0xb]) {
    iVar5 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar3[2] + (longlong)iVar5) = 0xb;
  }
  iVar5 = -1;
  if (local_58 < iVar6) {
    lVar10 = (longlong)local_58;
    _local_48 = ZEXT816(0);
    local_4c = 0x80;
    local_b0 = lVar10;
    do {
      lVar9 = *(longlong *)(*(longlong *)(*local_90 + 0x10) + lVar10 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar9 + 0xc) < 1) {
        fVar11 = (float)local_48._0_4_;
      }
      else {
        lVar7 = 0;
        local_a8._0_4_ = local_48._0_4_;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar7 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          iVar6 = *(int *)(puVar3 + 3);
          iVar5 = iVar6 + 3;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          if (3 < iVar6) {
            iVar6 = *(int *)(lVar1 + 0xc);
            lVar8 = 0;
            do {
              if (*(int *)(puVar3[2] + lVar8 * 4) ==
                  iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc) {
                if ((iVar6 < local_4c) && (DAT_02391094 < *(float *)(lVar1 + 0x14))) {
                  local_4c = iVar6;
                }
                break;
              }
              lVar8 = lVar8 + 1;
            } while (iVar5 >> 2 != (int)lVar8);
          }
          _local_48 = ZEXT416(*(uint *)(lVar1 + 0x14));
          FUN_00d50b20();
          fVar11 = (float)local_48._0_4_;
          if ((float)local_48._0_4_ <= (float)local_a8._0_4_) {
            fVar11 = (float)local_a8._0_4_;
          }
          lVar7 = lVar7 + 1;
          local_a8._0_4_ = fVar11;
        } while (lVar7 < *(int *)(lVar9 + 0xc));
      }
      local_48._0_4_ = fVar11;
      FUN_00d50b20();
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 != local_50);
    if (local_4c == 0x80) {
      iVar5 = -1;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0185f95a;
    }
    else {
      FUN_00c8e690();
      lVar10 = CONCAT44(uStack_74,local_78);
      local_60 = puVar3;
      if ((((local_70 == '\0') && (lVar10 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
         (CONCAT44(uStack_74,local_78) != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_68 = lVar10;
      ___bzero();
      if (3 < *(int *)(puVar3 + 3)) {
        local_4c = local_4c + 0x18;
        local_a8 = insertps(_DAT_02417100,
                            ZEXT416(~-(uint)((float)local_48._0_4_ < DAT_02394274) & local_48._0_4_
                                    | DAT_02390124 & -(uint)((float)local_48._0_4_ < DAT_02394274)),
                            0x10);
        lVar10 = 0;
        do {
          iVar6 = *(int *)(puVar3[2] + lVar10 * 4);
          lVar9 = local_b0;
          local_b8 = lVar10;
          do {
            lVar10 = *(longlong *)(*(longlong *)(*local_90 + 0x10) + lVar9 * 8);
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            if (*(int *)(lVar10 + 0xc) < 1) {
              auVar12._12_4_ = 0;
              auVar12._0_12_ = stack0xffffffffffffffbc;
              _local_48 = auVar12 << 0x20;
            }
            else {
              auVar2._12_4_ = 0;
              auVar2._0_12_ = stack0xffffffffffffffbc;
              _local_48 = auVar2 << 0x20;
              lVar7 = 0;
              do {
                lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar7 * 8);
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                iVar5 = *(int *)(lVar1 + 0xc);
                if ((iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc
                     == iVar6) && (local_4c - iVar5 != 0 && iVar5 <= local_4c)) {
                  auVar12 = insertps(ZEXT416((uint)(float)(local_4c - iVar5)),
                                     *(undefined4 *)(lVar1 + 0x14),0x10);
                  auVar12 = divps(auVar12,local_a8);
                  fVar11 = auVar12._0_4_ * auVar12._0_4_ * auVar12._4_4_;
                  if (fVar11 <= (float)local_48._0_4_) {
                    fVar11 = (float)local_48._0_4_;
                  }
                  local_48._0_4_ = fVar11;
                }
                FUN_00d50b20();
                lVar7 = lVar7 + 1;
              } while (lVar7 < *(int *)(lVar10 + 0xc));
            }
            *(float *)(*(longlong *)(local_68 + 0x10) + (longlong)iVar6 * 4) =
                 (float)local_48._0_4_ +
                 *(float *)(*(longlong *)(local_68 + 0x10) + (longlong)iVar6 * 4);
            FUN_00d50b20();
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 != local_50);
          lVar10 = local_b8 + 1;
          iVar6 = *(int *)(local_60 + 3);
          iVar5 = iVar6 + 3;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          puVar3 = local_60;
        } while (lVar10 < iVar5 >> 2);
      }
      local_c8 = *(undefined1 (**) [16])(local_68 + 0x10);
      iVar6 = local_50 - local_58;
      if (iVar6 != 0 && local_58 <= local_50) {
        auVar13._0_4_ = (float)iVar6;
        auVar13._4_4_ = auVar13._0_4_;
        auVar13._8_4_ = auVar13._0_4_;
        auVar13._12_4_ = auVar13._0_4_;
        auVar12 = divps(*local_c8,auVar13);
        *local_c8 = auVar12;
        auVar12 = divps(local_c8[1],auVar13);
        local_c8[1] = auVar12;
        auVar12 = divps(local_c8[2],auVar13);
        local_c8[2] = auVar12;
      }
      fVar11 = (float)FUN_015b32a0(iVar6,&local_54);
      if (DAT_02394274 <= fVar11) {
        if ((local_88 != (undefined4 *)0x0) && (local_res8 != (float *)0x0)) {
          local_48._0_4_ = fVar11;
          local_c0 = *(longlong *)(local_68 + 0x10);
          *(undefined4 *)(local_c0 + (longlong)local_54 * 4) = 0;
          fVar11 = (float)FUN_015b32a0(local_c0,&local_78);
          *local_88 = local_78;
          *local_res8 = fVar11 / (float)local_48._0_4_;
        }
      }
      else {
        local_54 = local_7c;
      }
      iVar5 = local_54;
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0185f95a:
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return iVar5;
}


