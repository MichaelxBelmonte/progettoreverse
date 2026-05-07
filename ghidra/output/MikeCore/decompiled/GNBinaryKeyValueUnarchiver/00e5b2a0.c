// Function: FUN_00e5b2a0
// Address: 00e5b2a0
// Size: 513 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s."
//   "offset < _dataLength"
//   "offset != GNNotFound"
//   "offset < _excessDataLength"


longlong FUN_00e5b2a0(undefined8 param_1)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  undefined *local_40;
  ulonglong local_38;
  char *local_30;
  
  local_40 = *(undefined **)(unaff_RDI + 0x10);
  local_38 = local_38 & 0xffffffffffffff00;
  iVar3 = FUN_00e5d7f0();
  if (((char)local_38 != '\0') && (local_40 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027815a8;
  if (iVar3 == -1) {
    puVar1 = *(undefined **)(unaff_RDI + 0x18);
    if (puVar1 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    local_38 = CONCAT71(local_38._1_7_,1);
    local_40 = puVar1;
    iVar3 = FUN_00e5d7f0();
    if (((char)local_38 != '\0') && (local_40 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027815a8;
    if (iVar3 == -1) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7f00000002;
      local_40 = &DAT_0258e798;
      local_30 = "offset != GNNotFound";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    lVar2 = DAT_027815a8;
    if (*(int *)(unaff_RDI + 0x24) <= iVar3) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x8000000002;
      local_40 = &DAT_0258e760;
      local_30 = "offset < _excessDataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)(unaff_RDI + 0x30);
  }
  else {
    if (*(int *)(unaff_RDI + 0x20) <= iVar3) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7b00000002;
      local_40 = &DAT_0258e798;
      local_30 = "offset < _dataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)(unaff_RDI + 0x28);
  }
  return (longlong)iVar3 + *plVar4;
}


