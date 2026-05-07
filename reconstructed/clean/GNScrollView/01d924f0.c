// Function: FUN_01d924f0
// Address: 01d924f0
// Size: 1475 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01d924f0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  void*puVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar14;
  float fVar15;
  float fVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 7) &&
     (((cVar6 = (**(code **)(*this_ptr + 0xae8))(), cVar6 != '\0' &&
       (iVar8 = FUN_01d3b650(), iVar8 == 0)) ||
      ((cVar6 = (**(code **)(*this_ptr + 0xae0))(), cVar6 != '\0' &&
       (iVar8 = FUN_01d3b650(), iVar8 == 1)))))) {
    if ((int64_t *)this_ptr[0x3d] == (int64_t *)0x0) {
      return;
    }
    (**(code **)(*(int64_t *)this_ptr[0x3d] + 0x3c0))();
    return;
  }
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 != 1) || (iVar8 = FUN_01d3b630(), iVar8 != 1)) {
    local_88 = *arg1;
    local_80 = '\0';
    FUN_01daee00();
    if (local_80 == '\0') {
      return;
    }
    if (local_88 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  cVar6 = FUN_01d91c50();
  if (cVar6 == '\0') {
    return;
  }
  FUN_01d3abf0();
  local_78 = FUN_01e466c0();
  (**(code **)(*this_ptr + 0x640))();
  cVar6 = (**(code **)(*local_40 + 0x588))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
LAB_01d92702:
    (**(code **)(*this_ptr + 0x640))();
    cVar6 = (**(code **)(*local_40 + 0x588))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = CONCAT44(fVar15,fVar14);
    if (cVar6 == '\0') goto LAB_01d92764;
    uVar11 = FUN_01d91f30();
    cVar6 = FUN_00d05410((uint32_t)local_78,(int)uVar11,CONCAT44(fVar15,fVar14));
    if (cVar6 == '\0') goto LAB_01d92764;
    puVar9 = (void*)((int64_t)this_ptr + 0x1f5);
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    cVar6 = (**(code **)(*local_40 + 0x588))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = g_023dccf4;
    uVar12 = g_023dccec;
    if (cVar6 != '\0') {
      uVar11 = FUN_01e3f820();
      fVar16 = (float)((uint64_t)uVar11 >> 0x20);
      auVar20._8_4_ = extraout_XMM0_Dc;
      auVar20._0_8_ = uVar11;
      auVar20._12_4_ = extraout_XMM0_Dd;
      if (fVar14 <= fVar15) {
        auVar3._4_4_ = fVar16;
        auVar3._0_4_ = fVar16 + (fVar15 - fVar14);
        auVar3._8_4_ = extraout_XMM0_Dd;
        auVar3._12_4_ = extraout_XMM0_Dd;
        auVar20 = insertps(auVar20,auVar3,0x10);
        uVar11 = CONCAT44(fVar14,fVar14);
        uVar12 = auVar20._0_8_;
      }
      else {
        auVar17._4_12_ = auVar20._4_12_;
        auVar17._0_4_ = (float)uVar11 + (fVar14 - fVar15);
        uVar11 = CONCAT44(fVar15,fVar15);
        uVar12 = auVar17._0_8_;
      }
    }
    fVar14 = (float)uVar12;
    fVar15 = (float)((uint64_t)uVar12 >> 0x20);
    cVar6 = FUN_00d05410((uint32_t)local_78,fVar14,uVar11);
    uVar11 = CONCAT44(fVar15,fVar14);
    if (cVar6 == '\0') goto LAB_01d92702;
    puVar9 = (void*)((int64_t)this_ptr + 500);
  }
  *puVar9 = 1;
LAB_01d92764:
  if ((*(char *)((int64_t)this_ptr + 500) == '\0') &&
     (*(char *)((int64_t)this_ptr + 0x1f5) == '\0')) {
    local_98 = *arg1;
    local_90 = '\0';
    FUN_01daee00();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    g_028b86e8 = FUN_00e7d6f0();
    FUN_01f27fe0();
    local_58 = this_ptr + 0x3c;
    local_48 = 0;
    (**(code **)(this_ptr[0x3c] + 0x10))();
    uVar10 = FUN_00d50b00();
    local_50 = local_58;
    local_48 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    FUN_01f47190(uVar10,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d92330();
    do {
      do {
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        if (*(char *)((int64_t)this_ptr + 500) == '\0') {
          if (*(char *)((int64_t)this_ptr + 0x1f5) != '\0') {
            local_78 = uVar12;
            uVar13 = FUN_01d91f30();
            uVar12 = uVar11;
            uVar11 = uVar13;
            goto LAB_01d9291f;
          }
          g_028b86e0 = 1;
        }
        else {
          local_78 = uVar12;
          (**(code **)(*this_ptr + 0x640))();
          cVar6 = (**(code **)(*local_40 + 0x588))();
          uVar13 = uVar11;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar12 = g_023dccf4;
          uVar11 = g_023dccec;
          if (cVar6 != '\0') {
            uVar11 = FUN_01e3f820();
            fVar16 = (float)((uint64_t)uVar13 >> 0x20);
            fVar15 = (float)uVar13;
            fVar14 = (float)((uint64_t)uVar11 >> 0x20);
            auVar18._8_4_ = extraout_XMM0_Dc_00;
            auVar18._0_8_ = uVar11;
            auVar18._12_4_ = extraout_XMM0_Dd_00;
            if (fVar15 <= fVar16) {
              auVar2._4_4_ = fVar14;
              auVar2._0_4_ = fVar14 + (fVar16 - fVar15);
              auVar2._8_4_ = extraout_XMM0_Dd_00;
              auVar2._12_4_ = extraout_XMM0_Dd_00;
              auVar20 = insertps(auVar18,auVar2,0x10);
              uVar12 = CONCAT44(fVar15,fVar15);
              uVar11 = auVar20._0_8_;
            }
            else {
              auVar19._4_12_ = auVar18._4_12_;
              auVar19._0_4_ = (float)uVar11 + (fVar15 - fVar16);
              uVar12 = CONCAT44(fVar16,fVar16);
              uVar11 = auVar19._0_8_;
            }
          }
LAB_01d9291f:
          bVar7 = FUN_00d05410((uint32_t)local_78,(int)uVar11,uVar12);
          g_028b86e0 = bVar7 ^ 1;
        }
        (**(code **)(*this_ptr + 0x658))();
        plVar5 = local_40;
        plVar1 = (int64_t *)*arg1;
        if (plVar1 == local_40) {
          if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01d929c9;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01d929c4;
          }
LAB_01d92982:
          *(void*)(arg1 + 1) = 1;
        }
        else {
          lVar4 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (int64_t)local_40;
            if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d92982;
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar5;
          if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d929c4:
          *(void*)(arg1 + 1) = 1;
LAB_01d929c9:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*arg1 == 0) goto LAB_01d92a06;
        iVar8 = FUN_01d3a5a0();
      } while (iVar8 != 6);
      iVar8 = FUN_01d3b630();
    } while (iVar8 != 1);
LAB_01d92a06:
    FUN_01f27fe0();
    local_60 = 0;
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b00();
    local_68 = local_58;
    local_60 = '\x01';
    FUN_01f474f0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)((int64_t)this_ptr + 500) = 0;
  }
  return;
}

