// Function: FUN_002eee80
// Address: 002eee80
// Size: 605 bytes
// Class: MDTimeFormatter


/* WARNING: Removing unreachable block (ram,0x002ef082) */
/* WARNING: Removing unreachable block (ram,0x002ef08b) */
/* WARNING: Removing unreachable block (ram,0x002ef0ce) */
/* WARNING: Removing unreachable block (ram,0x002ef0d7) */
/* WARNING: Removing unreachable block (ram,0x002eef08) */
/* WARNING: Removing unreachable block (ram,0x002eef14) */
/* WARNING: Removing unreachable block (ram,0x002eefc3) */
/* WARNING: Removing unreachable block (ram,0x002eefcc) */
/* WARNING: Removing unreachable block (ram,0x002ef017) */
/* WARNING: Removing unreachable block (ram,0x002ef040) */
/* WARNING: Removing unreachable block (ram,0x002ef019) */
/* WARNING: Removing unreachable block (ram,0x002ef042) */

undefined8 FUN_002eee80(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  int iVar4;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  int local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 == 0) goto LAB_002ef0b0;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_002ef0b0;
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar4 = 0;
    do {
      lVar1 = local_58;
      FUN_01bc09c0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_002eefe0;
        }
      }
      else if (local_58 != 0) {
LAB_002eefe0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar3 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_40) break;
          local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
          FUN_00d21140();
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_a0 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002ef0b0:
  (**(code **)(*unaff_RDI + 0x9d8))();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


