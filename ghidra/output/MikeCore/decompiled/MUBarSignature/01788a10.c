// Function: FUN_01788a10
// Address: 01788a10
// Size: 938 bytes
// Class: MUBarSignature


/* WARNING: Removing unreachable block (ram,0x01788d0e) */
/* WARNING: Removing unreachable block (ram,0x01788d17) */
/* WARNING: Removing unreachable block (ram,0x01788cab) */
/* WARNING: Removing unreachable block (ram,0x01788cb4) */
/* WARNING: Removing unreachable block (ram,0x01788b45) */
/* WARNING: Removing unreachable block (ram,0x01788b4e) */
/* WARNING: Removing unreachable block (ram,0x01788b9d) */
/* WARNING: Removing unreachable block (ram,0x01788ba6) */

longlong * FUN_01788a10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  int iVar5;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  local_c0 = 0;
  if (*param_4 != 0) {
    FUN_00d216c0();
    local_c0 = *param_4;
  }
  local_d0 = *param_2;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_017891f0(param_1,&local_d0,param_3,&local_c0);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_01788b06;
    }
  }
  else if (local_88 != 0) {
LAB_01788b06:
    cVar3 = FUN_01716c00();
    if (cVar3 == '\0') {
      FUN_01715620();
      FUN_017181f0();
      if (local_88 != 0) {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01788bb0;
      }
      bVar2 = false;
      lVar1 = *param_4;
    }
    else {
      FUN_01715620();
      FUN_017185b0();
      if (local_88 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
      }
LAB_01788bb0:
      lVar1 = *param_4;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        iVar5 = 0;
        do {
          cVar3 = FUN_01716c00();
          if (cVar3 == '\0') {
            FUN_01715620();
            FUN_017181f0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01715620();
            FUN_017185b0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((longlong)puVar4 + 0xc));
      }
      FUN_01a74380();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar2) && (local_88 != 0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    goto LAB_01788d90;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01788d90:
  FUN_00d50b20();
  return unaff_RDI;
}


