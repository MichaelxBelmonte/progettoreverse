// Function: FUN_00b71b20
// Address: 00b71b20
// Size: 568 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b71d1c) */
/* WARNING: Removing unreachable block (ram,0x00b71d25) */
/* WARNING: Removing unreachable block (ram,0x00b71ce6) */

void FUN_00b71b20(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00b6c810();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x14];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x14] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar5 = FUN_00e83010();
  unaff_RDI[0x12] = lVar5;
  lVar5 = FUN_00e83010();
  unaff_RDI[0x13] = lVar5;
  lVar5 = 0;
  do {
    *(undefined1 *)(unaff_RDI[0x12] + lVar5) = 0;
    *(undefined1 *)(unaff_RDI[0x12] + 1 + lVar5) = 0;
    *(undefined1 *)(unaff_RDI[0x12] + 2 + lVar5) = 0;
    *(undefined1 *)(unaff_RDI[0x12] + 3 + lVar5) = 0;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x100);
  lVar5 = unaff_RDI[0x12];
  *(undefined2 *)(lVar5 + 0x104) = 0x100;
  *(undefined4 *)(lVar5 + 0x100) = 0;
  _memcpy(&section_000000b8.reserved2,&section_00000108,param_3);
  if (0 < unaff_ESI) {
    bVar2 = false;
    lVar5 = 0;
    do {
      (**(code **)(*unaff_RDI + 0x5c8))();
      if (local_48 == lVar5) {
        if ((bVar2) || (local_48 == 0)) {
joined_r0x00b71cce:
          lVar6 = lVar5;
          bVar3 = bVar2;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = lVar5;
          bVar3 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_00b71cb6;
          }
        }
      }
      else {
        lVar6 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
            lVar5 = local_48;
LAB_00b71cb6:
            bVar2 = true;
            goto joined_r0x00b71cce;
          }
        }
        else {
          bVar3 = true;
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar2 = bVar3;
      local_40 = '\0';
      FUN_00d21140();
      *(longlong **)(lVar6 + 0xa8) = unaff_RDI;
      FUN_00b72b40();
      unaff_ESI = unaff_ESI + -1;
      lVar5 = lVar6;
      local_48 = lVar6;
    } while (unaff_ESI != 0);
    if (bVar2) {
      FUN_00d50b20();
    }
  }
  return;
}


