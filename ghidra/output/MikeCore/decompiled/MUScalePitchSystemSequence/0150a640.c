// Function: FUN_0150a640
// Address: 0150a640
// Size: 602 bytes
// Class: MUScalePitchSystemSequence
// String references:
//   "%p::_pitchSystem"


/* WARNING: Removing unreachable block (ram,0x0150a67b) */
/* WARNING: Removing unreachable block (ram,0x0150a687) */
/* WARNING: Removing unreachable block (ram,0x0150a883) */
/* WARNING: Removing unreachable block (ram,0x0150a890) */

void FUN_0150a640(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_38;
  char local_30;
  
  FUN_00d61ea0();
  lVar2 = DAT_027e3c40;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3c40;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027e3c40 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_78);
    puVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      local_50 = 1;
      local_58 = &DAT_024c5048;
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40(param_1,&local_58);
      if (local_30 == '\0') {
        if (local_38 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_58 = &DAT_024c5048;
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
      local_68 = puVar3;
      local_60 = '\0';
      local_58 = local_38;
      local_50 = local_50 & 0xffffff00;
      FUN_00ca0840(param_1,&local_58);
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}


