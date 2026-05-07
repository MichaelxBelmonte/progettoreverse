// Function: FUN_01d6c2d0
// Address: 01d6c2d0
// Size: 558 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d6c327) */
/* WARNING: Removing unreachable block (ram,0x01d6c330) */

void FUN_01d6c2d0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong local_38;
  char local_30;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  fVar3 = (float)param_2;
  FUN_01cc0ca0(param_1,in_EDX);
  if (in_EDX == 0x10) {
    (**(code **)(*unaff_RDI + 0x560))(param_1,fVar3,param_3,param_4);
    uVar1 = FUN_00d05530();
    (**(code **)(*unaff_RDI + 0x3a0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar2 = (float)((ulonglong)uVar1 >> 0x20) + DAT_02390d00;
    fVar4 = fVar4 * DAT_0239011c;
    fVar3 = fVar3 + (float)uVar1 + DAT_02390d00;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    (**(code **)(*unaff_RDI + 0x398))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar4 = fVar4 + fVar2 + DAT_02390124;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))((float)uVar1,fVar4,fVar3,fVar4);
  }
  return;
}


