// Function: FUN_01eb2020
// Address: 01eb2020
// Size: 1294 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01eb21c4) */
/* WARNING: Removing unreachable block (ram,0x01eb21d4) */
/* WARNING: Removing unreachable block (ram,0x01eb24f8) */
/* WARNING: Removing unreachable block (ram,0x01eb2504) */

void FUN_01eb2020(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  longlong local_70;
  char local_68;
  longlong *local_50;
  char local_48 [8];
  undefined8 local_40;
  char local_38 [8];
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar3 = unaff_RDI[7];
  if (*(int *)(lVar3 + 0xc) < 1) {
    bVar9 = false;
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar6 = 0;
    bVar9 = false;
    plVar7 = (longlong *)0x0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8) + 0x980))();
      plVar5 = local_50;
      if (local_50 == plVar7) {
        plVar5 = plVar7;
        bVar8 = bVar9;
        if ((!bVar9) && (local_50 != (longlong *)0x0)) {
          bVar8 = true;
          if (local_48[0] != '\0') goto LAB_01eb213b;
          FUN_00d50b00();
          bVar8 = true;
        }
LAB_01eb2127:
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48[0] == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar8 = true;
          if ((bVar9) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01eb2127;
        }
        bVar8 = true;
        if ((bVar9) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01eb213b:
      bVar9 = bVar8;
      if (plVar5 == (longlong *)0x0) {
        FUN_00d43000();
        if (local_50 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          bVar9 = true;
          plVar5 = local_50;
          if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
             (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d21140();
      lVar6 = lVar6 + 1;
      lVar3 = unaff_RDI[7];
      plVar7 = plVar5;
    } while (lVar6 < *(int *)(lVar3 + 0xc));
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_50 + 0x6c0))();
  if (cVar1 == '\0') {
    local_40 = (longlong *)((ulonglong)local_40._4_4_ << 0x20);
  }
  else {
    lVar3 = FUN_00cafdf0();
    local_40 = (longlong *)
               CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0));
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(unaff_RDI[7] + 0xc) != 0) {
    do {
      if ((char)local_40 == '\0') {
        (**(code **)(*unaff_RDI + 0x4a0))();
        FUN_00d23340();
        local_38[0] = local_48[0];
        pcVar4 = local_48;
        if (local_48[0] == '\0') {
          pcVar4 = local_38;
        }
        *pcVar4 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_50 + 0x478))();
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x4a0))();
        FUN_00d23340();
        local_38[0] = local_48[0];
        pcVar4 = local_48;
        if (local_48[0] == '\0') {
          pcVar4 = local_38;
        }
        *pcVar4 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01e4cce0();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    } while (*(int *)(unaff_RDI[7] + 0xc) != 0);
  }
  (**(code **)(*unaff_RDI + 0xb00))();
  (**(code **)(*unaff_RDI + 0xb08))();
  if (0 < *(int *)((longlong)puVar2 + 0xc)) {
    lVar3 = 0;
    local_40 = plVar5;
    do {
      plVar5 = *(longlong **)(puVar2[2] + lVar3 * 8);
      if (local_40 == plVar5) {
        if ((!bVar9) && (local_40 != (longlong *)0x0)) {
          bVar9 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar9) && (local_40 != (longlong *)0x0)) {
          local_40 = plVar5;
          FUN_00d50b20();
          bVar9 = true;
        }
        else {
          bVar9 = true;
          local_40 = plVar5;
        }
      }
      plVar5 = *(longlong **)(*(longlong *)(unaff_RDI[7] + 0x10) + lVar3 * 8);
      FUN_00d43000();
      plVar7 = local_40;
      if (local_50 == local_40) {
        plVar7 = (longlong *)0x0;
        bVar8 = false;
      }
      else {
        bVar8 = bVar9;
        if ((bVar9) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
      }
      (**(code **)(*plVar5 + 0x978))();
      if ((bVar8) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = lVar3 + 1;
      plVar5 = local_40;
    } while (lVar3 < *(int *)((longlong)puVar2 + 0xc));
  }
  if ((bVar9) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


