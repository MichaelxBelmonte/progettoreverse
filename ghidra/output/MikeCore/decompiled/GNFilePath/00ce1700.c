// Function: FUN_00ce1700
// Address: 00ce1700
// Size: 623 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce1790) */
/* WARNING: Removing unreachable block (ram,0x00ce1799) */
/* WARNING: Removing unreachable block (ram,0x00ce1942) */
/* WARNING: Removing unreachable block (ram,0x00ce194b) */
/* WARNING: Removing unreachable block (ram,0x00ce17d4) */
/* WARNING: Removing unreachable block (ram,0x00ce17e1) */

undefined8 FUN_00ce1700(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong *local_70;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  FUN_00d8ed10();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00ce173c;
    }
    if (*param_1 == 0) goto LAB_00ce1914;
  }
  else {
LAB_00ce173c:
    if (*param_1 == 0) goto LAB_00ce1914;
    if ((local_40 != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
      FUN_00df0550();
      local_38 = '\0';
      cVar3 = FUN_00d23d70();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto LAB_00ce1914;
    }
  }
  FUN_00df1af0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d90060();
  lVar1 = *param_2;
  if (lVar1 == local_40) {
    if (((char)param_2[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00ce1897;
      FUN_00d50b00();
      goto LAB_00ce18d1;
    }
LAB_00ce18d8:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = param_2[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00ce18d1:
      local_70 = param_2 + 1;
      *(undefined1 *)local_70 = 1;
      goto LAB_00ce18d8;
    }
    *param_2 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00ce1897:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_00ce1914:
  (**(code **)(*unaff_RSI + 0x400))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


