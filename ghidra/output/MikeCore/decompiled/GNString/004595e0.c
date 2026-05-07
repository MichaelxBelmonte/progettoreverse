// Function: FUN_004595e0
// Address: 004595e0
// Size: 783 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x004597c0) */
/* WARNING: Removing unreachable block (ram,0x004597cd) */
/* WARNING: Removing unreachable block (ram,0x0045983c) */
/* WARNING: Removing unreachable block (ram,0x00459849) */
/* WARNING: Removing unreachable block (ram,0x00459871) */
/* WARNING: Removing unreachable block (ram,0x00459881) */

undefined4 FUN_004595e0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01f27fe0();
  FUN_00324f60();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_000c4290();
  if ((local_90 == '\0') && (local_98 != 0)) {
    FUN_00d50b00();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_98 == 0) {
    local_44 = 0;
  }
  else {
    if (*(int *)(local_98 + 0xc) < 1) {
      local_44 = 0;
    }
    else {
      lVar5 = 0;
      local_44 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_98 + 0x10) + lVar5 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x390))();
        if ((cVar2 != '\0') && (cVar2 = FUN_0053b6c0(), cVar2 == '\0')) {
          if (plVar1[0x61] == 0) {
            FUN_0053b600();
            uVar4 = FUN_00d21140();
          }
          else {
            if (*(int *)(unaff_RDI + 0x70) == 2) {
              if (*(longlong *)(unaff_RDI + 0x60) == 0) {
                if (*(longlong *)(unaff_RDI + 0x30) != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                FUN_00d50b00();
              }
              FUN_00d50b20();
            }
            cVar2 = FUN_0053afe0();
            if (cVar2 == '\0') goto LAB_00459730;
            FUN_0053b600();
            uVar4 = FUN_00d21140();
          }
          local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
LAB_00459730:
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  FUN_00454db0();
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return local_44;
}


