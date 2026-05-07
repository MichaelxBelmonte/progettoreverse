// Function: FUN_01ad9840
// Address: 01ad9840
// Size: 1076 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x01ad99f8) */
/* WARNING: Removing unreachable block (ram,0x01ad9a04) */
/* WARNING: Removing unreachable block (ram,0x01ad9bb2) */
/* WARNING: Removing unreachable block (ram,0x01ad9bc2) */
/* WARNING: Removing unreachable block (ram,0x01ad9add) */
/* WARNING: Removing unreachable block (ram,0x01ad9ae9) */
/* WARNING: Removing unreachable block (ram,0x01ad98d3) */
/* WARNING: Removing unreachable block (ram,0x01ad98df) */
/* WARNING: Removing unreachable block (ram,0x01ad9895) */
/* WARNING: Removing unreachable block (ram,0x01ad98a1) */
/* WARNING: Removing unreachable block (ram,0x01ad9c3c) */
/* WARNING: Removing unreachable block (ram,0x01ad9c48) */

void FUN_01ad9840(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char in_CL;
  char in_DL;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*unaff_RSI != 0) {
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))();
  }
  if (in_DL != '\0') {
    if (in_CL == '\0') {
      FUN_01cfbee0(param_1,param_1,param_1);
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
      (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
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
        (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390d00);
      }
    }
    else {
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
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
        (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390d00);
      }
      FUN_01cfbee0(param_1,param_1,param_1);
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
      (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
    }
  }
  return;
}


