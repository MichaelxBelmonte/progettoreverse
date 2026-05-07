// Function: FUN_01b6d110
// Address: 01b6d110
// Size: 946 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b6d3f4) */
/* WARNING: Removing unreachable block (ram,0x01b6d401) */

longlong * FUN_01b6d110(ulonglong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    FUN_00d43000();
    lVar1 = *param_2;
    if (lVar1 == local_c8) {
      if (((char)param_2[1] != '\0') || (local_c8 == 0)) goto LAB_01b6d1db;
      local_48 = param_2 + 1;
      if (local_c0 == '\0') {
        FUN_00d50b00();
        goto LAB_01b6d1d4;
      }
    }
    else {
      local_48 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_c8;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01b6d1d4:
        *(undefined1 *)local_48 = 1;
LAB_01b6d1db:
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01b6d1f5;
      }
      *param_2 = local_c8;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_48 = 1;
  }
LAB_01b6d1f5:
  local_38 = '\0';
  local_40 = 0;
  if (param_1 >> 0x20 == 0) {
    FUN_00d43000();
    cVar3 = local_38;
    lVar1 = local_40;
    if (local_40 == local_c8) {
      if ((local_38 != '\0') || (local_c8 == 0)) goto LAB_01b6d49b;
      if (local_c0 == '\0') {
        FUN_00d50b00();
        goto LAB_01b6d497;
      }
    }
    else {
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = local_c8;
        if ((cVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01b6d497:
        local_38 = '\x01';
LAB_01b6d49b:
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01b6d2ef;
      }
      local_40 = local_c8;
      if ((local_38 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00dd67f0();
    cVar3 = local_38;
    lVar1 = local_40;
    if (local_40 == local_c8) {
      if ((local_38 != '\0') || (local_c8 == 0)) goto LAB_01b6d443;
      if (local_c0 == '\0') {
        FUN_00d50b00();
        goto LAB_01b6d43f;
      }
    }
    else {
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = local_c8;
        if ((cVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01b6d43f:
        local_38 = '\x01';
LAB_01b6d443:
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01b6d2ef;
      }
      local_40 = local_c8;
      if ((local_38 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = '\x01';
LAB_01b6d2ef:
  lVar1 = DAT_0276caa0;
  if (DAT_0276caa0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e2690;
  local_50 = 0;
  if (DAT_027e2690 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  FUN_01b6efa0(&local_58,param_2,&local_40);
  FUN_0036bfe0();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_70 == '\0') {
    if (local_78 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = local_78;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    *unaff_RDI = local_78;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  FUN_002d10d0();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


