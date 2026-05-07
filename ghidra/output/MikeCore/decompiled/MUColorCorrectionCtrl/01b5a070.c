// Function: FUN_01b5a070
// Address: 01b5a070
// Size: 625 bytes
// Class: MUColorCorrectionCtrl


/* WARNING: Removing unreachable block (ram,0x01b5a2c7) */
/* WARNING: Removing unreachable block (ram,0x01b5a2d7) */
/* WARNING: Removing unreachable block (ram,0x01b5a0b2) */
/* WARNING: Removing unreachable block (ram,0x01b5a0bb) */
/* WARNING: Removing unreachable block (ram,0x01b5a0ee) */
/* WARNING: Removing unreachable block (ram,0x01b5a0f7) */

undefined8 FUN_01b5a070(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01b57f70();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01dd4960();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_40 + 0x18) < 4) {
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01b58c00();
      local_60 = *(longlong *)
                  (*(longlong *)(local_40 + 0x10) + (longlong)**(int **)(local_40 + 0x10) * 8);
      local_58 = 0;
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_01b58c80();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01b58c00();
      iVar1 = *(int *)(local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 == 0) {
        FUN_01b57030();
      }
      FUN_00d403d0();
      lVar2 = DAT_027e4900;
      if (DAT_027e4900 != 0) {
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
      (**(code **)(*unaff_RDI + 0x600))();
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return 1;
}


