// Function: FUN_01c6cca0
// Address: 01c6cca0
// Size: 1395 bytes
// Class: GNPopUpButton

uint64_t FUN_01c6cca0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint64_t in_RCX;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t uVar13;
  uint64_t in_XMM1_Qb;
  uint64_t uVar16;
  uint64_t uVar17;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t local_d8;
  uint64_t uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint8_t local_a8 [16];
  uint64_t local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int64_t local_48;
  char local_40;
  
  uVar5 = FUN_01d3b590();
  uVar5 = uVar5 & 6;
  uVar6 = FUN_01d3b590();
  uVar6 = uVar6 & 10;
  if (((uVar6 == 10) || (uVar5 == 6)) && (this_ptr[0x2d] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    if (uVar6 == 10) {
      FUN_01c4b7c0();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    else if (uVar5 == 6) {
      FUN_01c4b550();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    iVar7 = FUN_01d3a5a0();
    if ((iVar7 == 4) || (iVar7 = FUN_01d3a5a0(), iVar7 == 5)) goto LAB_01c6cdd6;
    iVar7 = FUN_01d3a5a0();
    if (iVar7 == 1) {
      plVar1 = (int64_t *)this_ptr[0x2d];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_90 = (**(code **)(*plVar1 + 0x930))();
      FUN_00d50b20();
      plVar1 = (int64_t *)this_ptr[0x2d];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x7b0))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d50b20();
      local_a8._0_8_ = FUN_01cf5cf0();
      local_a8._8_8_ = extraout_XMM0_Qb;
      lVar2 = this_ptr[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      uVar10 = param_2;
      uVar16 = in_XMM1_Qb;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = this_ptr[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      uVar13 = uVar10;
      uVar17 = uVar16;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = this_ptr[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      local_b8 = FUN_01e466c0();
      local_c8 = (float)param_2;
      fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
      fStack_c0 = (float)in_XMM1_Qb;
      fStack_bc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      local_88 = (float)uVar10;
      fStack_84 = (float)((uint64_t)uVar10 >> 0x20);
      fStack_80 = (float)uVar16;
      fStack_7c = (float)((uint64_t)uVar16 >> 0x20);
      auVar12._0_4_ = local_c8 - local_88;
      auVar12._4_4_ = fStack_c4 - fStack_84;
      auVar12._8_4_ = fStack_c0 - fStack_80;
      auVar12._12_4_ = fStack_bc - fStack_7c;
      local_f8 = (float)uVar13;
      fStack_f4 = (float)((uint64_t)uVar13 >> 0x20);
      fStack_f0 = (float)uVar17;
      fStack_ec = (float)((uint64_t)uVar17 >> 0x20);
      auVar14._0_4_ = local_c8 - local_f8;
      auVar14._4_4_ = fStack_c4 - fStack_f4;
      auVar14._8_4_ = fStack_c0 - fStack_f0;
      auVar14._12_4_ = fStack_bc - fStack_ec;
      blendps(auVar14,auVar12,0xd);
      local_d8 = param_1;
      uStack_d0 = in_XMM0_Qb;
      uStack_b0 = extraout_XMM0_Qb_00;
LAB_01c6cf60:
      (**(code **)(*this_ptr + 0x658))();
      lVar2 = *arg1;
      if (lVar2 == local_48) {
        if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_01c6cffc;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01c6cff7;
        }
        *(void*)(arg1 + 1) = 1;
      }
      else {
        lVar3 = arg1[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_01c6cff7:
          *(void*)(arg1 + 1) = 1;
LAB_01c6cffc:
          lVar9 = *arg1;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *arg1 = local_48;
          lVar9 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
            lVar9 = *arg1;
          }
          *(void*)(arg1 + 1) = 1;
        }
        if (lVar9 == 0) goto LAB_01c6d1cc;
      }
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 6) goto LAB_01c6d1cc;
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 5) {
        if (uVar6 == 10) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          plVar1 = (int64_t *)this_ptr[0x2d];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_88 = (float)uVar10;
          fStack_84 = (float)((uint64_t)uVar10 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb_02;
          fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
          auVar11._0_4_ = local_88 - (float)local_b8;
          auVar11._4_4_ = fStack_84 - local_b8._4_4_;
          auVar11._8_4_ = fStack_80 - (float)uStack_b0;
          auVar11._12_4_ = fStack_7c - uStack_b0._4_4_;
          auVar12 = blendps(auVar11,g_0238ff00,2);
          (**(code **)(*plVar1 + 0xc60))(auVar12._0_8_,local_90,0);
          FUN_00d50b20();
          lVar2 = this_ptr[0x2d];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01d3abf0();
          local_b8 = FUN_01e466c0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          plVar1 = (int64_t *)this_ptr[0x2d];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_90 = (**(code **)(*plVar1 + 0x930))();
          FUN_00d50b20();
          uStack_b0 = extraout_XMM0_Qb_03;
        }
        else if (uVar5 == 6) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          auVar15._0_4_ = local_a8._0_4_ - ((float)uVar10 - (float)local_d8);
          auVar15._4_4_ = local_a8._4_4_ - ((float)((uint64_t)uVar10 >> 0x20) - local_d8._4_4_);
          auVar15._8_4_ = local_a8._8_4_ - ((float)extraout_XMM0_Qb_01 - (float)uStack_d0);
          auVar15._12_4_ =
               local_a8._12_4_ - ((float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20) - uStack_d0._4_4_)
          ;
          local_a8 = blendps(local_a8,auVar15,0xd);
          cVar4 = FUN_00d05410();
          if (cVar4 == '\0') {
            local_a8._0_8_ = FUN_01cf5cf0();
            local_a8._8_8_ = extraout_XMM0_Qb_04;
            local_d8 = uVar10;
            uStack_d0 = extraout_XMM0_Qb_01;
          }
          else {
            FUN_01cf7140();
          }
        }
      }
      goto LAB_01c6cf60;
    }
  }
  uVar8 = 0;
LAB_01c6d1b8:
  return uVar8 & 0xffffffff;
LAB_01c6d1cc:
  if (local_48 != 0) {
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
    goto LAB_01c6d1b8;
  }
LAB_01c6cdd6:
  uVar8 = CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
  goto LAB_01c6d1b8;
}

