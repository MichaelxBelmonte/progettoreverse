// Function: FUN_0140e8b0
// Address: 0140e8b0
// Size: 1748 bytes
// Class: Unknown
// String references:
//   "%@%I"

void FUN_0140e8b0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  void*puVar6;
  void*puVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_f8;
  char local_f0;
  uint32_t local_e4;
  uint8_t local_e0 [4];
  uint32_t local_dc;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  uint local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0x20) != 0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_0257ef30;
    plVar4[5] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *(void*)(plVar4 + 4) = 0;
    local_50 = plVar4;
    (*g_0257ef48)();
    local_d0 = '\0';
    local_d8 = 0;
    iVar3 = FUN_00d90650();
    while (lVar1 = g_027c0ae0, iVar3 != -1) {
      local_b0 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar1;
      (**(code **)(*local_50 + 0x368))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x378))();
      uVar8 = FUN_00d95590();
      puVar7 = local_78;
      local_a0 = 0;
      if ((char)local_70 == '\0') {
        if (local_78 != (void*)0x0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_70 = local_70 & 0xffffff00;
      }
      local_a0 = '\x01';
      local_a8 = puVar7;
      uVar8 = (**(code **)(*local_50 + 0x3e0))(uVar8,0);
      if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      local_c8 = *arg1;
      local_c0 = '\0';
      cVar2 = (**(code **)(*local_50 + 0x3e0))(uVar8,&local_d8);
      if (cVar2 == '\0') {
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar2 = (**(code **)(*local_50 + 0x410))();
        uVar8 = extraout_XMM0_Da;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        lVar1 = local_d8;
        if (cVar2 != '\0') {
          local_70 = 2;
          local_78 = &g_024c5048;
          local_60 = 0;
          if (local_d8 != 0) {
            uVar8 = FUN_00d50b00();
          }
          local_68 = lVar1;
          local_60 = '\x01';
          local_78 = (void*)&g_025df2a0;
          local_58 = local_e4;
          FUN_00d8cb40(uVar8,&local_78);
          lVar1 = local_48;
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          cVar2 = FUN_013ff8e0(&local_dc,local_e0);
          uVar8 = extraout_XMM0_Da_00;
          if (lVar1 != 0) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          local_78 = &g_024c5048;
          if ((local_60 != '\0') && (local_68 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_01715d40(uVar8,local_dc);
          }
        }
      }
      (**(code **)(*local_50 + 0x380))();
      uVar5 = FUN_00e7b4e0();
      lVar1 = g_027c0ae0;
      uVar8 = extraout_XMM0_Da_01;
      if (g_027c0ae0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      FUN_01406800(uVar8,uVar5 >> 0x20);
      local_98 = local_48;
      local_90 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      FUN_00d98c80(&local_98);
      puVar7 = *(void**)(this_ptr + 0x20);
      puVar6 = puVar7;
      if (puVar7 != local_78) {
        if ((char)local_70 == '\0') {
          if (local_78 == (void*)0x0) {
            puVar6 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar7 = *(void**)(this_ptr + 0x20);
            puVar6 = local_78;
          }
        }
        else {
          local_70 = local_70 & 0xffffff00;
          puVar6 = local_78;
        }
        *(void**)(this_ptr + 0x20) = puVar6;
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
          puVar6 = local_78;
        }
      }
      if (((char)local_70 != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar3 = FUN_00d90650();
    }
    if (g_027c0ae0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027c0ae0;
    if (cVar2 != '\0') {
      if (g_027c0ae0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar1;
      local_f0 = '\x01';
      FUN_00d8ede0();
      local_88 = local_48;
      local_80 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = '\x01';
      FUN_00d98db0(&local_88,&local_f8,0);
      puVar7 = *(void**)(this_ptr + 0x20);
      puVar6 = puVar7;
      if (puVar7 != local_78) {
        if ((char)local_70 == '\0') {
          if (local_78 == (void*)0x0) {
            puVar6 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar7 = *(void**)(this_ptr + 0x20);
            puVar6 = local_78;
          }
        }
        else {
          local_70 = local_70 & 0xffffff00;
          puVar6 = local_78;
        }
        *(void**)(this_ptr + 0x20) = puVar6;
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
          puVar6 = local_78;
        }
      }
      if (((char)local_70 != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

