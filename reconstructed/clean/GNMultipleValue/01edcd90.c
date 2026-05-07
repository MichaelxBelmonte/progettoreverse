// Function: FUN_01edcd90
// Address: 01edcd90
// Size: 1199 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNImage"

void FUN_01edcd90(uint32_t param_1)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  (**(code **)(*this_ptr + 0x4c8))(param_1,&local_80);
  plVar5 = local_40;
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_50 = (int64_t *)0x0;
      local_48 = '\x01';
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_48 = '\x01';
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = '\x01';
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((g_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_01edce32:
    plVar5 = g_02802688;
    plVar6 = g_02802688;
    cVar3 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01edce9c;
LAB_01edce8d:
    plVar6 = (int64_t *)0x0;
    if (plVar5 == (int64_t *)0x0) goto LAB_01edce9c;
    FUN_00d50b00();
LAB_01edcea5:
    FUN_00e987e0();
    plVar6 = local_40;
    cVar2 = local_48;
    plVar5 = local_50;
    if (local_50 == local_40) {
      if ((local_48 == '\0') && (local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_01edcef1;
        FUN_00d50b00();
        goto LAB_01edcf37;
      }
LAB_01edcf3b:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar6;
        if ((cVar2 != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01edcf37:
        local_48 = '\x01';
        goto LAB_01edcf3b;
      }
      local_50 = local_40;
      if ((local_48 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01edcef1:
      local_48 = '\x01';
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01edce32;
    plVar5 = local_50;
    plVar6 = local_50;
    cVar3 = local_48;
    if (local_48 != '\0') goto LAB_01edce8d;
LAB_01edce9c:
    if (plVar6 != (int64_t *)0x0) goto LAB_01edcea5;
  }
  FUN_01ccad60();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_50;
  if ((g_026ed470 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f7318 = FUN_00d4fe50();
    g_027f7300 = "GNImage";
    g_027f7308 = 0x68;
    g_027f7310 = FUN_001cdcc0;
    g_027f7320 = 0;
    ram_00000000027f7328 = 0;
    g_027f7330 = 0;
    ram_00000000027f7338 = 0;
    g_027f7340 = 0;
    ram_00000000027f7348 = 0;
    g_027f7350 = 0;
    ram_00000000027f7358 = 0;
    g_027f7360 = 0;
    ram_00000000027f7368 = 0;
    g_027f7370 = 0;
    ram_00000000027f7378 = 0;
    g_027f7380 = 0;
    ram_00000000027f7388 = 0;
    g_027f7390 = 0;
    ram_00000000027f7398 = 0;
    g_027f73a0 = 0;
    ram_00000000027f73a8 = 0;
    g_027f73b0 = 0;
    ram_00000000027f73b8 = 0;
    g_027f73c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01edcfca:
    plVar6 = g_02802688;
    cVar3 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01edcffe;
LAB_01edcfef:
    if (plVar6 == (int64_t *)0x0) goto LAB_01edcffe;
    FUN_00d50b00();
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01edcfca;
    plVar6 = local_50;
    cVar3 = local_48;
    if (local_48 != '\0') goto LAB_01edcfef;
LAB_01edcffe:
    if (plVar6 == (int64_t *)0x0) {
      local_68 = '\0';
      local_70 = 0;
      (**(code **)(*plVar5 + 0x958))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01edd08e;
    }
  }
  (**(code **)(*plVar6 + 0x148))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*plVar5 + 0x958))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
LAB_01edd08e:
  FUN_00d50b20();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

