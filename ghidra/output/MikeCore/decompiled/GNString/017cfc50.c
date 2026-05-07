// Function: FUN_017cfc50
// Address: 017cfc50
// Size: 548 bytes
// Class: GNString
// String references:
//   "%c"


undefined8 * FUN_017cfc50(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  longlong lVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  longlong local_38;
  
  FUN_017d2720();
  lVar5 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_017cfc92;
    }
  }
  else if (local_68 != 0) {
LAB_017cfc92:
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025795a8;
    (*DAT_025795c0)();
    local_78 = DAT_027d3890;
    local_40 = puVar3;
    if (DAT_027d3890 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00d91000(1,&local_78);
    lVar1 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d8c7a0();
    cVar2 = FUN_00d8ca70();
    if (lVar1 == 0) {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      local_38 = lVar5;
      local_60 = '\0';
      local_68 = 0;
      local_58 = lVar1;
      local_48 = 0;
      local_50 = 0;
      iVar4 = *(int *)(lVar1 + 0xc);
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          local_68 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          if (((int)lVar5 != iVar4 + -1) || (cVar2 == ':')) {
            FUN_00d8c7a0();
            local_84 = FUN_00d8ca70();
            local_88 = 1;
            local_90 = &DAT_025732e0;
            FUN_00d94d80(&DAT_025732e0,&local_90);
          }
          lVar5 = lVar5 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
          iVar4 = *(int *)(lVar1 + 0xc);
        } while ((int)lVar5 < iVar4);
      }
      FUN_00018280();
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


