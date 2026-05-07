// Function: FUN_01af0e00
// Address: 01af0e00
// Size: 1034 bytes
// Class: Unknown

uint64_t FUN_01af0e00(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar12;
  uint32_t uVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_XMM1_Dc;
  float fVar23;
  float fVar24;
  float in_XMM1_Dd;
  float fVar25;
  float fVar26;
  uint8_t auVar27 [16];
  uint64_t local_98;
  uint64_t uStack_90;
  uint8_t local_88 [16];
  int64_t local_40;
  char local_38;
  int64_t *plVar13;
  
  fVar20 = (float)((uint64_t)param_2 >> 0x20);
  fVar17 = (float)param_2;
  FUN_01ad3cb0();
  lVar4 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      uVar12 = 0;
      goto joined_r0x01af0f42;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar12 = 0;
  if ((lVar4 != 0) && (lVar5 != 0)) {
    (**(code **)(*this_ptr + 0x7b0))();
    lVar6 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    if (*arg1 == 0) {
      bVar8 = false;
LAB_01af0f5e:
      local_88._0_8_ = FUN_01cf5cf0();
      local_88._8_8_ = extraout_XMM0_Qb_00;
      uVar14 = FUN_01e3f820();
      fVar18 = fVar17;
      fVar21 = fVar20;
      fVar23 = in_XMM1_Dc;
      fVar25 = in_XMM1_Dd;
      FUN_01e436c0();
      fVar19 = fVar18;
      fVar22 = fVar21;
      fVar24 = fVar23;
      fVar26 = fVar25;
      FUN_01e436c0();
      auVar16._0_4_ = fVar17 - fVar18;
      auVar16._4_4_ = fVar20 - fVar21;
      auVar16._8_4_ = in_XMM1_Dc - fVar23;
      auVar16._12_4_ = in_XMM1_Dd - fVar25;
      auVar27._0_4_ = fVar17 - fVar19;
      auVar27._4_4_ = fVar20 - fVar22;
      auVar27._8_4_ = in_XMM1_Dc - fVar24;
      auVar27._12_4_ = in_XMM1_Dd - fVar26;
      blendps(auVar27,auVar16,0xd);
      plVar13 = &local_40;
LAB_01af0fc0:
      do {
        (**(code **)(*this_ptr + 0x658))();
        lVar7 = local_40;
        lVar1 = *arg1;
        if (lVar1 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01af105c;
            }
LAB_01af1012:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
          }
          lVar1 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = local_40;
            if (((char)lVar3 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01af1012;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *arg1 = lVar7;
          if (((char)lVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01af105c:
          *(void*)(arg1 + 1) = 1;
          lVar1 = *arg1;
        }
        if (lVar1 == 0) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01af11d0;
        }
        iVar10 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar10 == 6) goto LAB_01af11d0;
        iVar10 = FUN_01d3a5a0();
        if (iVar10 == 5) {
          if (bVar8) {
            FUN_01d3abf0();
            uVar15 = FUN_01e466c0();
            auVar2._4_4_ = local_88._4_4_ - ((float)((uint64_t)uVar15 >> 0x20) - local_98._4_4_);
            auVar2._0_4_ = local_88._0_4_ - ((float)uVar15 - (float)local_98);
            auVar2._8_4_ = local_88._8_4_ - ((float)extraout_XMM0_Qb_02 - (float)uStack_90);
            auVar2._12_4_ =
                 local_88._12_4_ -
                 ((float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20) - uStack_90._4_4_);
            local_88 = blendps(local_88,auVar2,2);
            cVar9 = FUN_00d05410(local_88._0_8_,uVar14);
            if (cVar9 == '\0') {
              local_88._0_8_ = FUN_01cf5cf0();
              local_88._8_8_ = extraout_XMM0_Qb_03;
              local_98 = uVar15;
              uStack_90 = extraout_XMM0_Qb_02;
            }
            else {
              FUN_01cf7140();
            }
          }
          else {
            FUN_01d3abf0();
            bVar8 = true;
            local_98 = FUN_01e466c0();
            uStack_90 = extraout_XMM0_Qb_01;
          }
          goto LAB_01af0fc0;
        }
        iVar10 = FUN_01d3a5a0();
      } while (iVar10 != 4);
      FUN_01aefa80();
      uVar11 = FUN_01d3b590();
      if ((~uVar11 & 10) == 0) {
        FUN_01aef630();
      }
    }
    else {
      FUN_01d3abf0();
      local_98 = FUN_01e466c0();
      plVar13 = (int64_t *)0x0;
      bVar8 = true;
      uStack_90 = extraout_XMM0_Qb;
      if (*arg1 == 0) goto LAB_01af0f5e;
      iVar10 = FUN_01d3b620();
      if (iVar10 != 2) {
        bVar8 = true;
        goto LAB_01af0f5e;
      }
      FUN_01aef330();
    }
LAB_01af11d0:
    uVar12 = CONCAT71((int7)((uint64_t)plVar13 >> 8),1);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
joined_r0x01af0f42:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}

