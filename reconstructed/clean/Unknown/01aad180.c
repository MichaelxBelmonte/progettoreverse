// Function: FUN_01aad180
// Address: 01aad180
// Size: 1276 bytes
// Class: Unknown

void FUN_01aad180(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((((this_ptr[9] != 0) && (this_ptr[8] != 0)) && ((int64_t *)this_ptr[5] != (int64_t *)0x0)
      ) && ((cVar3 = (**(code **)(*(int64_t *)this_ptr[5] + 0x18))(), cVar3 != '\0' &&
            (this_ptr[3] == 0)))) {
    FUN_01f27fe0();
    plVar9 = local_50;
    local_b0 = g_027e3048;
    if (g_027e3048 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_68 = 0;
    lVar1 = this_ptr[9];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    plVar8 = &local_70;
    local_70 = lVar1;
    (**(code **)(*plVar9 + 0x5f0))(plVar8,&local_b0);
    lVar1 = local_40;
    pVar7 = (void*)plVar8;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = lVar1;
    local_98 = '\0';
    (**(code **)(*this_ptr + 0x368))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr[3] != 0) {
      cVar3 = FUN_01aa96d0();
      if (cVar3 == '\0') {
        FUN_01aa83e0();
      }
      else {
        FUN_01aa85c0(0,unaff_ESI);
        lVar2 = local_40;
        lVar5 = this_ptr[0xc];
        if (lVar5 == local_40) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
            lVar5 = this_ptr[0xc];
          }
          this_ptr[0xc] = lVar2;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_01aa85c0(0,param_2);
        lVar2 = local_40;
        lVar5 = this_ptr[0xd];
        if (lVar5 == local_40) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
            lVar5 = this_ptr[0xd];
          }
          this_ptr[0xd] = lVar2;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        plVar9 = (int64_t *)this_ptr[8];
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          plVar9 = (int64_t *)this_ptr[8];
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3a0))();
        FUN_01aad930();
        plVar9 = (int64_t *)this_ptr[8];
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          plVar9 = (int64_t *)this_ptr[8];
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3a0))();
        FUN_01aada00();
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar7 = 0x25e2bf8;
        *puVar6 = &g_025e2bf8;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        (*g_025e2c10)();
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c150((int)g_0238fee8);
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c160((int)g_0238fee8);
        FUN_012d25b0();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_0141c6e0((int)g_023934c8);
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_88 = '\0';
        local_90 = puVar6;
        FUN_0141c900();
        if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_80 = lVar5;
        local_78 = '\0';
        (**(code **)(*(int64_t *)this_ptr[3] + 0x690))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

