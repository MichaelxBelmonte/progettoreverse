// Function: FUN_01d900f0
// Address: 01d900f0
// Size: 635 bytes
// Class: GNGraphicsContext
// String references:
//   "GNGraphicsContext"

uint64_t FUN_01d900f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_00c80cd0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_01d90294;
  }
  pplVar5 = &local_40;
  FUN_00c811e0();
  plVar1 = local_40;
  if ((g_026ed200 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f6aa8 = FUN_00d4fe50();
    g_027f6a90 = "GNGraphicsContext";
    g_027f6a98 = 0x48;
    g_027f6aa0 = FUN_001cc1f0;
    g_027f6ab0 = 0;
    ram_00000000027f6ab8 = 0;
    g_027f6ac0 = 0;
    g_027f6b38 = 0;
    ram_00000000027f6b40 = 0;
    g_027f6b48 = 0;
    g_027f6b4a = 1;
    g_027f6ac8 = 0;
    ram_00000000027f6ad0 = 0;
    g_027f6ad8 = 0;
    ram_00000000027f6ae0 = 0;
    g_027f6ae8 = 0;
    ram_00000000027f6af0 = 0;
    g_027f6af8 = 0;
    ram_00000000027f6b00 = 0;
    g_027f6b08 = 0;
    ram_00000000027f6b10 = 0;
    g_027f6b18 = 0;
    ram_00000000027f6b20 = 0;
    g_027f6b28 = 0;
    ram_00000000027f6b30 = 0;
    g_027f6b53 = 0;
    g_027f6b4b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01d9018d:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d9018d;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x430))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)this_ptr[0x27];
    if (plVar2 != plVar1) {
      FUN_00d50b00();
      this_ptr[0x27] = (int64_t)plVar1;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar6 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
    (**(code **)(*this_ptr + 0x620))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d90294:
  return uVar6 & 0xffffffff;
}

