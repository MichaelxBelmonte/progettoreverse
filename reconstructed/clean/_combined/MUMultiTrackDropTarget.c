// ===================================================================
// MUMultiTrackDropTarget — Complete reconstructed pseudocode
// 7 functions
// ===================================================================


// ============================================================
// 01c025c0
// ============================================================
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



// ============================================================
// 01c030e0
// ============================================================
// Function: FUN_01c030e0
// Address: 01c030e0
// Size: 596 bytes
// Class: MUMultiTrackDropTarget

int64_t * FUN_01c030e0(void)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  uint32_t uVar11;
  uint32_t local_a8;
  uint32_t uStack_a4;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  int local_58;
  int iStack_54;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  pcVar8 = &local_48;
  if (local_68[0] != '\0') {
    pcVar8 = local_68;
  }
  local_48 = local_68[0];
  *pcVar8 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_01c03154;
    }
LAB_01c03320:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (local_70 == 0) goto LAB_01c03320;
LAB_01c03154:
    local_68[0] = '\0';
    local_60 = local_70;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    bVar6 = false;
    bVar5 = false;
    lVar10 = 0;
    while( true ) {
      lVar9 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      lVar9 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar9 * 8);
      if (lVar10 == 0) {
        FUN_00ca1380();
        local_38[0] = local_40[0];
        pcVar8 = local_40;
        if (local_40[0] == '\0') {
          pcVar8 = local_38;
        }
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        FUN_00c8e710();
        lVar10 = CONCAT71(uStack_47,local_48);
        if ((((local_40[0] == '\0') && (lVar10 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        bVar5 = bVar6;
        if (lVar10 != 0) {
          bVar5 = true;
        }
        bVar6 = bVar5;
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      uVar2 = *(void*)(lVar9 + 0x38);
      uVar3 = *(void*)(lVar9 + 0x40);
      uVar11 = (uint32_t)uVar3;
      iVar4 = *(int *)(lVar10 + 0x18);
      FUN_00c8e340(uVar11,1);
      iVar7 = iStack_54;
      local_a8 = (uint32_t)uVar2;
      uStack_a4 = (uint32_t)((uint64_t)uVar2 >> 0x20);
      puVar1 = (void*)(*(int64_t *)(lVar10 + 0x10) + (int64_t)iVar4);
      *puVar1 = local_a8;
      puVar1[1] = uStack_a4;
      puVar1[2] = uVar11;
      puVar1[3] = (int)((uint64_t)uVar3 >> 0x20);
      if (iStack_54 != 0) {
        if (iStack_54 < 0) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690(local_a8,iStack_54);
          local_50 = local_50 + iVar7;
          iStack_54 = 0;
        }
      }
    }
    FUN_01c051e0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar5) goto LAB_01c03328;
    if (lVar10 != 0) {
      FUN_00d50b00();
      goto LAB_01c03328;
    }
  }
  lVar10 = 0;
LAB_01c03328:
  *this_ptr = lVar10;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01c03760
// ============================================================
// Function: FUN_01c03760
// Address: 01c03760
// Size: 558 bytes
// Class: MUMultiTrackDropTarget

int64_t * FUN_01c03760(void)

{
  int64_t lVar1;
  char *pcVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t local_88;
  int64_t local_80 [2];
  uint64_t local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  plVar4 = &local_48;
  if ((char)local_80[0] != '\0') {
    plVar4 = local_80;
  }
  local_48 = CONCAT71(local_48._1_7_,(char)local_80[0]);
  *(void*)plVar4 = 0;
  if (((char)local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (local_88 == 0) goto LAB_01c0393d;
    FUN_00d50b00();
LAB_01c037d7:
    local_80[0]._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(local_88 + 0xc) < 1) {
      local_50 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = 0;
      local_50 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar5 * 8);
        if (lVar6 == 0) {
          FUN_00ca1380();
          local_38[0] = local_40[0];
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d894f0();
          lVar6 = local_60;
          if (local_60 == 0) {
            lVar6 = 0;
          }
          else if (local_58 == '\0') {
            uVar3 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        lVar1 = *(int64_t *)(lVar1 + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(local_88 + 0xc));
    }
    FUN_01c051e0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_50 != '\0') goto LAB_01c0397e;
    if (lVar6 != 0) {
      FUN_00d50b00();
      goto LAB_01c0397e;
    }
  }
  else {
    if (local_88 != 0) goto LAB_01c037d7;
LAB_01c0393d:
    *(void*)(this_ptr + 1) = 0;
  }
  lVar6 = 0;
LAB_01c0397e:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01c03420
// ============================================================
// Function: FUN_01c03420
// Address: 01c03420
// Size: 558 bytes
// Class: MUMultiTrackDropTarget

int64_t * FUN_01c03420(void)

{
  int64_t lVar1;
  char *pcVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t local_88;
  int64_t local_80 [2];
  uint64_t local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  plVar4 = &local_48;
  if ((char)local_80[0] != '\0') {
    plVar4 = local_80;
  }
  local_48 = CONCAT71(local_48._1_7_,(char)local_80[0]);
  *(void*)plVar4 = 0;
  if (((char)local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (local_88 == 0) goto LAB_01c035fd;
    FUN_00d50b00();
LAB_01c03497:
    local_80[0]._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(local_88 + 0xc) < 1) {
      local_50 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = 0;
      local_50 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar5 * 8);
        if (lVar6 == 0) {
          FUN_00ca1380();
          local_38[0] = local_40[0];
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d894f0();
          lVar6 = local_60;
          if (local_60 == 0) {
            lVar6 = 0;
          }
          else if (local_58 == '\0') {
            uVar3 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        lVar1 = *(int64_t *)(lVar1 + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(local_88 + 0xc));
    }
    FUN_01c051e0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_50 != '\0') goto LAB_01c0363e;
    if (lVar6 != 0) {
      FUN_00d50b00();
      goto LAB_01c0363e;
    }
  }
  else {
    if (local_88 != 0) goto LAB_01c03497;
LAB_01c035fd:
    *(void*)(this_ptr + 1) = 0;
  }
  lVar6 = 0;
LAB_01c0363e:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01c01f90
// ============================================================
// Function: FUN_01c01f90
// Address: 01c01f90
// Size: 587 bytes
// Class: MUMultiTrackDropTarget

void FUN_01c01f90(double param_1,double param_2)

{
  void*puVar1;
  uint32_t in_ECX;
  int64_t *in_RDX;
  char *pcVar2;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar3;
  double dVar4;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_88 = *arg1;
  local_80 = '\0';
  uVar3 = FUN_00c9fe40(in_ECX,&local_88);
  puVar1 = local_48;
  pcVar2 = local_38;
  if (local_40[0] != '\0') {
    pcVar2 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (puVar1 != (void*)0x0)) {
    uVar3 = FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  *(char *)(this_ptr + 0x21) = (char)in_ECX;
  if (puVar1 == (void*)0x0) {
    puVar1 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &g_02662ff0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    uVar3 = FUN_00d500e0();
    local_78 = *in_RDX;
    local_70 = '\0';
    FUN_01c022f0(uVar3,0);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (((double)puVar1[5] != param_1) || (NAN((double)puVar1[5]) || NAN(param_1))) {
      puVar1[5] = param_1;
    }
    dVar4 = (double)puVar1[6];
    if ((dVar4 != param_2) || (NAN(dVar4) || NAN(param_2))) {
      puVar1[6] = param_2;
      dVar4 = param_2;
    }
    local_68 = *arg1;
    local_60 = '\0';
    local_40[0] = '\0';
    local_48 = puVar1;
    param_2 = (double)FUN_00ca0840(dVar4,&local_68);
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      param_2 = (double)FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      param_2 = (double)FUN_00d50b20();
    }
  }
  else {
    local_58 = *in_RDX;
    local_50 = '\0';
    FUN_01c022f0(uVar3,(void*)(this_ptr + 0x20));
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (((double)puVar1[5] != param_1) || (NAN((double)puVar1[5]) || NAN(param_1))) {
      puVar1[5] = param_1;
      *(void*)(this_ptr + 0x20) = 1;
    }
    dVar4 = (double)puVar1[6];
    if ((dVar4 == param_2) && (!NAN(dVar4) && !NAN(param_2))) goto LAB_01c021c4;
    puVar1[6] = param_2;
  }
  *(void*)(this_ptr + 0x20) = 1;
  dVar4 = param_2;
LAB_01c021c4:
  FUN_00d50b20(dVar4);
  return;
}



// ============================================================
// 01c01bb0
// ============================================================
// Function: FUN_01c01bb0
// Address: 01c01bb0
// Size: 500 bytes
// Class: MUMultiTrackDropTarget
// String references:
//   "MUMultiTrackDropTarget"

void FUN_01c01bb0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  
  if ((g_027e8990 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e88e0 = FUN_00d4fe50();
    g_027e88c8 = "MUMultiTrackDropTarget";
    g_027e88d0 = 0x48;
    g_027e88d8 = FUN_01c03d60;
    g_027e88e8 = 0;
    ram_00000000027e88f0 = 0;
    g_027e88f8 = 0;
    g_027e8970 = 0;
    ram_00000000027e8978 = 0;
    g_027e8980 = 0;
    g_027e8982 = 1;
    g_027e8900 = 0;
    ram_00000000027e8908 = 0;
    g_027e8910 = 0;
    ram_00000000027e8918 = 0;
    g_027e8920 = 0;
    ram_00000000027e8928 = 0;
    g_027e8930 = 0;
    ram_00000000027e8938 = 0;
    g_027e8940 = 0;
    ram_00000000027e8948 = 0;
    g_027e8950 = 0;
    ram_00000000027e8958 = 0;
    g_027e8960 = 0;
    ram_00000000027e8968 = 0;
    g_027e898b = 0;
    g_027e8983 = 0;
    ___cxa_guard_release();
  }
  if (g_027e8983 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_01c04130();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 01c04130
// ============================================================
// Function: FUN_01c04130
// Address: 01c04130
// Size: 840 bytes
// Class: MUMultiTrackDropTarget
// String references:
//   "MUMultiTrackDropTarget"

void FUN_01c04130(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02662ff0;
  FUN_01c044f0();
  FUN_01c047b0();
  FUN_01c04a70();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8983 == '\0') {
    FUN_01c04d30();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8983 == '\0') {
    FUN_01c04ec0();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8983 == '\0') {
    FUN_01c05050();
    FUN_00e87980();
  }
  return;
}

