// Function: FUN_01ad9f80
// Address: 01ad9f80
// Size: 514 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x01ada088) */
/* WARNING: Removing unreachable block (ram,0x01ada091) */
/* WARNING: Removing unreachable block (ram,0x01ada165) */
/* WARNING: Removing unreachable block (ram,0x01ada16e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad9f80(float param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *unaff_RDI;
  float local_98;
  longlong local_40;
  char local_38;
  
  cVar1 = FUN_01ad9100();
  local_98 = param_3;
  if (cVar1 == '\0') {
    FUN_01cfc9f0(DAT_02391090 + param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_3 = param_3 + _DAT_023b1620;
    (**(code **)(*(longlong *)*unaff_RDI + 0x3f8))(param_3,param_4);
    local_98 = param_3 + _DAT_0241c730;
  }
  FUN_01cfc9f0(param_1 + _DAT_0241c6c4,param_2);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x3f8))(local_98,param_4);
  return;
}


