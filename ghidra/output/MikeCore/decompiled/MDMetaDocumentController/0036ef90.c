// Function: FUN_0036ef90
// Address: 0036ef90
// Size: 1266 bytes
// Class: MDMetaDocumentController
// String references:
//   "MDMetaDocumentController"


/* WARNING: Removing unreachable block (ram,0x0036f2d5) */
/* WARNING: Removing unreachable block (ram,0x0036f2de) */
/* WARNING: Removing unreachable block (ram,0x0036f01e) */
/* WARNING: Removing unreachable block (ram,0x0036f023) */
/* WARNING: Removing unreachable block (ram,0x0036f128) */
/* WARNING: Removing unreachable block (ram,0x0036f131) */
/* WARNING: Removing unreachable block (ram,0x0036f167) */
/* WARNING: Removing unreachable block (ram,0x0036f190) */
/* WARNING: Removing unreachable block (ram,0x0036f169) */
/* WARNING: Removing unreachable block (ram,0x0036f192) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0036ef90(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong lVar10;
  longlong local_98;
  char local_90;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  FUN_01f30840();
  iVar5 = *(int *)((longlong)local_68 + 0xc);
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    uVar8 = 1;
    goto LAB_0036f3ba;
  }
  FUN_01f30840();
  FUN_00d23310();
  local_38 = local_60 != '\0';
  local_40 = local_68;
  if ((bool)local_38) {
    local_60 = '\0';
  }
  if ((DAT_026fbe40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0271be08 = FUN_000838a0();
    _DAT_0271bdf0 = "MDMetaDocumentController";
    _DAT_0271bdf8 = 0x60;
    _DAT_0271be00 = FUN_002a0ad0;
    _DAT_0271be10 = 0;
    uRam000000000271be18 = 0;
    _DAT_0271be20 = 0;
    _DAT_0271be98 = 0;
    uRam000000000271bea0 = 0;
    _DAT_0271bea8 = 0;
    DAT_0271beaa = 1;
    _DAT_0271be28 = 0;
    uRam000000000271be30 = 0;
    _DAT_0271be38 = 0;
    uRam000000000271be40 = 0;
    _DAT_0271be48 = 0;
    uRam000000000271be50 = 0;
    _DAT_0271be58 = 0;
    uRam000000000271be60 = 0;
    _DAT_0271be68 = 0;
    uRam000000000271be70 = 0;
    _DAT_0271be78 = 0;
    uRam000000000271be80 = 0;
    _DAT_0271be88 = 0;
    uRam000000000271be90 = 0;
    DAT_0271beb3 = 0;
    _DAT_0271beab = 0;
    ___cxa_guard_release();
  }
  if (local_68 == (longlong *)0x0) {
LAB_0036f05d:
    pplVar6 = &DAT_02802688;
    plVar9 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_0036f06d;
LAB_0036f080:
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*local_68 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0036f05d;
    pplVar6 = &local_40;
    plVar9 = local_40;
    if (local_38 == '\0') goto LAB_0036f080;
LAB_0036f06d:
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*plVar9 + 0x618))();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0036f136;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_0036f136:
    local_50 = -1;
    while( true ) {
      lVar10 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)local_68 + 0xc) <= local_50) break;
      plVar1 = *(longlong **)(local_68[2] + 8 + lVar10 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x478))();
      if (cVar4 != '\0') {
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002b3090();
    FUN_00d50b20();
  }
  if (*(int *)((longlong)puVar7 + 0xc) < 1) {
LAB_0036f3a2:
    uVar8 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
  }
  else {
    if (*(int *)((longlong)puVar7 + 0xc) == 1) {
LAB_0036f234:
      if (0 < *(int *)((longlong)puVar7 + 0xc)) {
        lVar10 = 0;
        do {
          plVar1 = *(longlong **)(puVar7[2] + lVar10 * 8);
          (**(code **)(*plVar1 + 0x4c8))();
          FUN_01f27fe0();
          iVar5 = (**(code **)(*local_40 + 0x5b8))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar5 == 0) {
            (**(code **)(*plVar1 + 0x498))();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0036f350;
              }
LAB_0036f361:
              bVar2 = true;
            }
            else {
              if (local_40 == (longlong *)0x0) goto LAB_0036f361;
LAB_0036f350:
              bVar2 = false;
              FUN_00cafd20();
            }
            (**(code **)(*plVar1 + 0x4f8))();
            if (!bVar2) {
              (**(code **)(*plVar3 + 0x3c8))();
              FUN_00d50b20();
            }
          }
          else if (iVar5 == 1) {
            FUN_002b3090();
            goto LAB_0036f3d4;
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)((longlong)puVar7 + 0xc));
      }
      FUN_002b3090();
      goto LAB_0036f3a2;
    }
    iVar5 = (**(code **)(*unaff_RDI + 0x5c8))();
    if (iVar5 != 1) {
      if (iVar5 != 0) goto LAB_0036f3a2;
      goto LAB_0036f234;
    }
LAB_0036f3d4:
    uVar8 = 0;
  }
  FUN_00d50b20();
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0036f3ba:
  return uVar8 & 0xffffffff;
}


