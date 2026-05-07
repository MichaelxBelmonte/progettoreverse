// Function: FUN_018c64d0
// Address: 018c64d0
// Size: 554 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x018c660e) */
/* WARNING: Removing unreachable block (ram,0x018c6617) */
/* WARNING: Removing unreachable block (ram,0x018c65a4) */
/* WARNING: Removing unreachable block (ram,0x018c65ad) */
/* WARNING: Removing unreachable block (ram,0x018c6622) */
/* WARNING: Removing unreachable block (ram,0x018c662b) */

void FUN_018c64d0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018bab80();
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x368))();
    FUN_018c6870();
    if (local_40[0] == '\0') {
      if (((local_48 != (undefined8 *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (local_48 == (undefined8 *)0x0) {
      local_48 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_48 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_018c6920();
    }
    lVar1 = *unaff_RSI;
    local_40[0] = '\0';
    cVar2 = FUN_00d24090();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      lVar1 = *unaff_RSI;
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x378))();
    if (local_48 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


