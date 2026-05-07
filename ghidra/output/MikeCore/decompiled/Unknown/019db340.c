// Function: FUN_019db340
// Address: 019db340
// Size: 532 bytes
// Class: Unknown


void FUN_019db340(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  
  lVar1 = unaff_RDI[0x7a];
  local_50 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (unaff_RDI[0x7a] != 0) {
      unaff_RDI[0x7a] = 0;
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      plVar4 = (longlong *)0x0;
      uVar3 = 0;
      do {
        local_60 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        local_58 = '\0';
        (**(code **)(*unaff_RDI + 0xab0))(param_1,&local_60);
        plVar2 = local_48;
        if (local_48 == plVar4) {
          plVar2 = plVar4;
          if (((char)uVar3 == '\0') && (local_48 != (longlong *)0x0)) {
            if (local_40 != '\0') goto LAB_019db423;
            FUN_00d50b00();
LAB_019db490:
            uVar3 = 1;
            plVar2 = plVar4;
          }
joined_r0x019db4f4:
          plVar4 = plVar2;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            local_38 = uVar3;
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar3 = 1;
            if (((char)local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar4 = plVar2;
              goto LAB_019db490;
            }
            goto joined_r0x019db4f4;
          }
          if (((char)uVar3 != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_019db423:
          local_40 = '\0';
          uVar3 = 1;
          plVar4 = plVar2;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_0198a800();
          (**(code **)(*plVar4 + 0x620))();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar1 + 0xc));
      goto LAB_019db4fe;
    }
  }
  uVar3 = 0;
  plVar4 = (longlong *)0x0;
LAB_019db4fe:
  lVar5 = local_50;
  FUN_00ca1340();
  lVar1 = unaff_RDI[0x7a];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x7a] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (((char)uVar3 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


