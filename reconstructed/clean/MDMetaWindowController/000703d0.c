// Function: FUN_000703d0
// Address: 000703d0
// Size: 953 bytes
// Class: MDMetaWindowController
// String references:
//   "%i/%i T"
//   "%i/%i"

void FUN_000703d0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  void*puVar7;
  void*puVar8;
  void*local_68;
  char local_60;
  void*local_58;
  uint64_t local_50;
  uint32_t local_48;
  void*local_40;
  uint32_t local_34;
  
  if (*(int64_t **)(this_ptr + 0x70) == (int64_t *)0x0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x968))();
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x998))();
    return;
  }
  uVar6 = FUN_00d30620();
  puVar8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == (void*)0x0) goto LAB_000704c9;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_00070486:
    lVar3 = g_026d7d20;
    if (g_026d7d20 != 0) {
      FUN_00d50b00();
    }
    FUN_00d30f20();
    puVar7 = local_58;
    if (local_58 == (void*)0x0) {
      puVar7 = (void*)0x0;
      bVar1 = false;
    }
    else if ((char)local_50 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_50 & 0xffffffffffffff00;
      bVar1 = true;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_34 = 0;
    if (puVar7 == (void*)0x0) goto LAB_00070517;
  }
  else {
    if (local_58 != (void*)0x0) goto LAB_00070486;
LAB_000704c9:
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    bVar1 = false;
LAB_00070517:
    puVar7 = g_026d7d28;
    if (g_026d7d28 == (void*)0x0) {
      puVar7 = (void*)0x0;
    }
    else {
      FUN_00d50b00();
      bVar1 = true;
    }
  }
  cVar4 = FUN_00108e10();
  bVar2 = bVar1;
  if (cVar4 == '\0') goto LAB_0007071c;
  cVar4 = FUN_001080b0();
  local_40 = puVar8;
  if (cVar4 == '\0') {
    uVar5 = FUN_00108080();
    local_48 = FUN_00108090();
    local_50 = CONCAT44(uVar5,2);
    local_58 = &g_024c3df0;
    FUN_00d8cb40(&g_024c3df0,&local_58);
    if (local_68 == puVar7) {
      puVar8 = puVar7;
      if ((!bVar1) && (local_68 != (void*)0x0)) {
        bVar2 = true;
        if (local_60 != '\0') goto LAB_0007071c;
        FUN_00d50b00();
        bVar2 = true;
      }
    }
    else {
      if (local_60 != '\0') {
        bVar2 = true;
        if ((bVar1) && (puVar7 != (void*)0x0)) {
          FUN_00d50b20();
          puVar7 = local_68;
          goto LAB_0007071c;
        }
        goto LAB_00070639;
      }
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      puVar8 = local_68;
      if ((bVar1) && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    puVar7 = puVar8;
    if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = FUN_00108090();
    local_50 = 0x100000002;
    local_58 = &g_024c3df0;
    FUN_00d8cb40(&g_024c3df0,&local_58);
    if (local_68 == puVar7) {
      puVar8 = puVar7;
      if ((!bVar1) && (puVar7 != (void*)0x0)) {
        bVar2 = true;
        if (local_60 != '\0') goto LAB_0007071c;
        FUN_00d50b00();
        bVar2 = true;
      }
    }
    else {
      if (local_60 != '\0') {
        bVar2 = true;
        if ((bVar1) && (puVar7 != (void*)0x0)) {
          FUN_00d50b20();
          puVar7 = local_68;
          goto LAB_0007071c;
        }
LAB_00070639:
        bVar2 = true;
        puVar7 = local_68;
        goto LAB_0007071c;
      }
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      puVar8 = local_68;
      if ((bVar1) && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    puVar7 = puVar8;
    if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0007071c:
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x968))();
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x998))();
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar7 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

