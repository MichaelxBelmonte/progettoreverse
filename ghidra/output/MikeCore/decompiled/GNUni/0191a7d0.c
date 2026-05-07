// Function: FUN_0191a7d0
// Address: 0191a7d0
// Size: 1037 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0191a81a) */
/* WARNING: Removing unreachable block (ram,0x0191a826) */
/* WARNING: Removing unreachable block (ram,0x0191a864) */
/* WARNING: Removing unreachable block (ram,0x0191a870) */

void FUN_0191a7d0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_58;
  char local_50;
  int local_44;
  longlong *local_40;
  char local_38;
  
  FUN_0177f010();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  FUN_0177eb20();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  FUN_01d6f8d0();
  if (local_c0 != 0) {
    if (*(int *)(local_c0 + 0xc) < 1) {
      local_44 = -1;
    }
    else {
      local_44 = -1;
      iVar4 = 0;
      do {
        FUN_017800f0();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d6f990();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d70010();
        plVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d66da0();
        FUN_0177efe0();
        plVar1 = DAT_027092b8;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
            plVar1 = DAT_027092b8;
          }
        }
        else {
          local_d8 = '\0';
        }
        DAT_027092b8 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(param_1,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_e0 != 0) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_0177efe0();
        plVar1 = local_40;
        FUN_0177efe0();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_44 = FUN_01d6fde0();
          local_44 = local_44 + -1;
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_c0 + 0xc));
    }
    FUN_01781450();
    if (local_44 != -1) {
      FUN_01d6ed40();
    }
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  return;
}


