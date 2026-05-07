// Function: FUN_00dbebd0
// Address: 00dbebd0
// Size: 775 bytes
// Class: GNURL
// String references:
//   "=\""
//   "\""


/* WARNING: Removing unreachable block (ram,0x00dbee35) */
/* WARNING: Removing unreachable block (ram,0x00dbee3e) */
/* WARNING: Removing unreachable block (ram,0x00dbedfa) */
/* WARNING: Removing unreachable block (ram,0x00dbee03) */
/* WARNING: Removing unreachable block (ram,0x00dbee76) */
/* WARNING: Removing unreachable block (ram,0x00dbee7f) */

void FUN_00dbebd0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  
  if ((*param_3 == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    puVar7 = (undefined8 *)*param_2;
    if (*(char *)(param_2 + 1) != '\0') {
      *unaff_RDI = puVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    goto LAB_00dbee9b;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar4 = DAT_0277c878;
  plVar1 = (longlong *)*param_1;
  if (DAT_0277c878 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02783b18;
  if (cVar5 != '\0') {
    if (DAT_02783b18 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    lVar2 = *param_1;
    if (lVar2 == local_a8) {
      if (((char)param_1[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_00dbedbf;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_1[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_00dbedbf:
      *(undefined1 *)(param_1 + 1) = 1;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8c7d0();
LAB_00dbee9b:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


