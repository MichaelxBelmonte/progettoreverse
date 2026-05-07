// Function: FUN_011efc00
// Address: 011efc00
// Size: 753 bytes
// Class: MUThirdsCircle


/* WARNING: Removing unreachable block (ram,0x011efc92) */
/* WARNING: Removing unreachable block (ram,0x011efc9e) */
/* WARNING: Removing unreachable block (ram,0x011efc83) */
/* WARNING: Removing unreachable block (ram,0x011efc7a) */
/* WARNING: Removing unreachable block (ram,0x011efe66) */
/* WARNING: Removing unreachable block (ram,0x011efe6f) */

undefined8 * FUN_011efc00(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong **pplVar7;
  longlong local_a0;
  char local_98;
  longlong *local_40;
  char local_38;
  
  plVar6 = *(longlong **)(unaff_RSI + 0x98);
  if (plVar6 == (longlong *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
    FUN_00d50b00();
  }
  FUN_01e51a60();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = DAT_026d83d0;
  if (DAT_026d83d0 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01e57490();
  plVar1 = local_40;
  FUN_00081d60();
  if (plVar1 == (longlong *)0x0) {
    pplVar7 = &DAT_02802688;
    plVar1 = DAT_02802688;
    cVar4 = DAT_02802690;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = &DAT_02802688;
    }
    plVar1 = *pplVar7;
    cVar4 = *(char *)(pplVar7 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_01d2a770();
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


