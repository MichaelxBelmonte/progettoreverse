// Function: FUN_01c0c140
// Address: 01c0c140
// Size: 1717 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c0c721) */
/* WARNING: Removing unreachable block (ram,0x01c0c72d) */
/* WARNING: Removing unreachable block (ram,0x01c0c21f) */
/* WARNING: Removing unreachable block (ram,0x01c0c301) */
/* WARNING: Removing unreachable block (ram,0x01c0c317) */
/* WARNING: Removing unreachable block (ram,0x01c0c305) */
/* WARNING: Removing unreachable block (ram,0x01c0c22c) */
/* WARNING: Removing unreachable block (ram,0x01c0c230) */
/* WARNING: Removing unreachable block (ram,0x01c0c238) */
/* WARNING: Removing unreachable block (ram,0x01c0c6c0) */
/* WARNING: Removing unreachable block (ram,0x01c0c6cc) */

undefined8 * FUN_01c0c140(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  longlong *local_a8;
  char local_a0;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  if (*param_2 == 0) {
    lVar1 = unaff_RSI[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_01c0e4f0();
    if (local_78 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
      local_50 = 0;
    }
    else if (local_70[0] == '\0') {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01c19440();
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != unaff_RSI) goto LAB_01c0c7cc;
    FUN_01c0a900();
    local_38[0] = local_70[0];
    pcVar4 = local_70;
    if (local_70[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*local_78 + 0x4c0))();
    if (cVar3 != '\0') {
      (**(code **)(*local_78 + 0x4c8))();
      if (((local_38[0] == '\0') && (local_78 != (longlong *)0x0)) && (local_70[0] != '\0')) {
        local_38[0] = '\x01';
        local_70[0] = '\0';
      }
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 == (longlong *)0x0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return unaff_RDI;
      }
    }
    cVar3 = (**(code **)(*local_78 + 0x3a0))();
    if (cVar3 == '\0') {
      FUN_01c0e5e0();
      plVar2 = local_48;
      (**(code **)(*local_78 + 0x370))();
      if (local_a0 == '\0') {
        if (local_a8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_70[0] = '\0';
      cVar3 = FUN_00d23d70();
      if ((local_70[0] != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        local_50 = 0;
        local_78 = (longlong *)0x0;
      }
      else {
        FUN_01c0e870();
        if (local_70[0] == '\0') {
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01c0c4dc;
          }
        }
        else if (local_a8 != (longlong *)0x0) {
LAB_01c0c4dc:
          FUN_00cd0de0();
          uVar5 = (**(code **)(*local_48 + 1000))();
          if (local_a8 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            local_50 = 0;
          }
          else {
            local_78 = local_a8;
            if (local_70[0] == '\0') {
              uVar5 = FUN_00d50b00();
              local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              if ((local_70[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_70[0] = '\0';
              local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            }
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          goto LAB_01c0c568;
        }
        local_50 = 0;
        local_78 = (longlong *)0x0;
      }
    }
    else {
      uVar5 = (**(code **)(*local_78 + 1000))();
      if (local_78 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        local_50 = 0;
      }
      else {
        local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_01c0c568:
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_78 != (longlong *)0x0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    local_70[0] = '\0';
    local_58 = 0;
    local_60 = 0;
    local_68 = local_78;
    if (0 < *(int *)((longlong)local_78 + 0xc)) {
      iVar7 = 0;
      do {
        FUN_01c1a2d0();
        plVar2 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar3 = (**(code **)(*unaff_RSI + 0x388))();
        if (cVar3 == '\0') {
          lVar1 = *param_2;
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) goto LAB_01c0c73b;
        }
        else {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01c0c73b:
          FUN_01c0ec80();
          if (local_a0 == '\0') {
            if (local_a8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_48 = local_a8;
          local_40 = '\0';
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        iVar7 = iVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar7);
      } while (iVar7 < *(int *)((longlong)local_78 + 0xc));
    }
    FUN_00115910();
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((char)local_50 == '\0') {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
LAB_01c0c7cc:
  *unaff_RDI = 0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


