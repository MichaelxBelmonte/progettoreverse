// Function: FUN_01b5a510
// Address: 01b5a510
// Size: 551 bytes
// Class: MUColorCorrectionCtrl


/* WARNING: Removing unreachable block (ram,0x01b5a5cc) */
/* WARNING: Removing unreachable block (ram,0x01b5a5d8) */
/* WARNING: Removing unreachable block (ram,0x01b5a552) */
/* WARNING: Removing unreachable block (ram,0x01b5a55b) */
/* WARNING: Removing unreachable block (ram,0x01b5a58e) */
/* WARNING: Removing unreachable block (ram,0x01b5a597) */

undefined8 FUN_01b5a510(undefined8 param_1,int param_2)

{
  longlong lVar1;
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
    if (*(int *)(local_40 + 0x18) + 3U < 7) {
      FUN_01b57030();
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
      FUN_01b57030();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = DAT_027e4900;
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
    if (lVar1 != 0) {
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
  return 1;
}


