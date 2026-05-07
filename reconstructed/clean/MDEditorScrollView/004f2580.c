// Function: FUN_004f2580
// Address: 004f2580
// Size: 2115 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004f2580(uint32_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  int64_t *plVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  void *pvVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *plVar10;
  int64_t this_ptr;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  float local_78;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  plVar11 = local_68;
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
LAB_004f25f1:
    plVar10 = (int64_t *)0x0;
  }
  else {
    FUN_0021a630();
    plVar10 = local_68;
    if (local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) goto LAB_004f25f1;
      FUN_00d50b00();
    }
  }
  (**(code **)(*plVar10 + 0x9b8))(param_1,param_2);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00243390();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00228b30();
  if ((iVar5 == 0) && (local_68 != (int64_t *)0x0)) {
    if (*(int *)((int64_t)local_68 + 0xc) == 0) goto LAB_004f2a8f;
    if (*arg1 != 0) {
      FUN_00d50b00();
      FUN_0025e9a0();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_50 = -1;
      while( true ) {
        lVar6 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((int64_t)plVar11 + 0xc) <= local_50) break;
        lVar9 = plVar11[2];
        local_68 = *(int64_t **)(lVar9 + 8 + lVar6 * 8);
        pvVar7 = _pthread_getspecific((void*)lVar9);
        pVar8 = (void*)lVar9;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == local_c8) {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = local_68;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == local_d8) {
            local_38 = '\0';
            FUN_00d21140();
            local_40 = local_68;
          }
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
      goto LAB_004f2a82;
    }
  }
  else {
LAB_004f2a82:
    if (plVar11 == (int64_t *)0x0) goto LAB_004f2dc3;
LAB_004f2a8f:
    plVar2 = local_68;
    if (0 < *(int *)((int64_t)plVar11 + 0xc)) {
      FUN_01e436c0();
      (**(code **)(*plVar10 + 0xb38))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00243390();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == (int64_t *)0x0) {
        local_78 = 0.0;
        iVar5 = *(int *)((int64_t)plVar11 + 0xc);
        local_68 = (int64_t *)0x0;
      }
      else {
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_50 = -1;
        local_78 = 0.0;
        fVar3 = local_78;
        while( true ) {
          local_78 = fVar3;
          lVar6 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)((int64_t)plVar2 + 0xc) <= local_50) break;
          local_68 = *(int64_t **)(plVar2[2] + 8 + lVar6 * 8);
          cVar4 = FUN_00d23d70();
          fVar3 = local_78 + g_02390124;
          if (cVar4 == '\0') {
            fVar3 = local_78;
          }
        }
        FUN_001159b0();
        iVar5 = *(int *)((int64_t)plVar11 + 0xc);
      }
      if ((iVar5 < 1) || (local_78 / (float)iVar5 <= g_023b1610)) {
        FUN_004f2260(plVar10,FUN_004f0e40);
        if (local_68 == plVar11) {
LAB_004f2cf9:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_004f2cf9;
          }
          FUN_00d50b20();
        }
        lVar6 = *(int64_t *)(plVar11[2] + (int64_t)(*(int *)((int64_t)plVar11 + 0xc) / 2) * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        uVar12 = (**(code **)(*plVar10 + 0xc38))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        uVar13 = (**(code **)(*plVar10 + 0xa98))();
        auVar1._8_4_ = extraout_XMM0_Dc;
        auVar1._0_8_ = uVar12;
        auVar1._12_4_ = extraout_XMM0_Dd;
        auVar14._4_12_ = auVar1._4_12_;
        auVar14._0_4_ = (float)uVar12 + (float)((uint64_t)uVar13 >> 0x20) * g_02390118;
        auVar15._8_4_ = extraout_XMM0_Dc_00;
        auVar15._0_8_ = uVar13;
        auVar15._12_4_ = extraout_XMM0_Dd_00;
        auVar15 = blendps(auVar14,auVar15,0xe);
        (**(code **)(*plVar10 + 0xaa0))(auVar15._0_4_);
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_004f2dc3:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

