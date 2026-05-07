// Function: FUN_01b9dd50
// Address: 01b9dd50
// Size: 540 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b9dea6) */
/* WARNING: Removing unreachable block (ram,0x01b9deb3) */
/* WARNING: Removing unreachable block (ram,0x01b9def8) */
/* WARNING: Removing unreachable block (ram,0x01b9df01) */
/* WARNING: Removing unreachable block (ram,0x01b9df55) */
/* WARNING: Removing unreachable block (ram,0x01b9df62) */
/* WARNING: Removing unreachable block (ram,0x01b9dd9d) */
/* WARNING: Removing unreachable block (ram,0x01b9dda6) */
/* WARNING: Removing unreachable block (ram,0x01b9de31) */
/* WARNING: Removing unreachable block (ram,0x01b9de3a) */

void FUN_01b9dd50(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_38;
  char local_30;
  
  if ((*(int *)(unaff_RDI + 0x1f0) == 0) && (*(char *)(unaff_RDI + 0x1ec) == '\0')) {
    uVar2 = *(undefined4 *)(unaff_RDI + 0x170);
    *(undefined4 *)(unaff_RDI + 0x170) = 0;
    FUN_01d21c00();
    *(undefined4 *)(unaff_RDI + 0x170) = uVar2;
    lVar1 = DAT_027e5238;
  }
  else {
    FUN_01d21c00();
    lVar1 = DAT_027e5238;
  }
  DAT_027e5238 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    if (*(char *)(unaff_RDI + 0x1ec) == '\0') {
      uVar2 = FUN_01e3f820();
      uVar3 = FUN_01d526f0();
      uVar2 = FUN_00d05510(uVar2,param_2,uVar3);
      if (*(int *)(unaff_RDI + 0x1f0) == 0) {
        FUN_01d49110(uVar2,DAT_0239011c);
      }
      else {
        (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
      }
    }
    FUN_00d50b20();
  }
  return;
}


