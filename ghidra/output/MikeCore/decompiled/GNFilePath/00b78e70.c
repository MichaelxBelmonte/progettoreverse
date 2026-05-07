// Function: FUN_00b78e70
// Address: 00b78e70
// Size: 760 bytes
// Class: GNFilePath


void FUN_00b78e70(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if ((DAT_028a5388 == 0) || (DAT_028a5391 == '\0')) {
    FUN_00e8cb50();
    lVar1 = DAT_027637e0;
    if (DAT_028a5388 == 0) {
      if (DAT_027637e0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0276cc90;
      local_48 = lVar1;
      if (DAT_0276cc90 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_027637f0;
      local_40 = lVar3;
      if (DAT_027637f0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027637f8;
      local_38 = lVar1;
      if (DAT_027637f8 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_02763800;
      if (DAT_02763800 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_02763808;
      if (DAT_02763808 != 0) {
        FUN_00d50b00();
      }
      local_80 = local_40;
      local_78 = local_38;
      local_70 = lVar3;
      local_68 = lVar1;
      local_60 = lVar4;
      FUN_007f7950(&local_78,&local_80,&local_70,&local_68);
      FUN_000b6830();
      lVar5 = DAT_028a5388;
      if (DAT_028a5388 != local_58) {
        if (local_50 == '\0') {
          if (local_58 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_58;
          }
        }
        else {
          local_50 = '\0';
          lVar5 = local_58;
        }
        bVar2 = DAT_028a5388 != 0;
        DAT_028a5388 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_58;
        }
      }
      if ((lVar5 != 0) && (DAT_028a5390 == '\0')) {
        DAT_028a5390 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_58;
      }
      if ((local_50 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      FUN_007f76c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5391 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5391 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = DAT_02763810;
  if (((int)param_2 < 0) || (*(int *)(DAT_028a5388 + 0xc) <= (int)param_2)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(DAT_028a5388 + 0x10) + (ulonglong)param_2 * 8);
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


