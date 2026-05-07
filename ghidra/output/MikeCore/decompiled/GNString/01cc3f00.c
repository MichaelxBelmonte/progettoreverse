// Function: FUN_01cc3f00
// Address: 01cc3f00
// Size: 892 bytes
// Class: GNString


void FUN_01cc3f00(undefined8 param_1,char param_2,char param_3)

{
  longlong lVar1;
  int in_ECX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar2;
  float fVar3;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (in_ECX != 0) {
    FUN_01d48b40(DAT_02390d34);
    if (param_3 == '\0') {
      if (param_2 == '\0') {
        (**(code **)(*unaff_RDI + 0x4d0))();
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        (**(code **)(*unaff_RDI + 0x4c8))();
        local_48 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_48 = '\x01';
        local_50 = local_a0;
        FUN_01cfd290(DAT_0239011c,&local_50);
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_b0 != 0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x4d0))();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x4d8))();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    fVar2 = DAT_02390124 + (float)param_1 + DAT_02394298;
    fVar3 = DAT_02394298 + (float)((ulonglong)param_1 >> 0x20) + DAT_0241c3ec;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (fVar2,fVar3,DAT_0241c3ec + fVar2,DAT_0241f374 + fVar3);
  }
  return;
}


