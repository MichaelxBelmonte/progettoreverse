// Function: FUN_00e8dfb0
// Address: 00e8dfb0
// Size: 502 bytes
// Class: GNValue


void FUN_00e8dfb0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_0276cc80;
  if (*param_2 == 0) {
    FUN_00e7b4e0();
    FUN_00dd6690();
    lVar2 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_30 == '\0') {
          return;
        }
        if (local_38 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      local_38 = 0;
    }
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00d91000(1,&local_48);
  lVar2 = local_38;
  if (local_38 == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_30 == '\0') || (local_38 == 0)) goto LAB_00e8e06f;
      FUN_00d50b20();
    }
    else {
      local_30 = '\0';
    }
    bVar1 = false;
  }
LAB_00e8e06f:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar2 + 0xc) == 2) {
    FUN_00d8d560();
    FUN_00d8d560();
    FUN_00dd6690();
    lVar2 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e8e149;
      }
LAB_00e8e178:
      local_38 = 0;
    }
  }
  else {
    FUN_00e7b4e0();
    FUN_00dd6690();
    lVar2 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e8e149;
      }
      goto LAB_00e8e178;
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x00e8e149:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}


