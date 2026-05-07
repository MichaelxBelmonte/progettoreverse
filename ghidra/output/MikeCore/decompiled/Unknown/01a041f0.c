// Function: FUN_01a041f0
// Address: 01a041f0
// Size: 573 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a042b7) */
/* WARNING: Removing unreachable block (ram,0x01a042bc) */

void FUN_01a041f0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RSI + 0x630))();
  if (local_38 == (longlong *)0x0) {
    bVar6 = true;
  }
  else {
    (**(code **)(*unaff_RSI + 0x630))();
    bVar6 = *(int *)((longlong)local_48 + 0xc) != 1;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) goto LAB_01a0437a;
  (**(code **)(*unaff_RSI + 0x630))();
  FUN_00d23310();
  plVar1 = local_38;
  local_40 = local_30 != '\0';
  local_48 = local_38;
  if ((bool)local_40) {
    local_30 = '\0';
  }
  FUN_0006e1c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01a042ec:
    pplVar3 = &DAT_02802688;
    plVar5 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01a042fc;
LAB_01a0430f:
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01a042ec;
    pplVar3 = &local_48;
    plVar5 = local_48;
    if (local_40 == '\0') goto LAB_01a0430f;
LAB_01a042fc:
    *(undefined1 *)(pplVar3 + 1) = 0;
  }
  if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_01a0437a:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a043c9;
    }
  }
  else if (local_38 != (longlong *)0x0) {
LAB_01a043c9:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    FUN_00d50b20();
    goto LAB_01a04415;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01a04415:
  FUN_00d50b20();
  return;
}


