// Function: FUN_0027ee00
// Address: 0027ee00
// Size: 516 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x0027ee45) */
/* WARNING: Removing unreachable block (ram,0x0027ee51) */

void FUN_0027ee00(void)

{
  char cVar1;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_30;
  char local_28;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x130) + 0x398))();
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = DAT_026fb7d8;
    if (DAT_026fb7d8 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d41430(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_70 = DAT_026fb7e0;
    if (DAT_026fb7e0 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_60 = 0;
    local_58 = '\0';
    FUN_00d41430(&local_60,&local_70);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0027ea40();
  }
  return;
}


