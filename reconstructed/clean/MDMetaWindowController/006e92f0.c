// Function: FUN_006e92f0
// Address: 006e92f0
// Size: 758 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_006e92f0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_01f2fbe0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_50 = -1;
    do {
      local_50 = local_50 + 1;
      if (*(int *)(local_68 + 0xc) <= local_50) goto LAB_006e957e;
      FUN_01e5c650();
      plVar1 = local_40;
      if ((g_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_40;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    } while (plVar1 == (int64_t *)0x0);
    FUN_006e87c0();
    FUN_00d50b20();
LAB_006e957e:
    FUN_006e9880();
    FUN_00d50b20();
  }
  FUN_00451120();
  FUN_00451100();
  FUN_00451120();
  FUN_00451100();
  FUN_0044dc30();
  FUN_0044dc30();
  FUN_006e8b70();
  return;
}

