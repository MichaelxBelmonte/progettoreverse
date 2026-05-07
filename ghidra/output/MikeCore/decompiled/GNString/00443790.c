// Function: FUN_00443790
// Address: 00443790
// Size: 1184 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00443baa) */
/* WARNING: Removing unreachable block (ram,0x00443bb3) */
/* WARNING: Removing unreachable block (ram,0x00443b05) */
/* WARNING: Removing unreachable block (ram,0x00443b12) */
/* WARNING: Removing unreachable block (ram,0x0044390a) */
/* WARNING: Removing unreachable block (ram,0x00443916) */
/* WARNING: Removing unreachable block (ram,0x00443aac) */
/* WARNING: Removing unreachable block (ram,0x00443ab5) */
/* WARNING: Removing unreachable block (ram,0x00443b7b) */
/* WARNING: Removing unreachable block (ram,0x00443b87) */
/* WARNING: Removing unreachable block (ram,0x00443bdd) */
/* WARNING: Removing unreachable block (ram,0x00443be6) */
/* WARNING: Removing unreachable block (ram,0x0044394a) */
/* WARNING: Removing unreachable block (ram,0x00443953) */
/* WARNING: Removing unreachable block (ram,0x0044380c) */
/* WARNING: Removing unreachable block (ram,0x00443815) */
/* WARNING: Removing unreachable block (ram,0x00443c35) */
/* WARNING: Removing unreachable block (ram,0x00443c42) */
/* WARNING: Removing unreachable block (ram,0x0044398f) */
/* WARNING: Removing unreachable block (ram,0x00443998) */
/* WARNING: Removing unreachable block (ram,0x004439d7) */
/* WARNING: Removing unreachable block (ram,0x00443a00) */
/* WARNING: Removing unreachable block (ram,0x004439d9) */
/* WARNING: Removing unreachable block (ram,0x00443a02) */

void FUN_00443790(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  if ((((*(longlong *)(unaff_RDI + 0x20) == 0) && (*(longlong *)(unaff_RDI + 0x28) != 0)) &&
      (iVar3 = FUN_00228b30(), iVar3 == 0)) && (*(longlong *)(unaff_RDI + 0x10) != 0)) {
    FUN_006f3f00();
    if (local_50 == '\0') {
      if (local_58 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_006f4810();
    FUN_002eacb0();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_0078c610();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xde8))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xe10))();
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_0025e9a0();
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_58 = (longlong *)0x0;
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)plVar1 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(*(longlong *)((longlong)plVar1 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)((longlong)plVar1 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      cVar2 = FUN_00d23d70();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00d21140();
      }
    }
    FUN_001159b0();
    if (*(int *)((longlong)plVar1 + 0xc) != *(int *)((longlong)plVar1 + 0xc)) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xdc8))(plVar1,1);
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_58 + 0x450))();
    if (cVar2 != '\0') {
      FUN_006f4810();
      (**(code **)(*local_58 + 0x400))();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


