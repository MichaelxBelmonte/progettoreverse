// Function: FUN_00b80910
// Address: 00b80910
// Size: 1190 bytes
// Class: GNFilePath

void FUN_00b80910(uint32_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  uint8_t uVar7;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  local_64 = param_2;
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00b80981;
    }
LAB_00b80b7b:
    bVar1 = true;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_00b80b7b;
LAB_00b80981:
    FUN_00b7e000();
    local_58 = local_40;
    local_50 = 0;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    cVar2 = (**(code **)(*plVar5 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_48 = plVar5;
      uVar6 = (**(code **)(*g_028a53a8 + 0x368))();
      local_b8 = *arg1;
      local_b0 = '\0';
      FUN_00b807b0(uVar6,&local_b8);
      plVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (int64_t *)0x0) {
LAB_00b80c20:
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *puVar4 = &g_0254c450;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *(void*)((int64_t)puVar4 + 0x39) = 0;
        *(void*)((int64_t)puVar4 + 0x41) = 0;
        (*g_0254c468)();
        local_98 = *arg1;
        local_90 = '\0';
        FUN_00bde240(param_1,local_64);
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (int64_t)&g_02540e88;
        plVar5[2] = 0;
        plVar5[3] = 0;
        *(void*)(plVar5 + 4) = 0;
        *(void*)((int64_t)plVar5 + 0x24) = 0;
        *(void*)((int64_t)plVar5 + 0x2c) = 0;
        *(void*)((int64_t)plVar5 + 0x34) = 0;
        *(void*)((int64_t)plVar5 + 0x3c) = 0;
        *(void*)((int64_t)plVar5 + 0x44) = 0;
        *(void*)((int64_t)plVar5 + 0x4c) = 0;
        plVar5[0xb] = 0;
        plVar5[0xc] = 0;
        plVar5[0xd] = 0;
        plVar5[0xe] = 0;
        plVar5[0xf] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = 0;
        plVar5[0x12] = 0;
        FUN_00d500e0();
        uVar7 = 0;
        uVar6 = FUN_00b818c0();
        local_78 = *arg1;
        local_80 = '\0';
        local_70 = '\0';
        local_88 = plVar5;
        FUN_00b80860(uVar6,&local_78,param_3,param_4,uVar7);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
        local_60 = (int64_t *)plVar5[0xc];
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (local_40 == local_60) {
          bVar3 = 0;
        }
        else {
          (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
          bVar3 = 1;
          if ((local_e0 != 0) && (plVar5[0xc] != 0)) {
            FUN_00d50b00();
            (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
            local_a8 = plVar5[0xc];
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
            local_a0 = '\x01';
            bVar3 = (**(code **)(*local_d0 + 0x50))();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            bVar3 = bVar3 ^ 1;
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar3 != 0) {
          FUN_00d50b20();
          goto LAB_00b80c20;
        }
      }
      (**(code **)(*g_028a53a8 + 0x378))();
      *this_ptr = plVar5;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_00b80d99;
    }
    bVar1 = false;
  }
  FUN_00b810f0();
  if (bVar1) {
    return;
  }
LAB_00b80d99:
  FUN_00d50b20();
  return;
}

