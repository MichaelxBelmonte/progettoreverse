// Function: FUN_007f9c50
// Address: 007f9c50
// Size: 1991 bytes
// Class: MDMetaWindowController

void FUN_007f9c50(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Db;
  uint64_t uVar6;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Db_06;
  float fVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01a22d80();
  uVar5 = (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_50;
  local_a8 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar5,&local_a8);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  cVar2 = FUN_01d951e0();
  if (cVar2 == '\0') {
    (**(code **)(*this_ptr + 0x960))();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      lVar4 = this_ptr[0x3e];
      if (lVar4 == 0) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02680400;
        *(void*)((int64_t)puVar3 + 0xc) = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(void*)((int64_t)puVar3 + 0x39) = 0;
        *(void*)((int64_t)puVar3 + 0x41) = 0;
        (*g_02680418)();
        lVar4 = this_ptr[0x3e];
        this_ptr[0x3e] = (int64_t)puVar3;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x960))();
        local_68 = (**(code **)(*local_40 + 0x4d8))();
        (**(code **)(*this_ptr + 0x960))();
        (**(code **)(*local_50 + 0x4d8))();
        fVar7 = extraout_XMM0_Db_04 + fVar7;
        FUN_01d39400((float)local_68 + fVar8 + g_02390d00,fVar7 + g_02390d00);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x960))();
        uVar6 = (**(code **)(*local_40 + 0x4d8))();
        local_68 = uVar6;
        (**(code **)(*this_ptr + 0x960))();
        (**(code **)(*local_50 + 0x4d8))();
        fVar7 = extraout_XMM0_Db_05 + fVar7;
        FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x960))();
        uVar6 = (**(code **)(*local_40 + 0x4d8))();
        local_68 = uVar6;
        (**(code **)(*this_ptr + 0x960))();
        (**(code **)(*local_50 + 0x4d8))();
        FUN_01d38ba0((float)local_68,extraout_XMM0_Db_06 + fVar7 + g_02390d00 + g_023b2664);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = this_ptr[0x3e];
      }
      plVar1 = (int64_t *)*arg1;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar4;
      (**(code **)(*plVar1 + 0x3a8))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01d97e80();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_01d97ec0();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x960))();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          lVar4 = this_ptr[0x3e];
          if (lVar4 == 0) {
            puVar3 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar3 = &g_02680400;
            *(void*)((int64_t)puVar3 + 0xc) = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            *(void*)((int64_t)puVar3 + 0x39) = 0;
            *(void*)((int64_t)puVar3 + 0x41) = 0;
            (*g_02680418)();
            lVar4 = this_ptr[0x3e];
            this_ptr[0x3e] = (int64_t)puVar3;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_01d97e80();
            local_68 = (**(code **)(*local_40 + 0x4d8))();
            FUN_01d97e80();
            (**(code **)(*local_50 + 0x4d8))();
            FUN_01d39400((float)local_68,extraout_XMM0_Db);
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d97ec0();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            FUN_01d97e80();
            (**(code **)(*local_50 + 0x4d8))();
            fVar7 = extraout_XMM0_Db_00;
            FUN_01d38ba0((float)local_68,extraout_XMM0_Db_00);
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d97ec0();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            (**(code **)(*this_ptr + 0x960))();
            (**(code **)(*local_50 + 0x4d8))();
            fVar7 = extraout_XMM0_Db_01 + fVar7;
            FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*this_ptr + 0x960))();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            (**(code **)(*this_ptr + 0x960))();
            (**(code **)(*local_50 + 0x4d8))();
            fVar7 = extraout_XMM0_Db_02 + fVar7;
            FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*this_ptr + 0x960))();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            (**(code **)(*this_ptr + 0x960))();
            (**(code **)(*local_50 + 0x4d8))();
            FUN_01d38ba0((float)local_68,extraout_XMM0_Db_03 + fVar7 + g_02390d00 + g_023b2664);
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar4 = this_ptr[0x3e];
          }
          plVar1 = (int64_t *)*arg1;
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_90 = '\x01';
          local_98 = lVar4;
          (**(code **)(*plVar1 + 0x3a8))();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return;
}

