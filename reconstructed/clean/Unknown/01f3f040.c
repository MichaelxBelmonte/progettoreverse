// Function: FUN_01f3f040
// Address: 01f3f040
// Size: 1245 bytes
// Class: Unknown

void FUN_01f3f040(void)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  bool bVar10;
  uint32_t uVar11;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_48;
  char local_40;
  
  FUN_01f32060();
  plVar2 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_01f3f0aa;
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) {
LAB_01f3f0aa:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    plVar9 = local_48;
    goto LAB_01f3f4f1;
  }
  (**(code **)(*plVar2 + 0x3f0))();
  plVar9 = local_48;
  plVar4 = plVar2;
  if (plVar2 == local_48) {
joined_r0x01f3f0c5:
    plVar9 = plVar4;
    if ((local_40 != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar4 = plVar9;
      plVar2 = local_48;
      goto joined_r0x01f3f0c5;
    }
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) goto LAB_01f3f1df;
  (**(code **)(*plVar9 + 0x3f0))();
  if (local_48 == plVar9) {
LAB_01f3f152:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01f3f152;
    }
    FUN_00d50b20();
  }
  lVar3 = g_02800178;
  if (plVar9 == (int64_t *)0x0) {
LAB_01f3f1df:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (g_02800178 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar3;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  (**(code **)(*plVar9 + 0x4f0))(&local_b0,&local_c0);
  if (local_48 == plVar9) {
LAB_01f3f20f:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01f3f20f;
    }
    FUN_00d50b20();
    local_40 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (g_028ba9e8 < 0) {
    if (plVar9 == (int64_t *)0x0) {
      g_028ba9e8 = 0;
    }
    else {
      FUN_00d50b00();
      g_028ba9e8 = 0;
      uVar11 = (**(code **)(*plVar9 + 0x368))();
      local_a0 = g_02774db0;
      if (g_02774db0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_00d8ef00(uVar11,&local_a0);
      plVar2 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      local_90 = plVar2;
      local_88 = '\0';
      FUN_00cddf30();
      plVar4 = local_48;
      plVar7 = plVar9;
      plVar8 = plVar9;
      if (local_48 == plVar9) {
LAB_01f3f3bd:
        if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar7 = local_48;
          plVar8 = plVar4;
          goto LAB_01f3f3bd;
        }
        FUN_00d50b20();
        local_40 = '\0';
        plVar8 = local_48;
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        cVar5 = (**(code **)(*plVar8 + 0x398))();
        if (cVar5 != '\0') {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_0256df98;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(void*)((int64_t)puVar6 + 0x29) = 0;
          *(void*)((int64_t)puVar6 + 0x31) = 0;
          (*g_0256dfb0)();
          if (g_028ba818 == puVar6) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            bVar10 = g_028ba818 != (void*)0x0;
            g_028ba818 = puVar6;
            if (bVar10) {
              FUN_00d50b20();
            }
          }
          if (g_028ba820 == '\0') {
            g_028ba820 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar1) {
            FUN_00d50b20();
          }
          local_78 = '\0';
          local_80 = plVar8;
          FUN_00cd0970();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          g_028ba9e8 = 1;
        }
        FUN_00d50b20();
      }
    }
  }
  if ((g_028ba9e8 < 1) || (g_028ba818 == (void*)0x0)) {
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  FUN_00cd0de0();
LAB_01f3f4f1:
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

