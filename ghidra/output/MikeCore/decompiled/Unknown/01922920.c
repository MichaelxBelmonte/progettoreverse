// Function: FUN_01922920
// Address: 01922920
// Size: 787 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019229b3) */
/* WARNING: Removing unreachable block (ram,0x019229bc) */
/* WARNING: Removing unreachable block (ram,0x01922bad) */
/* WARNING: Removing unreachable block (ram,0x01922bb6) */

void FUN_01922920(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  FUN_01a58dc0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01a58dc0();
    (**(code **)(*local_60 + 0xab8))(param_1);
    if (local_40 == 0) {
      bVar1 = true;
      lVar3 = 0;
    }
    else {
      lVar3 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      FUN_01a58dc0();
      (**(code **)(*local_60 + 0xad8))(param_1);
      if (local_40 == 0) {
        bVar1 = true;
        local_40 = 0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar3 = *(longlong *)(unaff_RSI + 0x48);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_40 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    else {
      FUN_01a58dc0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar4 = FUN_01e437f0(param_1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_019764d0();
      cVar2 = FUN_00d05410(uVar4,uVar5,param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar3 = *(longlong *)(unaff_RSI + 0x48);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (bVar1) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      uVar6 = FUN_01976510();
      cVar2 = FUN_00d05410(uVar4,uVar6,uVar5);
      if (cVar2 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar3 = *(longlong *)(unaff_RSI + 0x38);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (bVar1) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      uVar5 = FUN_01976550();
      cVar2 = FUN_00d05410(uVar4,uVar5,uVar6);
      if (cVar2 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar3 = *(longlong *)(unaff_RSI + 0x40);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (bVar1) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01a58d00(param_1);
  return;
}


