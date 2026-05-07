// Function: FUN_01313720
// Address: 01313720
// Size: 641 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01313751) */
/* WARNING: Removing unreachable block (ram,0x0131375a) */

void FUN_01313720(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar5;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  FUN_00d50f50();
  if (*(longlong *)(unaff_RDI + 0x40) == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505b90();
  plVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0002c940();
  if (plVar1 == (longlong *)0x0) {
LAB_013137f9:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_013137f9;
  }
  plVar1 = (longlong *)*unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = DAT_027bf0f8;
  if (DAT_027bf0f8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') goto LAB_01313984;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = DAT_027bf0f8;
  if (DAT_027bf0f8 != 0) {
    FUN_00d50b00();
  }
  pplVar5 = &local_58;
  (**(code **)(*plVar1 + 0x578))();
  plVar1 = local_58;
  FUN_0112f6c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01313902:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01313902;
  }
  local_40 = 0;
  local_48 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
  }
  else {
    local_40 = '\x01';
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  FUN_01505b20();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_01313984:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}


