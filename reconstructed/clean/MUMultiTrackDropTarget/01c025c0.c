// Function: FUN_01c025c0
// Address: 01c025c0
// Size: 1772 bytes
// Class: MUMultiTrackDropTarget

void FUN_01c025c0(double param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  float fVar3;
  uint32_t uVar4;
  char cVar5;
  uint64_t in_RAX;
  char in_CL;
  char *pcVar6;
  undefined7 uVar8;
  int64_t *plVar7;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  uint32_t extraout_XMM0_Dd_03;
  float fVar15;
  uint8_t auVar14 [16];
  float fVar16;
  uint8_t auVar17 [16];
  float fVar18;
  int64_t *local_100;
  char local_f8;
  int64_t *local_b0;
  char local_a8 [16];
  int local_98;
  uint64_t local_94;
  uint64_t local_88;
  uint32_t uStack_7c;
  uint64_t local_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  uint32_t local_3c;
  int64_t *local_38;
  
  plVar7 = (int64_t *)*param_2;
  local_3c = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),(char)param_2[1]);
  if (((char)param_2[1] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = FUN_01c02540();
  uStack_70 = extraout_XMM0_Dc;
  uStack_6c = extraout_XMM0_Dd;
  FUN_01bcb030();
  uVar11 = FUN_01cf5cf0();
  if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca1380();
  pcVar6 = &local_50;
  if (local_a8[0] != '\0') {
    pcVar6 = local_a8;
  }
  local_50 = local_a8[0];
  *pcVar6 = '\0';
  local_58 = local_b0;
  if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01c02c4d;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_01c02c4d;
  local_a8[0] = '\0';
  local_b0 = (int64_t *)0x0;
  local_94 = 0;
  lVar9 = 0;
  auVar14 = ZEXT816(0);
  local_38 = plVar7;
  fVar3 = g_0241e400;
  fVar15 = g_0241e400;
  uVar12 = local_78;
  do {
    plVar7 = local_38;
    local_78._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
    local_78._0_4_ = (float)uVar12;
    local_98 = (int)lVar9;
    if (*(int *)((int64_t)local_58 + 0xc) <= local_98) break;
    local_b0 = *(int64_t **)(local_58[2] + lVar9 * 8);
    local_78 = uVar12;
    if (*(char *)(this_ptr + 0x21) == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_01bcb030();
        local_88 = (double)FUN_01e437f0(0);
        uStack_7c = extraout_XMM0_Dd_00;
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x4d8))();
        local_78._0_4_ = local_88._4_4_;
        local_78._4_4_ = local_88._4_4_;
        uStack_70 = uStack_7c;
        uStack_6c = uStack_7c;
        fVar15 = auVar14._4_4_;
      }
    }
    else if (local_98 == 0) {
      if (local_38 != (int64_t *)0x0) {
        FUN_01bcb030();
        local_88 = (double)FUN_01e437f0(0);
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x4d8))();
        local_78._4_4_ = auVar14._4_4_;
        uStack_70 = auVar14._12_4_;
        local_78._0_4_ = local_78._4_4_ * g_0239011c + local_88._4_4_;
        uStack_6c = uStack_70;
        fVar3 = local_78._4_4_;
        fVar15 = local_78._4_4_;
      }
    }
    else {
      local_78._0_4_ = (float)local_78 + fVar3;
    }
    local_88 = param_1 - (double)local_b0[5];
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    cVar5 = (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x3c8))();
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_88 = (double)(**(code **)(*(int64_t *)*arg1 + 0x370))(SUB84(local_88,0));
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    uVar12 = (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x390))(SUB84(local_88,0));
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    uVar13 = (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x390))
                       (SUB84((double)local_b0[6] + local_88,0));
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    fVar18 = (float)uVar13 - (float)uVar12;
    fVar16 = (float)uVar12 - (float)uVar11;
    auVar14._4_4_ = (int)((uint64_t)uVar12 >> 0x20);
    auVar14._0_4_ = fVar16;
    auVar14._8_4_ = extraout_XMM0_Dc_00;
    auVar14._12_4_ = extraout_XMM0_Dd_01;
    auVar17._4_4_ = (int)((uint64_t)uVar13 >> 0x20);
    auVar17._0_4_ = fVar18;
    auVar17._8_4_ = extraout_XMM0_Dc_01;
    auVar17._12_4_ = extraout_XMM0_Dd_02;
    if (((((*(float *)(local_b0 + 7) != fVar16) || (NAN(*(float *)(local_b0 + 7)) || NAN(fVar16)))
         || (*(float *)((int64_t)local_b0 + 0x3c) != (float)local_78)) ||
        ((NAN(*(float *)((int64_t)local_b0 + 0x3c)) || NAN((float)local_78) ||
         (*(float *)(local_b0 + 8) != fVar18)))) || (NAN(*(float *)(local_b0 + 8)) || NAN(fVar18)))
    {
LAB_01c02a20:
      auVar14 = insertps(auVar14,(float)local_78,0x10);
      auVar17 = insertps(auVar17,fVar15,0x10);
      auVar14._8_8_ = auVar17._0_8_;
      *(uint8_t (*) [16])(local_b0 + 7) = auVar14;
      *(void*)(this_ptr + 0x20) = 1;
    }
    else if ((*(float *)((int64_t)local_b0 + 0x44) != fVar15) ||
            (NAN(*(float *)((int64_t)local_b0 + 0x44)) || NAN(fVar15))) goto LAB_01c02a20;
    FUN_01bcc520();
    uVar10 = (**(code **)(*local_100 + 0x998))(SUB84(local_88,0));
    local_60 = 0;
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    plVar7 = local_38;
    local_60 = '\x01';
    local_68 = lVar1;
    FUN_01c03020(uVar10,(void*)(this_ptr + 0x20));
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(char *)(this_ptr + 0x21) == '\0') {
      if (plVar7 == (int64_t *)0x0) {
        local_78._0_4_ = (float)local_78 + fVar15;
        local_38 = (int64_t *)0x0;
      }
      else {
        FUN_01be64b0();
        plVar2 = (int64_t *)CONCAT71(uStack_4f,local_50);
        uVar8 = (undefined7)((uint64_t)plVar7 >> 8);
        if (plVar2 == plVar7) {
          uVar10 = local_3c;
          plVar2 = local_38;
          if ((char)local_3c == '\0') {
            if (local_48 != '\0') {
              local_3c = (uint32_t)CONCAT71(uVar8,1);
              goto LAB_01c02745;
            }
            FUN_00d50b00();
            uVar10 = (int)CONCAT71(uVar8,1);
            plVar2 = local_38;
          }
LAB_01c02ba9:
          local_38 = plVar2;
          uVar4 = local_3c;
          plVar2 = local_38;
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
            uVar4 = local_3c;
            plVar2 = local_38;
          }
        }
        else {
          if (local_48 == '\0') {
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar10 = (uint32_t)CONCAT71(uVar8,1);
            if ((char)local_3c != '\0') {
              FUN_00d50b20();
            }
            goto LAB_01c02ba9;
          }
          uVar10 = (uint32_t)CONCAT71(uVar8,1);
          uVar4 = local_3c;
          if ((char)local_3c != '\0') {
            FUN_00d50b20();
            uVar4 = local_3c;
          }
        }
        local_38 = plVar2;
        local_3c = uVar10;
        if (local_38 == (int64_t *)0x0) {
          local_3c = uVar4;
          uVar12 = FUN_01c02540();
          local_78._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
          local_78._0_4_ = (float)uVar12 - (float)((uint64_t)uVar11 >> 0x20);
          local_38 = (int64_t *)0x0;
          local_3c = uVar10;
          uStack_70 = extraout_XMM0_Dc_02;
          uStack_6c = extraout_XMM0_Dd_03;
          fVar15 = g_0241e400;
        }
      }
    }
LAB_01c02745:
    uVar12 = CONCAT44(local_78._4_4_,(float)local_78);
    lVar9 = lVar9 + 1;
  } while (in_CL != '\0');
  uVar10 = local_3c;
  local_78 = uVar12;
  FUN_01c051e0();
  FUN_00d50b20();
  plVar7 = local_38;
  local_3c = uVar10;
LAB_01c02c4d:
  if (*(char *)(this_ptr + 0x20) != '\0') {
    FUN_01bcaf90();
    (**(code **)(*local_b0 + 0x620))();
    if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x20) = 0;
  }
  if (((char)local_3c != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

