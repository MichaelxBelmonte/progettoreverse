// Function: FUN_01deae10
// Address: 01deae10
// Size: 514 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01deafe2) */
/* WARNING: Removing unreachable block (ram,0x01deafeb) */
/* WARNING: Removing unreachable block (ram,0x01deae9f) */
/* WARNING: Removing unreachable block (ram,0x01deaea8) */

ulonglong FUN_01deae10(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  lVar6 = DAT_02800140;
  if (*unaff_RSI != 0) {
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    local_40 = local_50;
    if (local_50 == 0) {
      bVar3 = true;
      local_40 = 0;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      local_48 = '\0';
      bVar3 = false;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (3 < *(int *)(*unaff_RSI + 0x18)) {
        lVar6 = 0;
        do {
          FUN_01d25cb0();
          lVar2 = *(longlong *)
                   (*(longlong *)(local_50 + 0x10) +
                   (longlong)*(int *)(*(longlong *)(*unaff_RSI + 0x10) + lVar6 * 4) * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          iVar1 = *(int *)(*unaff_RSI + 0x18);
          iVar5 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar5 = iVar1;
          }
        } while (lVar6 < iVar5 >> 2);
      }
      FUN_01d2ec10();
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      if (!bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01deb00e;
    }
  }
  uVar7 = 0;
LAB_01deb00e:
  return uVar7 & 0xffffffff;
}


