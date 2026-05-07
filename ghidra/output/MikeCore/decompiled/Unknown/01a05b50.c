// Function: FUN_01a05b50
// Address: 01a05b50
// Size: 606 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a05c54) */
/* WARNING: Removing unreachable block (ram,0x01a05c5d) */
/* WARNING: Removing unreachable block (ram,0x01a05bef) */
/* WARNING: Removing unreachable block (ram,0x01a05b98) */
/* WARNING: Removing unreachable block (ram,0x01a05ba1) */
/* WARNING: Removing unreachable block (ram,0x01a05bf8) */
/* WARNING: Removing unreachable block (ram,0x01a05d26) */
/* WARNING: Removing unreachable block (ram,0x01a05d2f) */
/* WARNING: Removing unreachable block (ram,0x01a05da7) */
/* WARNING: Removing unreachable block (ram,0x01a05db4) */

void FUN_01a05b50(void)

{
  longlong *plVar1;
  int iVar2;
  float extraout_XMM0_Db;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined1 local_38;
  
  FUN_01d51a40();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar1 + 0x18))();
  FUN_01d526f0();
  FUN_01d4eaa0();
  FUN_01d52740();
  FUN_01d480c0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x400))(0);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01d481c0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  for (iVar2 = 0; FUN_01d526f0(), (float)iVar2 < extraout_XMM0_Db; iVar2 = iVar2 + 1) {
    FUN_01d530d0(iVar2,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


