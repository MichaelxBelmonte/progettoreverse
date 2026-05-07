// Function: FUN_00cd7610
// Address: 00cd7610
// Size: 861 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cd77ca) */
/* WARNING: Removing unreachable block (ram,0x00cd77fb) */
/* WARNING: Removing unreachable block (ram,0x00cd7800) */
/* WARNING: Removing unreachable block (ram,0x00cd7808) */
/* WARNING: Removing unreachable block (ram,0x00cd77d0) */
/* WARNING: Removing unreachable block (ram,0x00cd77ee) */
/* WARNING: Removing unreachable block (ram,0x00cd76c4) */
/* WARNING: Removing unreachable block (ram,0x00cd772a) */
/* WARNING: Removing unreachable block (ram,0x00cd772f) */
/* WARNING: Removing unreachable block (ram,0x00cd7737) */
/* WARNING: Removing unreachable block (ram,0x00cd76ca) */
/* WARNING: Removing unreachable block (ram,0x00cd783b) */
/* WARNING: Removing unreachable block (ram,0x00cd7844) */
/* WARNING: Removing unreachable block (ram,0x00cd7699) */
/* WARNING: Removing unreachable block (ram,0x00cd76a2) */
/* WARNING: Removing unreachable block (ram,0x00cd7662) */
/* WARNING: Removing unreachable block (ram,0x00cd766b) */
/* WARNING: Removing unreachable block (ram,0x00cd7793) */
/* WARNING: Removing unreachable block (ram,0x00cd779c) */

void FUN_00cd7610(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar5;
  bool bVar6;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RSI + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00cd7670;
    }
LAB_00cd76d7:
    bVar5 = true;
    bVar4 = false;
LAB_00cd76e6:
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_40 == 0) goto LAB_00cd7700;
  }
  else {
    if (local_40 == 0) goto LAB_00cd76d7;
LAB_00cd7670:
    FUN_00d8a060();
    if (local_40 == 0) goto LAB_00cd76d7;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)*param_2 + 0x368))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = true;
    if (local_40 == 0) {
      bVar5 = false;
      local_40 = 0;
      goto LAB_00cd76e6;
    }
    FUN_00d8ee20();
    if (local_40 == 0) {
LAB_00cd78b5:
      bVar5 = false;
      goto LAB_00cd76e6;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_00d8ef00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_00cd78b5;
    lVar1 = unaff_RSI[8];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00cd0c90();
    if (local_40 == 0) {
      bVar3 = 1;
      bVar2 = 1;
      local_48 = 0;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      bVar5 = true;
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      bVar3 = 0;
      bVar2 = 0;
      local_48 = local_40;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      bVar2 = bVar3;
      bVar4 = bVar5;
    }
    bVar5 = *(longlong *)(local_48 + 0x50) == 0;
    bVar6 = local_48 == 0;
    if (!bVar6 && !bVar5) {
      bVar4 = false;
      local_48 = 0;
    }
    if (!(bool)(bVar2 | (bVar6 || bVar5))) {
      FUN_00d50b20();
      bVar4 = false;
      local_48 = 0;
    }
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar4) {
      *unaff_RDI = local_48;
    }
    else {
      if (local_48 == 0) {
        local_48 = 0;
      }
      else {
        FUN_00d50b00();
      }
      *unaff_RDI = local_48;
    }
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar4 = true;
    bVar5 = false;
  }
  FUN_00d50b20();
LAB_00cd7700:
  if ((bVar4) && (!bVar5)) {
    FUN_00d50b20();
  }
  return;
}


