// Function: FUN_00b21ea0
// Address: 00b21ea0
// Size: 924 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b2219e) */
/* WARNING: Removing unreachable block (ram,0x00b221a7) */
/* WARNING: Removing unreachable block (ram,0x00b22065) */
/* WARNING: Removing unreachable block (ram,0x00b2206e) */
/* WARNING: Removing unreachable block (ram,0x00b221ce) */
/* WARNING: Removing unreachable block (ram,0x00b221d7) */
/* WARNING: Removing unreachable block (ram,0x00b2209a) */
/* WARNING: Removing unreachable block (ram,0x00b220a3) */
/* WARNING: Removing unreachable block (ram,0x00b21ff9) */
/* WARNING: Removing unreachable block (ram,0x00b21ff7) */
/* WARNING: Removing unreachable block (ram,0x00b22020) */
/* WARNING: Removing unreachable block (ram,0x00b22022) */
/* WARNING: Removing unreachable block (ram,0x00b220d1) */
/* WARNING: Removing unreachable block (ram,0x00b220de) */

undefined8 * FUN_00b21ea0(undefined1 *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  int iVar6;
  longlong lVar7;
  longlong local_78;
  char local_70;
  int local_60;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  FUN_00b21b60();
  if (local_78 == 0) {
    bVar3 = true;
    bVar2 = false;
    lVar7 = 0;
    bVar1 = false;
    if (unaff_ESI != param_2) goto LAB_00b21f86;
LAB_00b220f7:
    iVar6 = *(int *)((longlong)puVar5 + 0xc);
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    lVar7 = local_78;
    if (unaff_ESI == param_2) {
      FUN_00d50b00();
      bVar2 = true;
joined_r0x00b21fbb:
      bVar1 = true;
      if (local_78 != 0) {
        bVar1 = true;
        local_60 = -1;
        while (local_60 = local_60 + 1, local_60 < *(int *)(local_78 + 0xc)) {
          cVar4 = FUN_00d23d70();
          if ((cVar4 != '\0') && (cVar4 = FUN_00d23d70(), cVar4 != '\0')) {
            FUN_00d21140();
          }
        }
        FUN_00136b80();
        bVar3 = false;
        goto LAB_00b220f7;
      }
    }
    else {
      bVar2 = true;
LAB_00b21f86:
      FUN_00b21b60();
      if (local_78 != 0) {
        if (local_70 == '\0') {
          FUN_00d50b00();
        }
        goto joined_r0x00b21fbb;
      }
      bVar1 = false;
    }
    bVar3 = true;
    iVar6 = *(int *)((longlong)puVar5 + 0xc);
  }
  if (iVar6 == 0) {
    if (lVar7 != 0) {
      if (0 < *(int *)(lVar7 + 0xc)) {
        iVar6 = 0;
        do {
          cVar4 = FUN_00d23d70();
          if (cVar4 != '\0') {
            FUN_00d21140();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar7 + 0xc));
      }
      FUN_00136b80();
    }
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = 1;
    }
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (bVar1 && !bVar3) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


