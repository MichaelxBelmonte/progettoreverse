// Function: FUN_00b6a3c0
// Address: 00b6a3c0
// Size: 524 bytes
// Class: Unknown


void FUN_00b6a3c0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  if (param_2 == 0) {
    FUN_00e31690();
    if (*(int *)(*(longlong *)(unaff_RDI[0x27] + 0x10) + (unaff_RSI & 0xffffffff) * 4) == 0) {
      FUN_00d403d0();
      local_70 = DAT_027633a8;
      if (DAT_027633a8 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      FUN_00d50b00();
      local_60 = 0;
      local_58 = '\0';
      FUN_00d40470(&local_60,&stack0xffffffffffffffc0,1,3);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00e31650();
    if (*(int *)(*(longlong *)(unaff_RDI[0x27] + 0x10) + (unaff_RSI & 0xffffffff) * 4) == 1) {
      *(char *)(unaff_RDI + 0x2c) = (char)unaff_RSI;
      FUN_00d403d0();
      lVar1 = DAT_027633a0;
      if (DAT_027633a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_80 = 0;
      local_78 = '\0';
      FUN_00d40470(&local_80,&stack0xffffffffffffffb0,1,3);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


