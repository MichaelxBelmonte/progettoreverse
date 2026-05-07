// Function: FUN_000703d0
// Address: 000703d0
// Size: 953 bytes
// Class: MDMetaWindowController
// String references:
//   "%i/%i T"
//   "%i/%i"


/* WARNING: Removing unreachable block (ram,0x00070440) */
/* WARNING: Removing unreachable block (ram,0x0007073b) */
/* WARNING: Removing unreachable block (ram,0x00070744) */
/* WARNING: Removing unreachable block (ram,0x0007044c) */

void FUN_000703d0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong unaff_RDI;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_68;
  char local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined4 local_34;
  
  if (*(longlong **)(unaff_RDI + 0x70) == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x968))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x998))();
    return;
  }
  uVar6 = FUN_00d30620();
  puVar8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == (undefined *)0x0) goto LAB_000704c9;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
LAB_00070486:
    lVar3 = DAT_026d7d20;
    if (DAT_026d7d20 != 0) {
      FUN_00d50b00();
    }
    FUN_00d30f20();
    puVar7 = local_58;
    if (local_58 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      bVar1 = false;
    }
    else if ((char)local_50 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if (((char)local_50 != '\0') && (local_58 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_50 & 0xffffffffffffff00;
      bVar1 = true;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_34 = 0;
    if (puVar7 == (undefined *)0x0) goto LAB_00070517;
  }
  else {
    if (local_58 != (undefined *)0x0) goto LAB_00070486;
LAB_000704c9:
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    bVar1 = false;
LAB_00070517:
    puVar7 = DAT_026d7d28;
    if (DAT_026d7d28 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      FUN_00d50b00();
      bVar1 = true;
    }
  }
  cVar4 = FUN_00108e10();
  bVar2 = bVar1;
  if (cVar4 == '\0') goto LAB_0007071c;
  cVar4 = FUN_001080b0();
  local_40 = puVar8;
  if (cVar4 == '\0') {
    uVar5 = FUN_00108080();
    local_48 = FUN_00108090();
    local_50 = CONCAT44(uVar5,2);
    local_58 = &DAT_024c3df0;
    FUN_00d8cb40(&DAT_024c3df0,&local_58);
    if (local_68 == puVar7) {
      puVar8 = puVar7;
      if ((!bVar1) && (local_68 != (undefined *)0x0)) {
        bVar2 = true;
        if (local_60 != '\0') goto LAB_0007071c;
        FUN_00d50b00();
        bVar2 = true;
      }
    }
    else {
      if (local_60 != '\0') {
        bVar2 = true;
        if ((bVar1) && (puVar7 != (undefined *)0x0)) {
          FUN_00d50b20();
          puVar7 = local_68;
          goto LAB_0007071c;
        }
        goto LAB_00070639;
      }
      if (local_68 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      puVar8 = local_68;
      if ((bVar1) && (puVar7 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    puVar7 = puVar8;
    if ((local_60 != '\0') && (local_68 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = FUN_00108090();
    local_50 = 0x100000002;
    local_58 = &DAT_024c3df0;
    FUN_00d8cb40(&DAT_024c3df0,&local_58);
    if (local_68 == puVar7) {
      puVar8 = puVar7;
      if ((!bVar1) && (puVar7 != (undefined *)0x0)) {
        bVar2 = true;
        if (local_60 != '\0') goto LAB_0007071c;
        FUN_00d50b00();
        bVar2 = true;
      }
    }
    else {
      if (local_60 != '\0') {
        bVar2 = true;
        if ((bVar1) && (puVar7 != (undefined *)0x0)) {
          FUN_00d50b20();
          puVar7 = local_68;
          goto LAB_0007071c;
        }
LAB_00070639:
        bVar2 = true;
        puVar7 = local_68;
        goto LAB_0007071c;
      }
      if (local_68 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      puVar8 = local_68;
      if ((bVar1) && (puVar7 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    puVar7 = puVar8;
    if ((local_60 != '\0') && (local_68 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0007071c:
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x968))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x998))();
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar7 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


