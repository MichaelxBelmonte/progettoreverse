// Function: FUN_006faff0
// Address: 006faff0
// Size: 599 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x006fb0ee) */
/* WARNING: Removing unreachable block (ram,0x006fb0f7) */
/* WARNING: Removing unreachable block (ram,0x006fb1bb) */
/* WARNING: Removing unreachable block (ram,0x006fb1c4) */
/* WARNING: Removing unreachable block (ram,0x006fb1fe) */
/* WARNING: Removing unreachable block (ram,0x006fb20b) */
/* WARNING: Removing unreachable block (ram,0x006fb230) */
/* WARNING: Removing unreachable block (ram,0x006fb23d) */

ulonglong FUN_006faff0(undefined8 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar3;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (param_2 != 0) {
    (**(code **)(*unaff_RDI + 0x5d8))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*unaff_RDI + 0x5d8))();
      cVar1 = FUN_0063f180();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        (**(code **)(*unaff_RDI + 0x5d8))();
        FUN_006472c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x5d8))();
        FUN_0063f230();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_0023af30(param_1,0);
          FUN_0023c090();
          uVar2 = FUN_00247d60(param_1,1);
          uVar3 = (ulonglong)uVar2;
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x5d8))();
        FUN_0063f230();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          uVar2 = FUN_00247d60(param_1,1);
          uVar3 = (ulonglong)uVar2;
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar3 & 0xffffffff;
}


