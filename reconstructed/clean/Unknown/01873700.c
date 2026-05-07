// Function: FUN_01873700
// Address: 01873700
// Size: 978 bytes
// Class: Unknown

void* FUN_01873700(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  void*puVar6;
  void*puVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  FUN_00d8ede0();
  local_48 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (*(int *)(*arg1 + 0xc) < 1) {
    bVar3 = false;
    puVar7 = (void*)0x0;
  }
  else {
    lVar8 = 0;
    puVar7 = (void*)0x0;
    bVar3 = false;
    do {
      FUN_00d8ede0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar1 = *(int64_t **)(*(int64_t *)(*arg1 + 0x10) + lVar8 * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((*(int *)(plVar1[4] + 0xc) != 0) &&
         (lVar2 = *(int64_t *)(**(int64_t **)(plVar1[4] + 0x10) + 0x10), lVar2 != 0)) {
        FUN_00d50b00();
        FUN_018dd490();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(*local_40 + 0x50))();
      if (cVar5 == '\0') {
        if (puVar7 != (void*)0x0) {
          if (bVar3) {
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        if (local_48 != local_40) {
          FUN_00d50b00();
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_48 = local_40;
        }
LAB_01873959:
        FUN_00d8ede0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar5 = (**(code **)(*local_40 + 0x50))();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &g_02572358;
          (*pcVar4)();
          FUN_00d21140();
          bVar3 = true;
          goto LAB_01873a3d;
        }
        puVar7 = (void*)0x0;
      }
      else {
        if (puVar7 == (void*)0x0) goto LAB_01873959;
LAB_01873a3d:
        local_38 = '\0';
        FUN_00d21140();
        local_40 = plVar1;
      }
      FUN_00d50b20();
      FUN_00d50b20();
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(*arg1 + 0xc));
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar3) && (puVar7 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

