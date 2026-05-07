// Function: FUN_0009a390
// Address: 0009a390
// Size: 1343 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0009a826) */
/* WARNING: Removing unreachable block (ram,0x0009a832) */
/* WARNING: Removing unreachable block (ram,0x0009a711) */
/* WARNING: Removing unreachable block (ram,0x0009a71d) */

void FUN_0009a390(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  undefined4 uVar7;
  longlong local_c8;
  char local_c0;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x88) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((*(longlong *)(unaff_RDI + 0x10) == 0) &&
     (lVar6 = *(longlong *)(unaff_RDI + 0x88), lVar6 != 0)) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x10) = lVar6;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  *puVar4 = &DAT_02516280;
  (*DAT_02516298)();
  FUN_006c5420();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_006c5fa0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_006c5f80();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x958))();
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x948))();
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x918))();
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x928))();
  FUN_00d50b20();
  lVar6 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_026d8e48;
  lVar2 = DAT_026d8e40;
  if (*(char *)(unaff_RDI + 0xb0) == '\0') {
    if (DAT_026d8e48 == 0) goto LAB_0009a5f0;
    FUN_00d50b00();
  }
  else if (DAT_026d8e40 == 0) {
LAB_0009a5f0:
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    lVar5 = lVar2;
  }
  FUN_003b6200();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x990))();
  FUN_00d50b20();
  lVar6 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_48 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  local_48 = '\x01';
  local_50 = (longlong *)(unaff_RDI + 0x70);
  FUN_006c6090();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0xa0) + 0xc) == 0) {
    FUN_000b6980();
    if (local_c0 == '\0') {
      if (local_c8 == 0) goto LAB_0009a8a8;
      FUN_00d50b00();
    }
    else if (local_c8 == 0) goto LAB_0009a8a8;
    if (0 < *(int *)(local_c8 + 0xc)) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_c8 + 0x10) + lVar6 * 8);
        local_38 = 0;
        uVar7 = FUN_00d50b00();
        local_38 = '\x01';
        local_68 = '\0';
        local_70 = lVar2;
        local_40 = unaff_RDI;
        FUN_00016480(uVar7,&local_70);
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_c8 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_0009a8a8:
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x558))();
  FUN_00d50b20();
  return;
}


