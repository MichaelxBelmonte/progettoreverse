// Function: FUN_00c243f0
// Address: 00c243f0
// Size: 672 bytes
// Class: GNOverloudConvolverController

void FUN_00c243f0(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t **pplVar3;
  int64_t lVar4;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  
  FUN_01e53f10();
  FUN_01e53c20();
  FUN_01e42030();
  (**(code **)(*local_a0 + 0x640))();
  (**(code **)(*local_b0 + 0x378))();
  FUN_01d44d80(g_023b36b0);
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  (**(code **)(*local_48 + 0x4a0))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    local_38 = local_70;
    if (0 < *(int *)(local_70 + 0xc)) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + lVar4 * 8);
        local_48 = plVar1;
        FUN_001f8a30();
        pplVar3 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar3 = &local_48;
          if (cVar2 == '\0') {
            pplVar3 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x9d8))();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_70 + 0xc));
    }
    FUN_00c4e7a0();
    FUN_00d50b20();
    local_70 = local_38;
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}

