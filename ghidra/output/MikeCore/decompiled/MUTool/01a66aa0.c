// Function: FUN_01a66aa0
// Address: 01a66aa0
// Size: 592 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a66c64) */
/* WARNING: Removing unreachable block (ram,0x01a66c6d) */
/* WARNING: Removing unreachable block (ram,0x01a66cd3) */
/* WARNING: Removing unreachable block (ram,0x01a66cdc) */

void FUN_01a66aa0(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x1f8) == 0) || (*unaff_RSI != *(longlong *)(unaff_RDI + 0x1f8))) {
    FUN_01788770();
    FUN_017879e0();
    lVar1 = *unaff_RSI;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e2670;
    if (lVar1 == local_50) {
      if (DAT_027e2670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      uVar4 = FUN_01e1ea80(DAT_02391030,&stack0xffffffffffffffa0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        uVar4 = FUN_00d50b20();
      }
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_01a66e80();
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar4 = FUN_01b6d800();
    if (local_40 != 0) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_01b68d40(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


