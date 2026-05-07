// Function: FUN_01ca6bb0
// Address: 01ca6bb0
// Size: 653 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01ca6df0) */
/* WARNING: Removing unreachable block (ram,0x01ca6df9) */
/* WARNING: Removing unreachable block (ram,0x01ca6c11) */
/* WARNING: Removing unreachable block (ram,0x01ca6c1d) */
/* WARNING: Removing unreachable block (ram,0x01ca6e04) */
/* WARNING: Removing unreachable block (ram,0x01ca6e0d) */
/* WARNING: Removing unreachable block (ram,0x01ca6cc1) */
/* WARNING: Removing unreachable block (ram,0x01ca6cce) */

void FUN_01ca6bb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  char local_30;
  
  FUN_01ca63c0();
  FUN_000175c0();
  if ((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fceb8;
  if (local_38 == (undefined8 *)0x0) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_026fceb8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026fcec0;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_026fcec0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e92b0;
      if (cVar3 == '\0') {
        plVar1 = (longlong *)*unaff_RSI;
        if (DAT_027e92b0 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        local_38 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        if (cVar3 == '\0') {
          puVar4 = &DAT_026b65c8;
        }
        else {
          puVar4 = &DAT_026c30d8;
        }
      }
      else {
        local_38 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar4 = &DAT_026b6238;
      }
    }
    else {
      local_38 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar4 = &DAT_026b6958;
    }
    *local_38 = puVar4 + 0x10;
    (**(code **)(puVar4 + 0x28))();
    FUN_01ca63c0();
    FUN_00ca0840();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


