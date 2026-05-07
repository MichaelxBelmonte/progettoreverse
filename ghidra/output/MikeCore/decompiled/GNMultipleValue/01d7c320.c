// Function: FUN_01d7c320
// Address: 01d7c320
// Size: 523 bytes
// Class: GNMultipleValue


void FUN_01d7c320(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x48] != 0) {
    (**(code **)(*unaff_RDI + 0x3a0))();
    FUN_00d403d0();
    lVar2 = DAT_027f0f20;
    if (DAT_027f0f20 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)unaff_RDI[0x46];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x4d0))();
    FUN_00d50b20();
    (**(code **)(*(longlong *)unaff_RDI[0x48] + 0x4b8))();
    if (unaff_RDI[0x48] != 0) {
      unaff_RDI[0x48] = 0;
      FUN_00d50b20();
    }
    FUN_01e42030();
    FUN_01e42030();
    FUN_01d8b220();
    lVar2 = local_60;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_01d8c820();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d77040();
  }
  return;
}


