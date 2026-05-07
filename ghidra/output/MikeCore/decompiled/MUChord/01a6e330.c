// Function: FUN_01a6e330
// Address: 01a6e330
// Size: 970 bytes
// Class: MUChord


/* WARNING: Removing unreachable block (ram,0x01a6e5ad) */
/* WARNING: Removing unreachable block (ram,0x01a6e3f2) */
/* WARNING: Removing unreachable block (ram,0x01a6e3fb) */
/* WARNING: Removing unreachable block (ram,0x01a6e5b6) */
/* WARNING: Removing unreachable block (ram,0x01a6e387) */
/* WARNING: Removing unreachable block (ram,0x01a6e390) */
/* WARNING: Removing unreachable block (ram,0x01a6e3c6) */
/* WARNING: Removing unreachable block (ram,0x01a6e3cf) */

void FUN_01a6e330(pthread_key_t param_1,ulonglong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = local_40;
  (**(code **)(*unaff_RDI + 0x988))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  if (*(int *)((longlong)local_40 + 0xc) != 0) {
    FUN_01787610();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x370))();
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cc80();
    FUN_017873f0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cd50();
    FUN_01787450();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6ce30();
    FUN_01787510();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xa48))();
    if ((unaff_RSI >> 0x20 == 0) && (param_2 >> 0x20 == 0)) {
      FUN_01a66e80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = '\0';
      local_40 = (longlong *)0x0;
      FUN_0124f820();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a66e80();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*plVar1 + 0x390))(param_2,unaff_RSI,&local_70,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01a6e170(param_2,unaff_RSI);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xa50))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


