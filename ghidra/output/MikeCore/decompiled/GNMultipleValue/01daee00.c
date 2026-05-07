// Function: FUN_01daee00
// Address: 01daee00
// Size: 2774 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01daeec3) */
/* WARNING: Removing unreachable block (ram,0x01daeed3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01daee00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [12];
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar16;
  undefined8 uVar12;
  undefined8 uVar13;
  float extraout_XMM0_Db;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fStack_114;
  float local_e8;
  float fStack_e4;
  undefined1 local_d8 [16];
  float local_c8;
  float fStack_c4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_50;
  char local_48;
  float local_34;
  
  *(undefined1 *)(unaff_RDI + 0x3b) = 0;
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 7) && (iVar6 = FUN_01d3b650(), iVar6 == 0)) {
    cVar5 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (cVar5 == '\0') {
      return;
    }
    (**(code **)(*unaff_RDI + 0xb10))();
    FUN_01d3b640();
    if (unaff_RDI[0x39] != 0) {
      FUN_01d0d420();
    }
    (**(code **)(*unaff_RDI + 0xb08))();
    (**(code **)(*unaff_RDI + 0x620))();
                    /* WARNING: Could not recover jumptable at 0x01daef74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0xa50))();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 1) || (iVar6 = FUN_01d3b630(), iVar6 != 1)) {
    FUN_01d122b0();
    return;
  }
  cVar5 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar5 == '\0') {
    return;
  }
  uVar7 = FUN_01d3b590();
  if (DAT_028b89b4 == 0) {
    DAT_028b89b4 = 8;
    uVar7 = ~uVar7 & 8;
  }
  else {
    uVar7 = DAT_028b89b4 & ~uVar7;
  }
  if (uVar7 == 0) {
    (**(code **)(*unaff_RDI + 0x990))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      (**(code **)(*unaff_RDI + 0x990))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x978))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01daf8bf;
    }
  }
  *(undefined1 *)(unaff_RDI + 0x31) = 1;
  (**(code **)(*unaff_RDI + 0x620))();
  FUN_01d3abf0();
  uVar11 = FUN_01e466c0();
  fVar16 = (float)((ulonglong)uVar11 >> 0x20);
  uVar12 = (**(code **)(*unaff_RDI + 0xaf8))();
  local_78 = (float)uVar12;
  fStack_74 = (float)((ulonglong)uVar12 >> 0x20);
  uStack_70 = (undefined4)extraout_XMM0_Qb;
  uStack_6c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  uVar14 = param_2;
  uVar13 = (**(code **)(*unaff_RDI + 0xb00))();
  local_e8 = (float)uVar14;
  fStack_e4 = (float)((ulonglong)uVar14 >> 0x20);
  cVar5 = FUN_00d05410();
  local_98 = (float)uVar11;
  local_a8 = (float)param_2;
  fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
  if (cVar5 != '\0') {
    local_34 = 0.0;
LAB_01daf3d0:
    local_d8._0_4_ = local_98;
    bVar2 = false;
    local_78 = 1.4013e-45;
    fVar18 = fVar16;
    do {
      (**(code **)(*unaff_RDI + 0xaa8))();
      (**(code **)(*unaff_RDI + 0x658))();
      lVar8 = *unaff_RSI;
      if (lVar8 == local_50) {
        if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01daf50b;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01daf506;
        }
LAB_01daf4d2:
        *(undefined1 *)(unaff_RSI + 1) = 1;
      }
      else {
        lVar3 = unaff_RSI[1];
        if (local_48 != '\0') {
          *unaff_RSI = local_50;
          if (((char)lVar3 != '\0') && (lVar8 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01daf4d2;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar3 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
LAB_01daf506:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01daf50b:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*unaff_RSI == 0) || (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) goto LAB_01daf882;
      uVar7 = FUN_01d3b590();
      if (DAT_028b89b0 == 0) {
        DAT_028b89b0 = 4;
      }
      bVar9 = (DAT_028b89b0 & ~uVar7) == 0;
      if (bVar9) {
        bVar2 = true;
      }
      *(bool *)(unaff_RDI + 0x3b) = bVar9;
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 5) {
        FUN_01d3abf0();
        uVar14 = FUN_01e466c0();
        cVar5 = (**(code **)(*unaff_RDI + 0xae0))();
        fStack_c4 = (float)((ulonglong)uVar14 >> 0x20);
        local_c8 = (float)uVar14;
        if (cVar5 == '\0') {
          if (bVar2) {
            cVar5 = (**(code **)(*unaff_RDI + 0xaf0))();
            if (cVar5 == '\0') {
              fVar18 = fStack_c4 - fVar18;
            }
            else {
              fVar18 = fVar18 - fStack_c4;
            }
            fVar18 = fVar18 / (fStack_e4 - fStack_a4);
            if ((char)unaff_RDI[0x3b] != '\0') {
              fVar18 = fVar18 * DAT_02391090;
            }
            fVar10 = (float)(**(code **)(*unaff_RDI + 0xb10))();
            fVar17 = DAT_02390124;
            if (fVar10 + fVar18 <= DAT_02390124) {
              fVar17 = fVar10 + fVar18;
            }
            local_34 = 0.0;
            if (0.0 <= fVar17) {
              local_34 = fVar17;
            }
            if (unaff_RDI[0x39] != 0) {
              cVar5 = (char)unaff_RDI[0x3b];
              goto joined_r0x01daf811;
            }
          }
          else {
            fStack_114 = (float)((ulonglong)uVar13 >> 0x20);
            fStack_114 = (fStack_c4 - (fVar16 - fStack_74)) - fStack_114;
            fVar18 = 0.0;
            if (0.0 <= fStack_114) {
              fVar18 = fStack_114;
            }
            uVar7 = -(uint)(fStack_e4 < fStack_a4 + fVar18);
            fVar18 = (float)(uVar7 & (uint)(fStack_e4 - fStack_a4) | ~uVar7 & (uint)fVar18) /
                     (fStack_e4 - fStack_a4);
            cVar5 = (**(code **)(*unaff_RDI + 0xaf0))();
            if (cVar5 != '\0') {
              fVar18 = DAT_02390124 - fVar18;
            }
            fVar17 = DAT_02390124;
            if (fVar18 <= DAT_02390124) {
              fVar17 = fVar18;
            }
            local_34 = 0.0;
            if (0.0 <= fVar17) {
              local_34 = fVar17;
            }
            if (unaff_RDI[0x39] != 0) {
              cVar5 = (char)unaff_RDI[0x3b];
joined_r0x01daf811:
              if (cVar5 == '\0') {
                local_34 = (float)FUN_01d0d420();
              }
            }
          }
        }
        else if (bVar2) {
          fVar18 = (local_c8 - (float)local_d8._0_4_) / (local_e8 - local_a8);
          if ((char)unaff_RDI[0x3b] != '\0') {
            fVar18 = fVar18 * DAT_02391090;
          }
          fVar10 = (float)(**(code **)(*unaff_RDI + 0xb10))();
          fVar17 = DAT_02390124;
          if (fVar10 + fVar18 <= DAT_02390124) {
            fVar17 = fVar10 + fVar18;
          }
          local_34 = 0.0;
          if (0.0 <= fVar17) {
            local_34 = fVar17;
          }
          if (unaff_RDI[0x39] != 0) {
            cVar5 = (char)unaff_RDI[0x3b];
            goto joined_r0x01daf811;
          }
        }
        else {
          fVar18 = DAT_02390124;
          if (local_34 <= DAT_02390124) {
            fVar18 = local_34;
          }
          local_34 = 0.0;
          if (0.0 <= fVar18) {
            local_34 = fVar18;
          }
          if ((unaff_RDI[0x39] != 0) && ((char)unaff_RDI[0x3b] == '\0')) {
            local_d8 = ZEXT416(0);
            local_34 = (float)FUN_01d0d420();
          }
        }
        (**(code **)(*unaff_RDI + 0xb08))();
        cVar5 = (**(code **)(*unaff_RDI + 0xa38))();
        if (cVar5 != '\0') {
          (**(code **)(*unaff_RDI + 0xa50))();
          local_78 = 2.8026e-45;
        }
        local_d8._0_4_ = local_c8;
        fVar18 = fStack_c4;
      }
    } while( true );
  }
  uVar7 = FUN_01d3b590();
  if (DAT_028b89b0 == 0) {
    DAT_028b89b0 = 4;
  }
  uVar4 = DAT_028b89b0;
  cVar5 = (**(code **)(*unaff_RDI + 0xae0))();
  if ((uVar4 & ~uVar7) != 0) {
    if (cVar5 == '\0') {
      auVar15 = roundss(ZEXT416((uint)(DAT_0239011c * fStack_a4)),
                        ZEXT416((uint)(DAT_0239011c * fStack_a4)),9);
      fVar18 = fVar16 - auVar15._0_4_;
      local_a8 = 0.0;
      if (0.0 <= fVar18) {
        local_a8 = fVar18;
      }
      uVar7 = -(uint)(fStack_e4 < fStack_a4 + local_a8);
      fVar17 = (float)(~uVar7 & (uint)local_a8 | uVar7 & (uint)(fStack_e4 - fStack_a4)) /
               (fStack_e4 - fStack_a4);
      fVar18 = DAT_02390124;
      if (fVar17 <= DAT_02390124) {
        fVar18 = fVar17;
      }
      local_34 = 0.0;
      if (0.0 <= fVar18) {
        local_34 = fVar18;
      }
      fStack_a4 = 0.0;
      cVar5 = (**(code **)(*unaff_RDI + 0xaf0))();
      if (cVar5 != '\0') {
        local_34 = DAT_02390124 - local_34;
      }
    }
    else {
      auVar15 = roundss(ZEXT416((uint)(DAT_0239011c * local_a8)),
                        ZEXT416((uint)(DAT_0239011c * local_a8)),9);
      fVar17 = local_98 - auVar15._0_4_;
      fVar18 = 0.0;
      if (0.0 <= fVar17) {
        fVar18 = fVar17;
      }
      uVar7 = -(uint)(local_e8 < local_a8 + fVar18);
      fVar18 = (float)(~uVar7 & (uint)fVar18 | uVar7 & (uint)(local_e8 - local_a8)) /
               (local_e8 - local_a8);
      local_a8 = DAT_02390124;
      if (fVar18 <= DAT_02390124) {
        local_a8 = fVar18;
      }
      fStack_a4 = 0.0;
      local_34 = 0.0;
      if (0.0 <= local_a8) {
        local_34 = local_a8;
      }
    }
    (**(code **)(*unaff_RDI + 0xb08))();
    (**(code **)(*unaff_RDI + 0xaf8))();
    fStack_74 = extraout_XMM0_Db;
    goto LAB_01daf3d0;
  }
  auVar15._8_4_ = uStack_70;
  auVar15._0_8_ = uVar12;
  auVar15._12_4_ = uStack_6c;
  if (cVar5 == '\0') {
    if (fStack_a4 + fStack_74 + DAT_02390d00 < fVar16) {
      (**(code **)(*unaff_RDI + 0xaf0))();
      (**(code **)(*unaff_RDI + 0xb10))();
      (**(code **)(*unaff_RDI + 0xb18))();
      auVar15 = ZEXT416(0);
      (**(code **)(*unaff_RDI + 0xb08))();
      auVar1._4_8_ = auVar15._8_8_;
      auVar1._0_4_ = fStack_74;
      auVar15._0_8_ = auVar1._0_8_ << 0x20;
    }
    if (fVar16 < auVar15._4_4_) {
      (**(code **)(*unaff_RDI + 0xaf0))();
      (**(code **)(*unaff_RDI + 0xb10))();
      (**(code **)(*unaff_RDI + 0xb18))();
      goto LAB_01daf303;
    }
  }
  else {
    if (local_a8 + local_78 + DAT_02390d00 < local_98) {
      (**(code **)(*unaff_RDI + 0xb10))();
      (**(code **)(*unaff_RDI + 0xb18))();
      (**(code **)(*unaff_RDI + 0xb08))();
    }
    if (local_98 < auVar15._0_4_) {
      (**(code **)(*unaff_RDI + 0xb10))();
      (**(code **)(*unaff_RDI + 0xb18))();
LAB_01daf303:
      (**(code **)(*unaff_RDI + 0xb08))();
    }
  }
LAB_01daf8bf:
  lVar8 = *unaff_RDI;
LAB_01daf8c7:
  (**(code **)(lVar8 + 0xa50))();
  return;
LAB_01daf882:
  (**(code **)(*unaff_RDI + 0x6e0))();
  *(undefined1 *)(unaff_RDI + 0x3b) = 0;
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  (**(code **)(*unaff_RDI + 0x620))();
  if (local_78 == 2.8026e-45) {
    lVar8 = *unaff_RDI;
    goto LAB_01daf8c7;
  }
  goto LAB_01daf8bf;
}


