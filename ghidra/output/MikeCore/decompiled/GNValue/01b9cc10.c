// Function: FUN_01b9cc10
// Address: 01b9cc10
// Size: 555 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b9cc44) */
/* WARNING: Removing unreachable block (ram,0x01b9cc4d) */

void FUN_01b9cc10(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  
  FUN_01b7c310();
  if (*(char *)(unaff_RDI + 0x213) == '\0') {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0013de80();
  if (plVar1 == (longlong *)0x0) {
LAB_01b9cc8d:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b9cc8d;
  }
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 == '\0') || (*unaff_RSI == 0)) {
    if (*unaff_RSI == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01b9c7d0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    if (*(longlong *)(unaff_RDI + 0x1f8) != 0) goto LAB_01b9cd06;
LAB_01b9cd96:
    local_58 = '\0';
    local_60 = 0;
  }
  else {
    local_68 = '\0';
    if (*(longlong *)(unaff_RDI + 0x1f8) == 0) goto LAB_01b9cd96;
LAB_01b9cd06:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510b20(0,param_2,0,0);
    if (local_58 != '\0') {
      local_40 = local_60;
      local_58 = '\0';
      goto LAB_01b9cdbf;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      local_40 = local_60;
      goto LAB_01b9cdbf;
    }
  }
  local_40 = 0;
LAB_01b9cdbf:
  FUN_01b82620();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}


