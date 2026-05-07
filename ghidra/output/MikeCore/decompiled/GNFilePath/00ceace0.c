// Function: FUN_00ceace0
// Address: 00ceace0
// Size: 1039 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ceae5a) */
/* WARNING: Removing unreachable block (ram,0x00ceae67) */
/* WARNING: Removing unreachable block (ram,0x00ceade7) */
/* WARNING: Removing unreachable block (ram,0x00ceadf0) */
/* WARNING: Removing unreachable block (ram,0x00cead3f) */
/* WARNING: Removing unreachable block (ram,0x00ceb081) */
/* WARNING: Removing unreachable block (ram,0x00ceb091) */
/* WARNING: Removing unreachable block (ram,0x00ceb0ac) */

undefined8 * FUN_00ceace0(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_48;
  char local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
LAB_00cead53:
    do {
      cVar1 = (**(code **)(*unaff_RSI + 0x4a8))();
      if (cVar1 != '\0') {
        (**(code **)(*unaff_RSI + 0x4b0))();
        if (local_78 != unaff_RSI) {
          unaff_RSI = local_78;
          if (local_70 != '\0') {
            FUN_00d50b20();
            goto LAB_00cead53;
          }
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00cead53;
      }
      (**(code **)(*unaff_RSI + 0x388))();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = local_48;
      local_70 = '\0';
      FUN_00d23370();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RSI + 0x3f0))();
      if (local_48 != unaff_RSI) {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        unaff_RSI = local_48;
      }
    } while (unaff_RSI != (longlong *)0x0);
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00cddf30();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_80 = (longlong *)0x0;
      local_78 = local_80;
      goto joined_r0x00ceaf39;
    }
    FUN_00d50b00();
  }
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x00ceaf39:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    if (0 < *(int *)((longlong)puVar3 + 0xc)) {
      iVar4 = 0;
      local_80 = local_78;
      do {
        iVar2 = FUN_00d8c7a0();
        if (iVar2 != 0) {
          (**(code **)(*local_78 + 0x400))();
          if (local_80 == local_48) {
LAB_00ceb060:
            local_78 = local_80;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *unaff_RDI = local_48;
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              *(undefined1 *)(unaff_RDI + 1) = 1;
              local_80 = local_48;
              goto LAB_00ceb060;
            }
            *unaff_RDI = local_48;
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_40 = '\0';
            local_78 = local_48;
          }
          local_80 = local_48;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((longlong)puVar3 + 0xc));
    }
    FUN_00018280();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


